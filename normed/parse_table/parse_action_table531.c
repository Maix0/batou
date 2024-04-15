/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs531.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_parse_table2655(t_parse_table *v)
{
	v->arr[439][sym_command_name] = 620;
	v->arr[439][sym_variable_assignment] = 1907;
	v->arr[439][sym_variable_assignments] = 5561;
	v->arr[439][sym_subscript] = 6756;
	v->arr[439][sym_file_redirect] = 2780;
	v->arr[439][sym_herestring_redirect] = 2886;
	v->arr[439][sym_arithmetic_expansion] = 1799;
	v->arr[439][sym_brace_expression] = 1799;
	v->arr[439][sym_concatenation] = 2368;
	v->arr[439][sym_string] = 1799;
	v->arr[439][sym_translated_string] = 1799;
	v->arr[439][sym_number] = 1799;
	v->arr[439][sym_simple_expansion] = 1799;
	v->arr[439][sym_expansion] = 1799;
	v->arr[439][sym_command_substitution] = 1799;
	init_parse_table2656(v);
}

void	init_parse_table2656(t_parse_table *v)
{
	v->arr[439][sym_process_substitution] = 1799;
	v->arr[439][aux_sym_redirected_statement_repeat2] = 5362;
	v->arr[439][aux_sym_command_repeat1] = 955;
	v->arr[439][aux_sym__literal_repeat1] = 2332;
	v->arr[439][sym_word] = 1025;
	v->arr[439][anon_sym_for] = 145;
	v->arr[439][anon_sym_select] = 147;
	v->arr[439][anon_sym_LPAREN_LPAREN] = 1027;
	v->arr[439][anon_sym_LT] = 1029;
	v->arr[439][anon_sym_GT] = 1029;
	v->arr[439][anon_sym_GT_GT] = 1031;
	v->arr[439][anon_sym_LPAREN] = 1033;
	v->arr[439][anon_sym_while] = 157;
	v->arr[439][anon_sym_until] = 157;
	v->arr[439][anon_sym_if] = 159;
	init_parse_table2657(v);
}

void	init_parse_table2657(t_parse_table *v)
{
	v->arr[439][anon_sym_case] = 161;
	v->arr[439][anon_sym_function] = 163;
	v->arr[439][anon_sym_LBRACE] = 165;
	v->arr[439][anon_sym_BANG] = 1035;
	v->arr[439][anon_sym_LBRACK] = 169;
	v->arr[439][anon_sym_LBRACK_LBRACK] = 173;
	v->arr[439][anon_sym_declare] = 175;
	v->arr[439][anon_sym_typeset] = 175;
	v->arr[439][anon_sym_export] = 175;
	v->arr[439][anon_sym_readonly] = 175;
	v->arr[439][anon_sym_local] = 175;
	v->arr[439][anon_sym_unset] = 177;
	v->arr[439][anon_sym_unsetenv] = 177;
	v->arr[439][anon_sym_AMP_GT] = 1029;
	v->arr[439][anon_sym_AMP_GT_GT] = 1031;
	init_parse_table2658(v);
}

void	init_parse_table2658(t_parse_table *v)
{
	v->arr[439][anon_sym_LT_AMP] = 1029;
	v->arr[439][anon_sym_GT_AMP] = 1029;
	v->arr[439][anon_sym_GT_PIPE] = 1031;
	v->arr[439][anon_sym_LT_AMP_DASH] = 1037;
	v->arr[439][anon_sym_GT_AMP_DASH] = 1037;
	v->arr[439][anon_sym_LT_LT_LT] = 1039;
	v->arr[439][anon_sym_DOLLAR_LPAREN_LPAREN] = 1041;
	v->arr[439][anon_sym_DOLLAR_LBRACK] = 1043;
	v->arr[439][anon_sym_DOLLAR] = 1045;
	v->arr[439][sym__special_character] = 1047;
	v->arr[439][anon_sym_DQUOTE] = 1049;
	v->arr[439][sym_raw_string] = 1051;
	v->arr[439][sym_ansi_c_string] = 1051;
	v->arr[439][aux_sym_number_token1] = 1053;
	v->arr[439][aux_sym_number_token2] = 1055;
	init_parse_table2659(v);
}

void	init_parse_table2659(t_parse_table *v)
{
	v->arr[439][anon_sym_DOLLAR_LBRACE] = 1057;
	v->arr[439][anon_sym_DOLLAR_LPAREN] = 1059;
	v->arr[439][anon_sym_BQUOTE] = 1061;
	v->arr[439][anon_sym_DOLLAR_BQUOTE] = 1063;
	v->arr[439][anon_sym_LT_LPAREN] = 1065;
	v->arr[439][anon_sym_GT_LPAREN] = 1065;
	v->arr[439][sym_comment] = 71;
	v->arr[439][sym_file_descriptor] = 1067;
	v->arr[439][sym_variable_name] = 217;
	v->arr[439][sym_test_operator] = 1069;
	v->arr[439][sym__brace_start] = 1071;
	v->arr[440][sym__statement_not_pipeline] = 6566;
	v->arr[440][sym_redirected_statement] = 5383;
	v->arr[440][sym_for_statement] = 5383;
	v->arr[440][sym_c_style_for_statement] = 5383;
	init_parse_table2660(v);
}

// file funcs531.c
