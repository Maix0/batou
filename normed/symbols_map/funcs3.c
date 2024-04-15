/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/15 14:38:35 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_symbols_map15(t_symbols_map *v)
{
	v->arr[sym_unary_expression] = sym_unary_expression;
	v->arr[sym_postfix_expression] = sym_postfix_expression;
	v->arr[sym_parenthesized_expression] = sym_parenthesized_expression;
	v->arr[sym_arithmetic_expansion] = sym_arithmetic_expansion;
	v->arr[sym_brace_expression] = sym_brace_expression;
	v->arr[sym__arithmetic_expression] = sym__arithmetic_expression;
	v->arr[sym__arithmetic_literal] = sym__arithmetic_literal;
	v->arr[sym__arithmetic_binary_expression] = sym_binary_expression;
	v->arr[sym__arithmetic_ternary_expression] = sym_ternary_expression;
	v->arr[sym__arithmetic_unary_expression] = sym_unary_expression;
	v->arr[sym__arithmetic_postfix_expression] = sym_postfix_expression;
	v->arr[sym__arithmetic_parenthesized_expression] \
	=sym_parenthesized_expression;
	v->arr[sym_concatenation] = sym_concatenation;
	v->arr[sym_string] = sym_string;
	v->arr[sym_translated_string] = sym_translated_string;
	init_symbols_map16(v);
}

void	init_symbols_map16(t_symbols_map *v)
{
	v->arr[sym_array] = sym_array;
	v->arr[sym_number] = sym_number;
	v->arr[sym_simple_expansion] = sym_simple_expansion;
	v->arr[sym_expansion] = sym_expansion;
	v->arr[sym__expansion_body] = sym__expansion_body;
	v->arr[sym__expansion_expression] = sym__expansion_expression;
	v->arr[sym__expansion_regex] = sym__expansion_regex;
	v->arr[sym__expansion_regex_replacement] = sym__expansion_regex_replacement;
	v->arr[sym__expansion_regex_removal] = sym__expansion_regex_removal;
	v->arr[sym__expansion_max_length] = sym__expansion_max_length;
	v->arr[sym__expansion_max_length_expression] = \
	sym__expansion_max_length_expression;
	v->arr[sym__expansion_max_length_binary_expression] = sym_binary_expression;
	v->arr[sym__expansion_operator] = sym__expansion_operator;
	v->arr[sym__concatenation_in_expansion] = sym_concatenation;
	v->arr[sym_command_substitution] = sym_command_substitution;
	init_symbols_map17(v);
}

void	init_symbols_map17(t_symbols_map *v)
{
	v->arr[sym_process_substitution] = sym_process_substitution;
	v->arr[sym__extglob_blob] = sym__extglob_blob;
	v->arr[sym__c_terminator] = sym__c_terminator;
	v->arr[aux_sym__statements_repeat1] = aux_sym__statements_repeat1;
	v->arr[aux_sym_redirected_statement_repeat1] = \
	aux_sym_redirected_statement_repeat1;
	v->arr[aux_sym_redirected_statement_repeat2] = \
	aux_sym_redirected_statement_repeat2;
	v->arr[aux_sym_for_statement_repeat1] = aux_sym_for_statement_repeat1;
	v->arr[aux_sym__for_body_repeat1] = aux_sym__for_body_repeat1;
	v->arr[aux_sym_if_statement_repeat1] = aux_sym_if_statement_repeat1;
	v->arr[aux_sym_case_statement_repeat1] = aux_sym_case_statement_repeat1;
	v->arr[aux_sym_case_item_repeat1] = aux_sym_case_item_repeat1;
	v->arr[aux_sym_pipeline_repeat1] = aux_sym_pipeline_repeat1;
	v->arr[aux_sym_declaration_command_repeat1] = \
	aux_sym_declaration_command_repeat1;
	v->arr[aux_sym_unset_command_repeat1] = aux_sym_unset_command_repeat1;
	v->arr[aux_sym_command_repeat1] = aux_sym_command_repeat1;
	init_symbols_map18(v);
}

void	init_symbols_map18(t_symbols_map *v)
{
	v->arr[aux_sym_command_repeat2] = aux_sym_command_repeat2;
	v->arr[aux_sym_variable_assignments_repeat1] = \
	aux_sym_variable_assignments_repeat1;
	v->arr[aux_sym_heredoc_body_repeat1] = aux_sym_heredoc_body_repeat1;
	v->arr[aux_sym__literal_repeat1] = aux_sym__literal_repeat1;
	v->arr[aux_sym_arithmetic_expansion_repeat1] = \
	aux_sym_arithmetic_expansion_repeat1;
	v->arr[aux_sym_concatenation_repeat1] = aux_sym_concatenation_repeat1;
	v->arr[aux_sym_string_repeat1] = aux_sym_string_repeat1;
	v->arr[aux_sym__expansion_body_repeat1] = aux_sym__expansion_body_repeat1;
	v->arr[aux_sym__expansion_regex_repeat1] = aux_sym__expansion_regex_repeat1;
	v->arr[aux_sym__concatenation_in_expansion_repeat1] = \
	aux_sym__concatenation_in_expansion_repeat1;
	init_symbols_map19(v);
}

// file funcs3.c
