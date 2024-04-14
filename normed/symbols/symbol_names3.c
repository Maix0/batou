/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   symbol_names3.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 17:28:24 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 17:28:39 by maiboyer         ###   ########.fr       */
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

void	init_symbol_names10(t_symbol_names *v)
{
	v->arr[sym_binary_expression] = "binary_expression";
	v->arr[sym_ternary_expression] = "ternary_expression";
	v->arr[sym_unary_expression] = "unary_expression";
	v->arr[sym_postfix_expression] = "postfix_expression";
	v->arr[sym_parenthesized_expression] = "parenthesized_expression";
	v->arr[sym_arithmetic_expansion] = "arithmetic_expansion";
	v->arr[sym_brace_expression] = "brace_expression";
	v->arr[sym__arithmetic_expression] = "_arithmetic_expression";
	v->arr[sym__arithmetic_literal] = "_arithmetic_literal";
	v->arr[sym__arithmetic_binary_expression] = "binary_expression";
	v->arr[sym__arithmetic_ternary_expression] = "ternary_expression";
	v->arr[sym__arithmetic_unary_expression] = "unary_expression";
	v->arr[sym__arithmetic_postfix_expression] = "postfix_expression";
	v->arr[sym__arithmetic_parenthesized_expression] = \
"parenthesized_expression";
	v->arr[sym_concatenation] = "concatenation";
	v->arr[sym_string] = "string";
	v->arr[sym_translated_string] = "translated_string";
	v->arr[sym_array] = "array";
	v->arr[sym_number] = "number";
	v->arr[sym_simple_expansion] = "simple_expansion";
	v->arr[sym_expansion] = "expansion";
	v->arr[sym__expansion_body] = "_expansion_body";
	v->arr[sym__expansion_expression] = "_expansion_expression";
	init_symbol_names12(v);
}

void	init_symbol_names11(t_symbol_names *v)
{
	v->arr[sym__expansion_regex_removal] = "_expansion_regex_removal";
	v->arr[sym__expansion_max_length] = "_expansion_max_length";
	v->arr[sym__expansion_max_length_expression] = \
"_expansion_max_length_expression";
	v->arr[sym__expansion_max_length_binary_expression] = "binary_expression";
	v->arr[sym__expansion_operator] = "_expansion_operator";
	v->arr[sym__concatenation_in_expansion] = "concatenation";
	v->arr[sym_command_substitution] = "command_substitution";
	v->arr[sym_process_substitution] = "process_substitution";
	v->arr[sym__extglob_blob] = "_extglob_blob";
	v->arr[sym__c_terminator] = "_c_terminator";
	v->arr[aux_sym__statements_repeat1] = "_statements_repeat1";
	v->arr[aux_sym_redirected_statement_repeat1] = \
"redirected_statement_repeat1";
	v->arr[aux_sym_redirected_statement_repeat2] = \
"redirected_statement_repeat2";
	v->arr[aux_sym_for_statement_repeat1] = "for_statement_repeat1";
	v->arr[aux_sym__for_body_repeat1] = "_for_body_repeat1";
	v->arr[aux_sym_if_statement_repeat1] = "if_statement_repeat1";
	init_symbol_names12(v);
}

void	init_symbol_names12(t_symbol_names *v)
{
	v->arr[aux_sym_case_statement_repeat1] = "case_statement_repeat1";
	v->arr[aux_sym_case_item_repeat1] = "case_item_repeat1";
	v->arr[aux_sym_pipeline_repeat1] = "pipeline_repeat1";
	v->arr[aux_sym_declaration_command_repeat1] = "declaration_command_repeat1";
	v->arr[aux_sym_unset_command_repeat1] = "unset_command_repeat1";
	v->arr[aux_sym_command_repeat1] = "command_repeat1";
	v->arr[aux_sym_command_repeat2] = "command_repeat2";
	v->arr[aux_sym_variable_assignments_repeat1] = \
"variable_assignments_repeat1";
	v->arr[aux_sym_heredoc_body_repeat1] = "heredoc_body_repeat1";
	v->arr[aux_sym__literal_repeat1] = "_literal_repeat1";
	v->arr[aux_sym_arithmetic_expansion_repeat1] = \
"arithmetic_expansion_repeat1";
	v->arr[aux_sym_concatenation_repeat1] = "concatenation_repeat1";
	v->arr[aux_sym_string_repeat1] = "string_repeat1";
	v->arr[aux_sym__expansion_body_repeat1] = "_expansion_body_repeat1";
	v->arr[aux_sym__expansion_regex_repeat1] = "_expansion_regex_repeat1";
	v->arr[aux_sym__concatenation_in_expansion_repeat1] = \
"_concatenation_in_expansion_repeat1";
	init_symbol_names13(v);
}

void	init_symbol_names13(t_symbol_names *v)
{
	v->arr[anon_sym_PIPE_PIPE] = "||";
	v->arr[anon_sym_while] = "while";
	v->arr[anon_sym_typeset] = "typeset";
	v->arr[anon_sym_declare] = "declare";
	v->arr[anon_sym_DOLLAR_LBRACK] = "$[";
	v->arr[anon_sym_QMARK2] = "\?";
	v->arr[sym__comment_word] = "word";
	v->arr[anon_sym_COLON_PLUS] = ":+";
	v->arr[sym__external_expansion_sym_bang] = "!";
	v->arr[sym_last_case_item] = "case_item";
	v->arr[sym_case_statement] = "case_statement";
	v->arr[sym_case_item] = "case_item";
	v->arr[sym_herestring_redirect] = "herestring_redirect";
	v->arr[sym__expression] = "_expression";
	v->arr[sym__expansion_regex] = "_expansion_regex";
	v->arr[sym__expansion_regex_replacement] = "_expansion_regex_replacement";
}
