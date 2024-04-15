/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs516.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_parse_table2580(t_parse_table *v)
{
	v->arr[426][anon_sym_GT_GT] = 675;
	v->arr[426][anon_sym_LPAREN] = 677;
	v->arr[426][anon_sym_while] = 679;
	v->arr[426][anon_sym_until] = 679;
	v->arr[426][anon_sym_if] = 681;
	v->arr[426][anon_sym_case] = 683;
	v->arr[426][anon_sym_function] = 687;
	v->arr[426][anon_sym_LBRACE] = 689;
	v->arr[426][anon_sym_BANG] = 691;
	v->arr[426][anon_sym_LBRACK] = 693;
	v->arr[426][anon_sym_LBRACK_LBRACK] = 695;
	v->arr[426][anon_sym_declare] = 697;
	v->arr[426][anon_sym_typeset] = 697;
	v->arr[426][anon_sym_export] = 697;
	v->arr[426][anon_sym_readonly] = 697;
	init_parse_table2581(v);
}

void	init_parse_table2581(t_parse_table *v)
{
	v->arr[426][anon_sym_local] = 697;
	v->arr[426][anon_sym_unset] = 699;
	v->arr[426][anon_sym_unsetenv] = 699;
	v->arr[426][anon_sym_AMP_GT] = 673;
	v->arr[426][anon_sym_AMP_GT_GT] = 675;
	v->arr[426][anon_sym_LT_AMP] = 673;
	v->arr[426][anon_sym_GT_AMP] = 673;
	v->arr[426][anon_sym_GT_PIPE] = 675;
	v->arr[426][anon_sym_LT_AMP_DASH] = 701;
	v->arr[426][anon_sym_GT_AMP_DASH] = 701;
	v->arr[426][anon_sym_LT_LT_LT] = 703;
	v->arr[426][anon_sym_DOLLAR_LPAREN_LPAREN] = 705;
	v->arr[426][anon_sym_DOLLAR_LBRACK] = 707;
	v->arr[426][anon_sym_DOLLAR] = 709;
	v->arr[426][sym__special_character] = 711;
	init_parse_table2582(v);
}

void	init_parse_table2582(t_parse_table *v)
{
	v->arr[426][anon_sym_DQUOTE] = 713;
	v->arr[426][sym_raw_string] = 715;
	v->arr[426][sym_ansi_c_string] = 715;
	v->arr[426][aux_sym_number_token1] = 717;
	v->arr[426][aux_sym_number_token2] = 719;
	v->arr[426][anon_sym_DOLLAR_LBRACE] = 721;
	v->arr[426][anon_sym_DOLLAR_LPAREN] = 723;
	v->arr[426][anon_sym_BQUOTE] = 725;
	v->arr[426][anon_sym_DOLLAR_BQUOTE] = 727;
	v->arr[426][anon_sym_LT_LPAREN] = 729;
	v->arr[426][anon_sym_GT_LPAREN] = 729;
	v->arr[426][sym_comment] = 71;
	v->arr[426][sym_file_descriptor] = 731;
	v->arr[426][sym_variable_name] = 733;
	v->arr[426][sym_test_operator] = 735;
	init_parse_table2583(v);
}

void	init_parse_table2583(t_parse_table *v)
{
	v->arr[426][sym__brace_start] = 737;
	v->arr[427][sym__statement_not_pipeline] = 6572;
	v->arr[427][sym_redirected_statement] = 4663;
	v->arr[427][sym_for_statement] = 4663;
	v->arr[427][sym_c_style_for_statement] = 4663;
	v->arr[427][sym_while_statement] = 4312;
	v->arr[427][sym_if_statement] = 4312;
	v->arr[427][sym_case_statement] = 4663;
	v->arr[427][sym_function_definition] = 4663;
	v->arr[427][sym_compound_statement] = 4663;
	v->arr[427][sym_subshell] = 4663;
	v->arr[427][sym_pipeline] = 5108;
	v->arr[427][sym_list] = 4663;
	v->arr[427][sym_negated_command] = 4663;
	v->arr[427][sym_test_command] = 4663;
	init_parse_table2584(v);
}

void	init_parse_table2584(t_parse_table *v)
{
	v->arr[427][sym_declaration_command] = 4663;
	v->arr[427][sym_unset_command] = 4663;
	v->arr[427][sym_command] = 4663;
	v->arr[427][sym_command_name] = 534;
	v->arr[427][sym_variable_assignment] = 991;
	v->arr[427][sym_variable_assignments] = 4663;
	v->arr[427][sym_subscript] = 6774;
	v->arr[427][sym_file_redirect] = 2055;
	v->arr[427][sym_herestring_redirect] = 2156;
	v->arr[427][sym_arithmetic_expansion] = 957;
	v->arr[427][sym_brace_expression] = 957;
	v->arr[427][sym_concatenation] = 1386;
	v->arr[427][sym_string] = 957;
	v->arr[427][sym_translated_string] = 957;
	v->arr[427][sym_number] = 957;
	init_parse_table2585(v);
}

// file funcs516.c
