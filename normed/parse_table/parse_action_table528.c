/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs528.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_parse_table2640(t_parse_table *v)
{
	v->arr[436][anon_sym_readonly] = 697;
	v->arr[436][anon_sym_local] = 697;
	v->arr[436][anon_sym_unset] = 699;
	v->arr[436][anon_sym_unsetenv] = 699;
	v->arr[436][anon_sym_AMP_GT] = 673;
	v->arr[436][anon_sym_AMP_GT_GT] = 675;
	v->arr[436][anon_sym_LT_AMP] = 673;
	v->arr[436][anon_sym_GT_AMP] = 673;
	v->arr[436][anon_sym_GT_PIPE] = 675;
	v->arr[436][anon_sym_LT_AMP_DASH] = 701;
	v->arr[436][anon_sym_GT_AMP_DASH] = 701;
	v->arr[436][anon_sym_LT_LT_LT] = 703;
	v->arr[436][anon_sym_DOLLAR_LPAREN_LPAREN] = 705;
	v->arr[436][anon_sym_DOLLAR_LBRACK] = 707;
	v->arr[436][anon_sym_DOLLAR] = 709;
	init_parse_table2641(v);
}

void	init_parse_table2641(t_parse_table *v)
{
	v->arr[436][sym__special_character] = 711;
	v->arr[436][anon_sym_DQUOTE] = 713;
	v->arr[436][sym_raw_string] = 715;
	v->arr[436][sym_ansi_c_string] = 715;
	v->arr[436][aux_sym_number_token1] = 717;
	v->arr[436][aux_sym_number_token2] = 719;
	v->arr[436][anon_sym_DOLLAR_LBRACE] = 721;
	v->arr[436][anon_sym_DOLLAR_LPAREN] = 723;
	v->arr[436][anon_sym_BQUOTE] = 725;
	v->arr[436][anon_sym_DOLLAR_BQUOTE] = 727;
	v->arr[436][anon_sym_LT_LPAREN] = 729;
	v->arr[436][anon_sym_GT_LPAREN] = 729;
	v->arr[436][sym_comment] = 71;
	v->arr[436][sym_file_descriptor] = 731;
	v->arr[436][sym_variable_name] = 733;
	init_parse_table2642(v);
}

void	init_parse_table2642(t_parse_table *v)
{
	v->arr[436][sym_test_operator] = 735;
	v->arr[436][sym__brace_start] = 737;
	v->arr[437][sym__statement_not_pipeline] = 4794;
	v->arr[437][sym_redirected_statement] = 4794;
	v->arr[437][sym_for_statement] = 4794;
	v->arr[437][sym_c_style_for_statement] = 4794;
	v->arr[437][sym_while_statement] = 4269;
	v->arr[437][sym_if_statement] = 4269;
	v->arr[437][sym_case_statement] = 4794;
	v->arr[437][sym_function_definition] = 4794;
	v->arr[437][sym_compound_statement] = 4794;
	v->arr[437][sym_subshell] = 4794;
	v->arr[437][sym_pipeline] = 5558;
	v->arr[437][sym_list] = 4794;
	v->arr[437][sym_negated_command] = 4794;
	init_parse_table2643(v);
}

void	init_parse_table2643(t_parse_table *v)
{
	v->arr[437][sym_test_command] = 4794;
	v->arr[437][sym_declaration_command] = 4794;
	v->arr[437][sym_unset_command] = 4794;
	v->arr[437][sym_command] = 4794;
	v->arr[437][sym_command_name] = 554;
	v->arr[437][sym_variable_assignment] = 1028;
	v->arr[437][sym_variable_assignments] = 4794;
	v->arr[437][sym_subscript] = 6790;
	v->arr[437][sym_file_redirect] = 2273;
	v->arr[437][sym_herestring_redirect] = 2272;
	v->arr[437][sym_arithmetic_expansion] = 1078;
	v->arr[437][sym_brace_expression] = 1078;
	v->arr[437][sym_concatenation] = 1376;
	v->arr[437][sym_string] = 1078;
	v->arr[437][sym_translated_string] = 1078;
	init_parse_table2644(v);
}

void	init_parse_table2644(t_parse_table *v)
{
	v->arr[437][sym_number] = 1078;
	v->arr[437][sym_simple_expansion] = 1078;
	v->arr[437][sym_expansion] = 1078;
	v->arr[437][sym_command_substitution] = 1078;
	v->arr[437][sym_process_substitution] = 1078;
	v->arr[437][aux_sym_redirected_statement_repeat2] = 4573;
	v->arr[437][aux_sym_command_repeat1] = 958;
	v->arr[437][aux_sym__literal_repeat1] = 1267;
	v->arr[437][sym_word] = 799;
	v->arr[437][anon_sym_for] = 9;
	v->arr[437][anon_sym_select] = 11;
	v->arr[437][anon_sym_LPAREN_LPAREN] = 288;
	v->arr[437][anon_sym_LT] = 290;
	v->arr[437][anon_sym_GT] = 290;
	v->arr[437][anon_sym_GT_GT] = 292;
	init_parse_table2645(v);
}

// file funcs528.c
