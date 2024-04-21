/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   symbols_metadata3.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/21 21:39:42 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_sym_metadata15(t_symbols_metadata *v)
{
	v->arr[sym_unary_expression] = (t_sm){.visible = 1, .named = 1};
	v->arr[sym_postfix_expression] = (t_sm){.visible = 1, .named = 1};
	v->arr[sym_parenthesized_expression] = (t_sm){.visible = 1, .named = 1};
	v->arr[sym_arithmetic_expansion] = (t_sm){.visible = 1, .named = 1};
	v->arr[sym_brace_expression] = (t_sm){.visible = 1, .named = 1};
	v->arr[sym__arithmetic_expression] = (t_sm){.visible = 0, .named = 1};
	v->arr[sym__arithmetic_literal] = (t_sm){.visible = 0, .named = 1};
	v->arr[sym__arithmetic_binary_expression] = (t_sm){.visible = 1, .named = \
	1};
	v->arr[sym__arithmetic_ternary_expression] = (t_sm){.visible = 1, .named = \
	1};
	v->arr[sym__arithmetic_unary_expression] = (t_sm){.visible = 1, .named = \
	1};
	v->arr[sym__arithmetic_postfix_expression] = (t_sm){.visible = 1, .named = \
	1};
	v->arr[sym__arithmetic_parenthesized_expression] = (t_sm){.visible = 1, \
	.named = 1};
	v->arr[sym_concatenation] = (t_sm){.visible = 1, .named = 1};
	v->arr[sym_string] = (t_sm){.visible = 1, .named = 1};
	v->arr[sym_translated_string] = (t_sm){.visible = 1, .named = 1};
	init_sym_metadata16(v);
}

void	init_sym_metadata16(t_symbols_metadata *v)
{
	v->arr[sym_array] = (t_sm){.visible = 1, .named = 1};
	v->arr[sym_number] = (t_sm){.visible = 1, .named = 1};
	v->arr[sym_simple_expansion] = (t_sm){.visible = 1, .named = 1};
	v->arr[sym_expansion] = (t_sm){.visible = 1, .named = 1};
	v->arr[sym__expansion_body] = (t_sm){.visible = 0, .named = 1};
	v->arr[sym__expansion_expression] = (t_sm){.visible = 0, .named = 1};
	v->arr[sym__expansion_regex] = (t_sm){.visible = 0, .named = 1};
	v->arr[sym__expansion_regex_replacement] = (t_sm){.visible = 0, .named = \
	1};
	v->arr[sym__expansion_regex_removal] = (t_sm){.visible = 0, .named = 1};
	v->arr[sym__expansion_max_length] = (t_sm){.visible = 0, .named = 1};
	v->arr[sym__expansion_max_length_expression] = (t_sm){.visible = 0, .named \
	= 1};
	v->arr[sym__expansion_max_length_binary_expression] = (t_sm){.visible = 1, \
	.named = 1};
	v->arr[sym__expansion_operator] = (t_sm){.visible = 0, .named = 1};
	v->arr[sym__concatenation_in_expansion] = (t_sm){.visible = 1, .named = 1};
	v->arr[sym_command_substitution] = (t_sm){.visible = 1, .named = 1};
	init_sym_metadata17(v);
}

void	init_sym_metadata17(t_symbols_metadata *v)
{
	v->arr[sym_process_substitution] = (t_sm){.visible = 1, .named = 1};
	v->arr[sym__extglob_blob] = (t_sm){.visible = 0, .named = 1};
	v->arr[sym__c_terminator] = (t_sm){.visible = 0, .named = 1};
	v->arr[aux_sym__statements_repeat1] = (t_sm){.visible = 0, .named = 0};
	v->arr[aux_sym_redirected_statement_repeat1] = (t_sm){.visible = 0, .named \
	= 0};
	v->arr[aux_sym_redirected_statement_repeat2] = (t_sm){.visible = 0, .named \
	= 0};
	v->arr[aux_sym_for_statement_repeat1] = (t_sm){.visible = 0, .named = 0};
	v->arr[aux_sym__for_body_repeat1] = (t_sm){.visible = 0, .named = 0};
	v->arr[aux_sym_if_statement_repeat1] = (t_sm){.visible = 0, .named = 0};
	v->arr[aux_sym_case_statement_repeat1] = (t_sm){.visible = 0, .named = 0};
	v->arr[aux_sym_case_item_repeat1] = (t_sm){.visible = 0, .named = 0};
	v->arr[aux_sym_pipeline_repeat1] = (t_sm){.visible = 0, .named = 0};
	v->arr[aux_sym_declaration_command_repeat1] = (t_sm){.visible = 0, .named = \
	0};
	v->arr[aux_sym_unset_command_repeat1] = (t_sm){.visible = 0, .named = 0};
	v->arr[aux_sym_command_repeat1] = (t_sm){.visible = 0, .named = 0};
	init_sym_metadata18(v);
}

void	init_sym_metadata18(t_symbols_metadata *v)
{
	v->arr[aux_sym_command_repeat2] = (t_sm){.visible = 0, .named = 0};
	v->arr[aux_sym_variable_assignments_repeat1] = (t_sm){.visible = 0, .named \
	= 0};
	v->arr[aux_sym_heredoc_body_repeat1] = (t_sm){.visible = 0, .named = 0};
	v->arr[aux_sym__literal_repeat1] = (t_sm){.visible = 0, .named = 0};
	v->arr[aux_sym_arithmetic_expansion_repeat1] = (t_sm){.visible = 0, .named \
	= 0};
	v->arr[aux_sym_concatenation_repeat1] = (t_sm){.visible = 0, .named = 0};
	v->arr[aux_sym_string_repeat1] = (t_sm){.visible = 0, .named = 0};
	v->arr[aux_sym__expansion_body_repeat1] = (t_sm){.visible = 0, .named = 0};
	v->arr[aux_sym__expansion_regex_repeat1] = (t_sm){.visible = 0, .named = \
	0};
	v->arr[aux_sym__concatenation_in_expansion_repeat1] = (t_sm){.visible = 0, \
	.named = 0};
}

// file funcs3.c
