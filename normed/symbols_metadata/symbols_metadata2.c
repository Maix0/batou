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

void	init_sym_metadata10(t_symbols_metadata *v)
{
	v->arr[anon_sym_AT2] = (t_sm){.visible = 1, .named = 1};
	v->arr[anon_sym_0] = (t_sm){.visible = 1, .named = 1};
	v->arr[anon_sym__] = (t_sm){.visible = 1, .named = 1};
	v->arr[sym_heredoc_start] = (t_sm){.visible = 1, .named = 1};
	v->arr[sym_simple_heredoc_body] = (t_sm){.visible = 1, .named = 1};
	v->arr[sym__heredoc_body_beginning] = (t_sm){.visible = 0, .named = 1};
	v->arr[sym_heredoc_content] = (t_sm){.visible = 1, .named = 1};
	v->arr[sym_heredoc_end] = (t_sm){.visible = 1, .named = 1};
	v->arr[sym_file_descriptor] = (t_sm){.visible = 1, .named = 1};
	v->arr[sym__empty_value] = (t_sm){.visible = 0, .named = 1};
	v->arr[sym__concat] = (t_sm){.visible = 0, .named = 1};
	v->arr[sym_variable_name] = (t_sm){.visible = 1, .named = 1};
	v->arr[sym_test_operator] = (t_sm){.visible = 1, .named = 1};
	v->arr[sym_regex] = (t_sm){.visible = 1, .named = 1};
	v->arr[sym__regex_no_slash] = (t_sm){.visible = 1, .named = 1};
	init_sym_metadata11(v);
}

void	init_sym_metadata11(t_symbols_metadata *v)
{
	v->arr[sym__regex_no_space] = (t_sm){.visible = 1, .named = 1};
	v->arr[sym__expansion_word] = (t_sm){.visible = 1, .named = 1};
	v->arr[sym_extglob_pattern] = (t_sm){.visible = 1, .named = 1};
	v->arr[sym__bare_dollar] = (t_sm){.visible = 1, .named = 0};
	v->arr[sym__brace_start] = (t_sm){.visible = 1, .named = 0};
	v->arr[sym__immediate_double_hash] = (t_sm){.visible = 1, .named = 0};
	v->arr[sym__external_expansion_sym_hash] = (t_sm){.visible = 1, .named = \
	0};
	v->arr[sym__external_expansion_sym_bang] = (t_sm){.visible = 1, .named = \
	0};
	v->arr[sym__external_expansion_sym_equal] = (t_sm){.visible = 1, .named = \
	0};
	v->arr[sym___error_recovery] = (t_sm){.visible = 0, .named = 1};
	v->arr[sym_program] = (t_sm){.visible = 1, .named = 1};
	v->arr[sym__statements] = (t_sm){.visible = 0, .named = 1};
	v->arr[aux_sym__terminated_statement] = (t_sm){.visible = 0, .named = 0};
	v->arr[sym__statement_not_pipeline] = (t_sm){.visible = 0, .named = 1};
	v->arr[sym_redirected_statement] = (t_sm){.visible = 1, .named = 1};
	init_sym_metadata12(v);
}

void	init_sym_metadata12(t_symbols_metadata *v)
{
	v->arr[sym_for_statement] = (t_sm){.visible = 1, .named = 1};
	v->arr[sym_c_style_for_statement] = (t_sm){.visible = 1, .named = 1};
	v->arr[sym__for_body] = (t_sm){.visible = 0, .named = 1};
	v->arr[sym__c_expression] = (t_sm){.visible = 0, .named = 1};
	v->arr[sym__c_expression_not_assignment] = (t_sm){.visible = 0, .named = \
	1};
	v->arr[sym__c_variable_assignment] = (t_sm){.visible = 1, .named = 1};
	v->arr[sym__c_unary_expression] = (t_sm){.visible = 1, .named = 1};
	v->arr[sym__c_binary_expression] = (t_sm){.visible = 1, .named = 1};
	v->arr[sym__c_postfix_expression] = (t_sm){.visible = 1, .named = 1};
	v->arr[sym__c_parenthesized_expression] = (t_sm){.visible = 1, .named = 1};
	v->arr[sym_while_statement] = (t_sm){.visible = 1, .named = 1};
	v->arr[sym_do_group] = (t_sm){.visible = 1, .named = 1};
	v->arr[sym_if_statement] = (t_sm){.visible = 1, .named = 1};
	v->arr[sym_elif_clause] = (t_sm){.visible = 1, .named = 1};
	v->arr[sym_else_clause] = (t_sm){.visible = 1, .named = 1};
	init_sym_metadata13(v);
}

void	init_sym_metadata13(t_symbols_metadata *v)
{
	v->arr[sym_case_statement] = (t_sm){.visible = 1, .named = 1};
	v->arr[sym_case_item] = (t_sm){.visible = 1, .named = 1};
	v->arr[sym_last_case_item] = (t_sm){.visible = 1, .named = 1};
	v->arr[sym_function_definition] = (t_sm){.visible = 1, .named = 1};
	v->arr[sym_compound_statement] = (t_sm){.visible = 1, .named = 1};
	v->arr[sym_subshell] = (t_sm){.visible = 1, .named = 1};
	v->arr[sym_pipeline] = (t_sm){.visible = 1, .named = 1};
	v->arr[sym_list] = (t_sm){.visible = 1, .named = 1};
	v->arr[sym_negated_command] = (t_sm){.visible = 1, .named = 1};
	v->arr[sym_test_command] = (t_sm){.visible = 1, .named = 1};
	v->arr[sym__test_command_binary_expression] = (t_sm){.visible = 1, .named = \
	1};
	v->arr[sym_declaration_command] = (t_sm){.visible = 1, .named = 1};
	v->arr[sym_unset_command] = (t_sm){.visible = 1, .named = 1};
	v->arr[sym_command] = (t_sm){.visible = 1, .named = 1};
	v->arr[sym_command_name] = (t_sm){.visible = 1, .named = 1};
	init_sym_metadata14(v);
}

void	init_sym_metadata14(t_symbols_metadata *v)
{
	v->arr[sym_variable_assignment] = (t_sm){.visible = 1, .named = 1};
	v->arr[sym_variable_assignments] = (t_sm){.visible = 1, .named = 1};
	v->arr[sym_subscript] = (t_sm){.visible = 1, .named = 1};
	v->arr[sym_file_redirect] = (t_sm){.visible = 1, .named = 1};
	v->arr[sym_heredoc_redirect] = (t_sm){.visible = 1, .named = 1};
	v->arr[sym__heredoc_pipeline] = (t_sm){.visible = 1, .named = 1};
	v->arr[sym__heredoc_expression] = (t_sm){.visible = 0, .named = 1};
	v->arr[aux_sym__heredoc_command] = (t_sm){.visible = 0, .named = 0};
	v->arr[sym__heredoc_body] = (t_sm){.visible = 0, .named = 1};
	v->arr[sym_heredoc_body] = (t_sm){.visible = 1, .named = 1};
	v->arr[sym__simple_heredoc_body] = (t_sm){.visible = 0, .named = 1};
	v->arr[sym_herestring_redirect] = (t_sm){.visible = 1, .named = 1};
	v->arr[sym__expression] = (t_sm){.visible = 0, .named = 1, .supertype = 1};
	v->arr[sym_binary_expression] = (t_sm){.visible = 1, .named = 1};
	v->arr[sym_ternary_expression] = (t_sm){.visible = 1, .named = 1};
	init_sym_metadata15(v);
}

// file funcs2.c
