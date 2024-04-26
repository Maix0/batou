#include "tree_sitter/api.h"
#include <bsd/string.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const TSLanguage *tree_sitter_bash(void);

typedef uintptr_t t_usize;
typedef struct s_node
{
	uint64_t	   kind;
	const char	  *kind_str;
	const char	  *input;
	char		  *single_str;
	t_usize		   start;
	t_usize		   end;
	t_usize		   childs_count;
	struct s_node *childs;
} t_node;

t_node build_node(TSNode curr, const char *input);

t_node *build_childs(TSNode parent, const char *input, t_usize count)
{
	t_node *ret;
	t_usize idx;
	TSNode	child;

	ret = calloc(sizeof(*ret), count);
	if (ret == NULL)
		return (NULL);
	idx = 0;
	while (idx < count)
	{
		child = ts_node_named_child(parent, idx);
		ret[idx] = build_node(child, input);
		idx++;
	}
	return (ret);
}

t_node build_node(TSNode curr, const char *input)
{
	t_node out;

	out.kind = ts_node_symbol(curr);
	out.kind_str = ts_node_type(curr);
	out.start = ts_node_start_byte(curr);
	out.end = ts_node_end_byte(curr);
	out.input = input;
	out.single_str = NULL;
	out.childs_count = ts_node_named_child_count(curr);
	if (out.childs_count == 0)
		out.childs = NULL;
	else
		out.childs = build_childs(curr, input, out.childs_count);
	return (out);
}

char *node_getstr(t_node *node)
{
	t_usize start;
	t_usize end;
	char   *ret;

	if (node->single_str == NULL)
	{
		start = node->start;
		end = node->end;
		if (start > end)
			return (NULL);
		ret = calloc(1, end - start + 1);
		strlcpy(ret, node->input + start, end - start + 1);
		node->single_str = ret;
	}
	return (node->single_str);
}

char *string_slice(const char *s, const TSNode node)
{
	t_usize start;
	t_usize end;
	char   *ret;

	start = ts_node_start_byte(node);
	end = ts_node_end_byte(node);
	if (start > end)
		return (NULL);
	ret = calloc(1, end - start + 1);
	strlcpy(ret, s + start, end - start + 1);
	return (ret);
}

void free_node(t_node t)
{
	t_usize idx;

	idx = 0;
	while (idx < t.childs_count)
		free_node(t.childs[idx++]);
	free(t.childs);
	if (t.single_str != NULL)
		free(t.single_str);
}

void print_node_data(t_node *t, t_usize depth)
{
	t_usize idx;

	idx = 0;
	while (idx++ < depth)
		printf("\t");
	idx = 0;
	printf("%s = %s\n", t->kind_str, node_getstr(t));
	while (idx < t->childs_count)
		print_node_data(&t->childs[idx++], depth + 1);
}
#include <fcntl.h>
#include <time.h>

int main(void)
{
	char *str = "./echo \"${ECHO-$(another cmd)}\" 'arg2' no_arg";

	TSParser *parser = ts_parser_new();

	printf("before = %zu\n", clock());
	const TSLanguage *lang = tree_sitter_bash();
	printf("after = %zu\n", clock());

	ts_parser_set_language(parser, lang);

	TSTree *ret = ts_parser_parse_string(parser, NULL, str, strlen(str));

	TSNode root = ts_tree_root_node(ret);
	t_node node = build_node(root, str);

	/*
	t_usize child_count = ts_node_named_child_count(root);
	for (t_usize idx = 0; idx < child_count; idx++)
	{
		TSNode child = ts_node_named_child(root, idx);
		char  *s = string_slice(str, child);
		printf("[%zu] %s = '%s'\n", idx, ts_node_type(child), s);
		free(s);
	}
	*/
	print_node_data(&node, 0);
	free_node(node);
	ts_tree_delete(ret);
	ts_parser_delete(parser);
}
