/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_symbols_map10(t_symbols_map *v)
{
	v->arr[anon_sym_AT2] = anon_sym_AT2;
	v->arr[anon_sym_0] = anon_sym_AT2;
	v->arr[anon_sym__] = anon_sym_AT2;
	v->arr[sym_heredoc_start] = sym_heredoc_start;
	v->arr[sym_simple_heredoc_body] = sym_heredoc_body;
	v->arr[sym__heredoc_body_beginning] = sym__heredoc_body_beginning;
	v->arr[sym_heredoc_content] = sym_heredoc_content;
	v->arr[sym_heredoc_end] = sym_heredoc_end;
	v->arr[sym_file_descriptor] = sym_file_descriptor;
	v->arr[sym__empty_value] = sym__empty_value;
	v->arr[sym__concat] = sym__concat;
	v->arr[sym_variable_name] = sym_variable_name;
	v->arr[sym_test_operator] = sym_test_operator;
	v->arr[sym_regex] = sym_regex;
	v->arr[sym__regex_no_slash] = sym_regex;
	init_symbols_map11(v);
}

void	init_symbols_map11(t_symbols_map *v)
{
	v->arr[sym__regex_no_space] = sym_regex;
	v->arr[sym__expansion_word] = sym_word;
	v->arr[sym_extglob_pattern] = sym_extglob_pattern;
	v->arr[sym__bare_dollar] = anon_sym_DOLLAR;
	v->arr[sym__brace_start] = anon_sym_LBRACE;
	v->arr[sym__immediate_double_hash] = sym__immediate_double_hash;
	v->arr[sym__external_expansion_sym_hash] = anon_sym_POUND;
	v->arr[sym__external_expansion_sym_bang] = anon_sym_BANG;
	v->arr[sym__external_expansion_sym_equal] = anon_sym_EQ;
	v->arr[sym___error_recovery] = sym___error_recovery;
	v->arr[sym_program] = sym_program;
	v->arr[sym__statements] = sym__statements;
	v->arr[aux_sym__terminated_statement] = aux_sym__terminated_statement;
	v->arr[sym__statement_not_pipeline] = sym__statement_not_pipeline;
	v->arr[sym_redirected_statement] = sym_redirected_statement;
	init_symbols_map12(v);
}

void	init_symbols_map12(t_symbols_map *v)
{
	v->arr[sym_for_statement] = sym_for_statement;
	v->arr[sym_c_style_for_statement] = sym_c_style_for_statement;
	v->arr[sym__for_body] = sym__for_body;
	v->arr[sym__c_expression] = sym__c_expression;
	v->arr[sym__c_expression_not_assignment] = sym__c_expression_not_assignment;
	v->arr[sym__c_variable_assignment] = sym_variable_assignment;
	v->arr[sym__c_unary_expression] = sym_unary_expression;
	v->arr[sym__c_binary_expression] = sym_binary_expression;
	v->arr[sym__c_postfix_expression] = sym_postfix_expression;
	v->arr[sym__c_parenthesized_expression] = sym_parenthesized_expression;
	v->arr[sym_while_statement] = sym_while_statement;
	v->arr[sym_do_group] = sym_do_group;
	v->arr[sym_if_statement] = sym_if_statement;
	v->arr[sym_elif_clause] = sym_elif_clause;
	v->arr[sym_else_clause] = sym_else_clause;
	init_symbols_map13(v);
}

void	init_symbols_map13(t_symbols_map *v)
{
	v->arr[sym_case_statement] = sym_case_statement;
	v->arr[sym_case_item] = sym_case_item;
	v->arr[sym_last_case_item] = sym_case_item;
	v->arr[sym_function_definition] = sym_function_definition;
	v->arr[sym_compound_statement] = sym_compound_statement;
	v->arr[sym_subshell] = sym_subshell;
	v->arr[sym_pipeline] = sym_pipeline;
	v->arr[sym_list] = sym_list;
	v->arr[sym_negated_command] = sym_negated_command;
	v->arr[sym_test_command] = sym_test_command;
	v->arr[sym__test_command_binary_expression] = sym_binary_expression;
	v->arr[sym_declaration_command] = sym_declaration_command;
	v->arr[sym_unset_command] = sym_unset_command;
	v->arr[sym_command] = sym_command;
	v->arr[sym_command_name] = sym_command_name;
	init_symbols_map14(v);
}

void	init_symbols_map14(t_symbols_map *v)
{
	v->arr[sym_variable_assignment] = sym_variable_assignment;
	v->arr[sym_variable_assignments] = sym_variable_assignments;
	v->arr[sym_subscript] = sym_subscript;
	v->arr[sym_file_redirect] = sym_file_redirect;
	v->arr[sym_heredoc_redirect] = sym_heredoc_redirect;
	v->arr[sym__heredoc_pipeline] = sym_pipeline;
	v->arr[sym__heredoc_expression] = sym__heredoc_expression;
	v->arr[aux_sym__heredoc_command] = aux_sym__heredoc_command;
	v->arr[sym__heredoc_body] = sym__heredoc_body;
	v->arr[sym_heredoc_body] = sym_heredoc_body;
	v->arr[sym__simple_heredoc_body] = sym__simple_heredoc_body;
	v->arr[sym_herestring_redirect] = sym_herestring_redirect;
	v->arr[sym__expression] = sym__expression;
	v->arr[sym_binary_expression] = sym_binary_expression;
	v->arr[sym_ternary_expression] = sym_ternary_expression;
	init_symbols_map15(v);
}

// file funcs2.c
