/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs53.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_parse_table265(t_parse_table *v)
{
	v->arr[40][anon_sym_GT_LPAREN] = 729;
	v->arr[40][sym_comment] = 71;
	v->arr[40][sym_file_descriptor] = 731;
	v->arr[40][sym_variable_name] = 733;
	v->arr[40][sym_test_operator] = 735;
	v->arr[40][sym__brace_start] = 737;
	v->arr[41][sym__statements] = 6611;
	v->arr[41][sym__statement_not_pipeline] = 6674;
	v->arr[41][sym_redirected_statement] = 4416;
	v->arr[41][sym_for_statement] = 4416;
	v->arr[41][sym_c_style_for_statement] = 4416;
	v->arr[41][sym_while_statement] = 4239;
	v->arr[41][sym_if_statement] = 4239;
	v->arr[41][sym_case_statement] = 4416;
	v->arr[41][sym_function_definition] = 4416;
	init_parse_table266(v);
}

void	init_parse_table266(t_parse_table *v)
{
	v->arr[41][sym_compound_statement] = 4416;
	v->arr[41][sym_subshell] = 4416;
	v->arr[41][sym_pipeline] = 4910;
	v->arr[41][sym_list] = 4416;
	v->arr[41][sym_negated_command] = 4416;
	v->arr[41][sym_test_command] = 4416;
	v->arr[41][sym_declaration_command] = 4416;
	v->arr[41][sym_unset_command] = 4416;
	v->arr[41][sym_command] = 4416;
	v->arr[41][sym_command_name] = 530;
	v->arr[41][sym_variable_assignment] = 849;
	v->arr[41][sym_variable_assignments] = 4416;
	v->arr[41][sym_subscript] = 6760;
	v->arr[41][sym_file_redirect] = 1893;
	v->arr[41][sym_herestring_redirect] = 1892;
	init_parse_table267(v);
}

void	init_parse_table267(t_parse_table *v)
{
	v->arr[41][sym_arithmetic_expansion] = 852;
	v->arr[41][sym_brace_expression] = 852;
	v->arr[41][sym_concatenation] = 1169;
	v->arr[41][sym_string] = 852;
	v->arr[41][sym_translated_string] = 852;
	v->arr[41][sym_number] = 852;
	v->arr[41][sym_simple_expansion] = 852;
	v->arr[41][sym_expansion] = 852;
	v->arr[41][sym_command_substitution] = 852;
	v->arr[41][sym_process_substitution] = 852;
	v->arr[41][aux_sym__statements_repeat1] = 426;
	v->arr[41][aux_sym_redirected_statement_repeat2] = 4371;
	v->arr[41][aux_sym_command_repeat1] = 989;
	v->arr[41][aux_sym__literal_repeat1] = 1026;
	v->arr[41][sym_word] = 665;
	init_parse_table268(v);
}

void	init_parse_table268(t_parse_table *v)
{
	v->arr[41][anon_sym_for] = 667;
	v->arr[41][anon_sym_select] = 669;
	v->arr[41][anon_sym_LPAREN_LPAREN] = 671;
	v->arr[41][anon_sym_LT] = 673;
	v->arr[41][anon_sym_GT] = 673;
	v->arr[41][anon_sym_GT_GT] = 675;
	v->arr[41][anon_sym_LPAREN] = 677;
	v->arr[41][anon_sym_while] = 679;
	v->arr[41][anon_sym_until] = 679;
	v->arr[41][anon_sym_if] = 681;
	v->arr[41][anon_sym_case] = 683;
	v->arr[41][anon_sym_SEMI_SEMI] = 749;
	v->arr[41][anon_sym_SEMI_AMP] = 487;
	v->arr[41][anon_sym_SEMI_SEMI_AMP] = 487;
	v->arr[41][anon_sym_function] = 687;
	init_parse_table269(v);
}

void	init_parse_table269(t_parse_table *v)
{
	v->arr[41][anon_sym_LBRACE] = 689;
	v->arr[41][anon_sym_BANG] = 691;
	v->arr[41][anon_sym_LBRACK] = 693;
	v->arr[41][anon_sym_LBRACK_LBRACK] = 695;
	v->arr[41][anon_sym_declare] = 697;
	v->arr[41][anon_sym_typeset] = 697;
	v->arr[41][anon_sym_export] = 697;
	v->arr[41][anon_sym_readonly] = 697;
	v->arr[41][anon_sym_local] = 697;
	v->arr[41][anon_sym_unset] = 699;
	v->arr[41][anon_sym_unsetenv] = 699;
	v->arr[41][anon_sym_AMP_GT] = 673;
	v->arr[41][anon_sym_AMP_GT_GT] = 675;
	v->arr[41][anon_sym_LT_AMP] = 673;
	v->arr[41][anon_sym_GT_AMP] = 673;
	init_parse_table270(v);
}

// file funcs53.c
