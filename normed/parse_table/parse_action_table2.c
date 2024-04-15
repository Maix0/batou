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

void	init_parse_table10(t_parse_table *v)
{
	v->arr[0][sym__external_expansion_sym_hash] = 1;
	v->arr[0][sym__external_expansion_sym_bang] = 1;
	v->arr[0][sym__external_expansion_sym_equal] = 1;
	v->arr[0][sym___error_recovery] = 1;
	v->arr[1][sym_program] = 7470;
	v->arr[1][sym__statements] = 7469;
	v->arr[1][sym__statement_not_pipeline] = 6572;
	v->arr[1][sym_redirected_statement] = 4860;
	v->arr[1][sym_for_statement] = 4860;
	v->arr[1][sym_c_style_for_statement] = 4860;
	v->arr[1][sym_while_statement] = 4321;
	v->arr[1][sym_if_statement] = 4321;
	v->arr[1][sym_case_statement] = 4860;
	v->arr[1][sym_function_definition] = 4860;
	v->arr[1][sym_compound_statement] = 4860;
	init_parse_table11(v);
}

void	init_parse_table11(t_parse_table *v)
{
	v->arr[1][sym_subshell] = 4860;
	v->arr[1][sym_pipeline] = 5079;
	v->arr[1][sym_list] = 4860;
	v->arr[1][sym_negated_command] = 4860;
	v->arr[1][sym_test_command] = 4860;
	v->arr[1][sym_declaration_command] = 4860;
	v->arr[1][sym_unset_command] = 4860;
	v->arr[1][sym_command] = 4860;
	v->arr[1][sym_command_name] = 534;
	v->arr[1][sym_variable_assignment] = 913;
	v->arr[1][sym_variable_assignments] = 4860;
	v->arr[1][sym_subscript] = 6774;
	v->arr[1][sym_file_redirect] = 2055;
	v->arr[1][sym_herestring_redirect] = 2156;
	v->arr[1][sym_arithmetic_expansion] = 957;
	init_parse_table12(v);
}

void	init_parse_table12(t_parse_table *v)
{
	v->arr[1][sym_brace_expression] = 957;
	v->arr[1][sym_concatenation] = 1386;
	v->arr[1][sym_string] = 957;
	v->arr[1][sym_translated_string] = 957;
	v->arr[1][sym_number] = 957;
	v->arr[1][sym_simple_expansion] = 957;
	v->arr[1][sym_expansion] = 957;
	v->arr[1][sym_command_substitution] = 957;
	v->arr[1][sym_process_substitution] = 957;
	v->arr[1][aux_sym__statements_repeat1] = 427;
	v->arr[1][aux_sym_redirected_statement_repeat2] = 4571;
	v->arr[1][aux_sym_command_repeat1] = 937;
	v->arr[1][aux_sym__literal_repeat1] = 1212;
	v->arr[1][0] = 5;
	v->arr[1][sym_word] = 7;
	init_parse_table13(v);
}

void	init_parse_table13(t_parse_table *v)
{
	v->arr[1][anon_sym_for] = 9;
	v->arr[1][anon_sym_select] = 11;
	v->arr[1][anon_sym_LPAREN_LPAREN] = 13;
	v->arr[1][anon_sym_LT] = 15;
	v->arr[1][anon_sym_GT] = 15;
	v->arr[1][anon_sym_GT_GT] = 17;
	v->arr[1][anon_sym_LPAREN] = 19;
	v->arr[1][anon_sym_while] = 21;
	v->arr[1][anon_sym_until] = 21;
	v->arr[1][anon_sym_if] = 23;
	v->arr[1][anon_sym_case] = 25;
	v->arr[1][anon_sym_function] = 27;
	v->arr[1][anon_sym_LBRACE] = 29;
	v->arr[1][anon_sym_BANG] = 31;
	v->arr[1][anon_sym_LBRACK] = 33;
	init_parse_table14(v);
}

void	init_parse_table14(t_parse_table *v)
{
	v->arr[1][anon_sym_LBRACK_LBRACK] = 35;
	v->arr[1][anon_sym_declare] = 37;
	v->arr[1][anon_sym_typeset] = 37;
	v->arr[1][anon_sym_export] = 37;
	v->arr[1][anon_sym_readonly] = 37;
	v->arr[1][anon_sym_local] = 37;
	v->arr[1][anon_sym_unset] = 39;
	v->arr[1][anon_sym_unsetenv] = 39;
	v->arr[1][anon_sym_AMP_GT] = 15;
	v->arr[1][anon_sym_AMP_GT_GT] = 17;
	v->arr[1][anon_sym_LT_AMP] = 15;
	v->arr[1][anon_sym_GT_AMP] = 15;
	v->arr[1][anon_sym_GT_PIPE] = 17;
	v->arr[1][anon_sym_LT_AMP_DASH] = 41;
	v->arr[1][anon_sym_GT_AMP_DASH] = 41;
	init_parse_table15(v);
}

// file funcs2.c
