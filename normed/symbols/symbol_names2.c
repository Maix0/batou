/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   symbol_names2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 17:27:30 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 17:28:15 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/symbols.h"

void			init_symbol_names(t_symbol_names *v);
void			init_symbol_names2(t_symbol_names *v);
void			init_symbol_names3(t_symbol_names *v);
void			init_symbol_names4(t_symbol_names *v);
void			init_symbol_names5(t_symbol_names *v);
void			init_symbol_names6(t_symbol_names *v);
void			init_symbol_names7(t_symbol_names *v);
void			init_symbol_names8(t_symbol_names *v);
void			init_symbol_names9(t_symbol_names *v);
void			init_symbol_names10(t_symbol_names *v);
void			init_symbol_names11(t_symbol_names *v);
void			init_symbol_names12(t_symbol_names *v);
void			init_symbol_names13(t_symbol_names *v);

void	init_symbol_names5(t_symbol_names *v)
{
	v->arr[aux_sym_brace_expression_token1] = "number";
	v->arr[anon_sym_DOT_DOT] = "..";
	v->arr[anon_sym_RBRACE2] = "}";
	v->arr[aux_sym_concatenation_token1] = "``";
	v->arr[anon_sym_DOLLAR] = "$";
	v->arr[sym__special_character] = "_special_character";
	v->arr[anon_sym_DQUOTE] = "\"";
	v->arr[sym_string_content] = "string_content";
	v->arr[sym_raw_string] = "raw_string";
	v->arr[sym_ansi_c_string] = "ansi_c_string";
	v->arr[aux_sym_number_token1] = "number_token1";
	v->arr[aux_sym_number_token2] = "number_token2";
	v->arr[anon_sym_POUND] = "#";
	v->arr[anon_sym_DOLLAR_LBRACE] = "${";
	v->arr[anon_sym_RBRACE3] = "}";
	v->arr[anon_sym_BANG2] = "!";
	v->arr[anon_sym_AT] = "@";
	v->arr[anon_sym_STAR2] = "*";
	v->arr[anon_sym_POUND2] = "#";
	v->arr[anon_sym_EQ2] = "=";
	v->arr[anon_sym_COLON_EQ] = ":=";
	v->arr[anon_sym_DASH3] = "-";
	v->arr[anon_sym_COLON_DASH] = ":-";
	v->arr[anon_sym_PLUS3] = "+";
	init_symbol_names6(v);
}

void	init_symbol_names6(t_symbol_names *v)
{
	v->arr[anon_sym_COLON_QMARK] = ":\?";
	v->arr[anon_sym_PERCENT_PERCENT] = "%%";
	v->arr[aux_sym__expansion_regex_token1] = "regex";
	v->arr[anon_sym_SLASH_SLASH] = "//";
	v->arr[anon_sym_SLASH_POUND] = "/#";
	v->arr[anon_sym_SLASH_PERCENT] = "/%";
	v->arr[anon_sym_COMMA_COMMA] = ";;";
	v->arr[anon_sym_CARET_CARET] = "^^";
	v->arr[anon_sym_U] = "U";
	v->arr[anon_sym_u] = "u";
	v->arr[anon_sym_L] = "L";
	v->arr[anon_sym_Q] = "Q";
	v->arr[anon_sym_E] = "E";
	v->arr[anon_sym_P] = "P";
	v->arr[anon_sym_A] = "A";
	v->arr[anon_sym_K] = "K";
	v->arr[anon_sym_a] = "a";
	v->arr[anon_sym_k] = "k";
	v->arr[anon_sym_DOLLAR_LPAREN] = "$(";
	v->arr[anon_sym_BQUOTE] = "`";
	v->arr[anon_sym_DOLLAR_BQUOTE] = "$`";
	v->arr[anon_sym_LT_LPAREN] = "<(";
	v->arr[anon_sym_GT_LPAREN] = ">(";
	v->arr[sym_comment] = "comment";
	init_symbol_names7(v);
}

void	init_symbol_names7(t_symbol_names *v)
{
	v->arr[aux_sym__simple_variable_name_token1] = "variable_name";
	v->arr[aux_sym__multiline_variable_name_token1] = "variable_name";
	v->arr[anon_sym_AT2] = "special_variable_name";
	v->arr[anon_sym_0] = "special_variable_name";
	v->arr[anon_sym__] = "special_variable_name";
	v->arr[sym_heredoc_start] = "heredoc_start";
	v->arr[sym_simple_heredoc_body] = "heredoc_body";
	v->arr[sym__heredoc_body_beginning] = "_heredoc_body_beginning";
	v->arr[sym_heredoc_content] = "heredoc_content";
	v->arr[sym_heredoc_end] = "heredoc_end";
	v->arr[sym_file_descriptor] = "file_descriptor";
	v->arr[sym__empty_value] = "_empty_value";
	v->arr[sym__concat] = "_concat";
	v->arr[sym_variable_name] = "variable_name";
	v->arr[sym_test_operator] = "test_operator";
	v->arr[sym_regex] = "regex";
	v->arr[sym__regex_no_slash] = "regex";
	v->arr[sym__regex_no_space] = "regex";
	v->arr[sym__expansion_word] = "word";
	v->arr[sym_extglob_pattern] = "extglob_pattern";
	v->arr[sym__bare_dollar] = "$";
	v->arr[sym__brace_start] = "{";
	v->arr[sym__immediate_double_hash] = "##";
	v->arr[sym__external_expansion_sym_hash] = "#";
	init_symbol_names8(v);
}

void	init_symbol_names8(t_symbol_names *v)
{
	v->arr[sym__external_expansion_sym_equal] = "=";
	v->arr[sym___error_recovery] = "__error_recovery";
	v->arr[sym_program] = "program";
	v->arr[sym__statements] = "_statements";
	v->arr[aux_sym__terminated_statement] = "_terminated_statement";
	v->arr[sym__statement_not_pipeline] = "_statement_not_pipeline";
	v->arr[sym_redirected_statement] = "redirected_statement";
	v->arr[sym_for_statement] = "for_statement";
	v->arr[sym_c_style_for_statement] = "c_style_for_statement";
	v->arr[sym__for_body] = "_for_body";
	v->arr[sym__c_expression] = "_c_expression";
	v->arr[sym__c_expression_not_assignment] = "_c_expression_not_assignment";
	v->arr[sym__c_variable_assignment] = "variable_assignment";
	v->arr[sym__c_unary_expression] = "unary_expression";
	v->arr[sym__c_binary_expression] = "binary_expression";
	v->arr[sym__c_postfix_expression] = "postfix_expression";
	v->arr[sym__c_parenthesized_expression] = "parenthesized_expression";
	v->arr[sym_while_statement] = "while_statement";
	v->arr[sym_do_group] = "do_group";
	v->arr[sym_if_statement] = "if_statement";
	v->arr[sym_elif_clause] = "elif_clause";
	v->arr[sym_else_clause] = "else_clause";
	init_symbol_names9(v);
}

void	init_symbol_names9(t_symbol_names *v)
{
	v->arr[sym_function_definition] = "function_definition";
	v->arr[sym_compound_statement] = "compound_statement";
	v->arr[sym_subshell] = "subshell";
	v->arr[sym_pipeline] = "pipeline";
	v->arr[sym_list] = "list";
	v->arr[sym_negated_command] = "negated_command";
	v->arr[sym_test_command] = "test_command";
	v->arr[sym__test_command_binary_expression] = "binary_expression";
	v->arr[sym_declaration_command] = "declaration_command";
	v->arr[sym_unset_command] = "unset_command";
	v->arr[sym_command] = "command";
	v->arr[sym_command_name] = "command_name";
	v->arr[sym_variable_assignment] = "variable_assignment";
	v->arr[sym_variable_assignments] = "variable_assignments";
	v->arr[sym_subscript] = "subscript";
	v->arr[sym_file_redirect] = "file_redirect";
	v->arr[sym_heredoc_redirect] = "heredoc_redirect";
	v->arr[sym__heredoc_pipeline] = "pipeline";
	v->arr[sym__heredoc_expression] = "_heredoc_expression";
	v->arr[aux_sym__heredoc_command] = "_heredoc_command";
	v->arr[sym__heredoc_body] = "_heredoc_body";
	v->arr[sym_heredoc_body] = "heredoc_body";
	v->arr[sym__simple_heredoc_body] = "_simple_heredoc_body";
	init_symbol_names10(v);
}
