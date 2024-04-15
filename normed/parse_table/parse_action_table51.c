/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs51.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_parse_table255(t_parse_table *v)
{
	v->arr[39][sym_simple_expansion] = 852;
	v->arr[39][sym_expansion] = 852;
	v->arr[39][sym_command_substitution] = 852;
	v->arr[39][sym_process_substitution] = 852;
	v->arr[39][aux_sym__statements_repeat1] = 426;
	v->arr[39][aux_sym_redirected_statement_repeat2] = 4371;
	v->arr[39][aux_sym_command_repeat1] = 989;
	v->arr[39][aux_sym__literal_repeat1] = 1026;
	v->arr[39][sym_word] = 665;
	v->arr[39][anon_sym_for] = 667;
	v->arr[39][anon_sym_select] = 669;
	v->arr[39][anon_sym_LPAREN_LPAREN] = 671;
	v->arr[39][anon_sym_LT] = 673;
	v->arr[39][anon_sym_GT] = 673;
	v->arr[39][anon_sym_GT_GT] = 675;
	init_parse_table256(v);
}

void	init_parse_table256(t_parse_table *v)
{
	v->arr[39][anon_sym_LPAREN] = 677;
	v->arr[39][anon_sym_while] = 679;
	v->arr[39][anon_sym_until] = 679;
	v->arr[39][anon_sym_if] = 681;
	v->arr[39][anon_sym_case] = 683;
	v->arr[39][anon_sym_SEMI_SEMI] = 745;
	v->arr[39][anon_sym_SEMI_AMP] = 551;
	v->arr[39][anon_sym_SEMI_SEMI_AMP] = 553;
	v->arr[39][anon_sym_function] = 687;
	v->arr[39][anon_sym_LBRACE] = 689;
	v->arr[39][anon_sym_BANG] = 691;
	v->arr[39][anon_sym_LBRACK] = 693;
	v->arr[39][anon_sym_LBRACK_LBRACK] = 695;
	v->arr[39][anon_sym_declare] = 697;
	v->arr[39][anon_sym_typeset] = 697;
	init_parse_table257(v);
}

void	init_parse_table257(t_parse_table *v)
{
	v->arr[39][anon_sym_export] = 697;
	v->arr[39][anon_sym_readonly] = 697;
	v->arr[39][anon_sym_local] = 697;
	v->arr[39][anon_sym_unset] = 699;
	v->arr[39][anon_sym_unsetenv] = 699;
	v->arr[39][anon_sym_AMP_GT] = 673;
	v->arr[39][anon_sym_AMP_GT_GT] = 675;
	v->arr[39][anon_sym_LT_AMP] = 673;
	v->arr[39][anon_sym_GT_AMP] = 673;
	v->arr[39][anon_sym_GT_PIPE] = 675;
	v->arr[39][anon_sym_LT_AMP_DASH] = 701;
	v->arr[39][anon_sym_GT_AMP_DASH] = 701;
	v->arr[39][anon_sym_LT_LT_LT] = 703;
	v->arr[39][anon_sym_DOLLAR_LPAREN_LPAREN] = 705;
	v->arr[39][anon_sym_DOLLAR_LBRACK] = 707;
	init_parse_table258(v);
}

void	init_parse_table258(t_parse_table *v)
{
	v->arr[39][anon_sym_DOLLAR] = 709;
	v->arr[39][sym__special_character] = 711;
	v->arr[39][anon_sym_DQUOTE] = 713;
	v->arr[39][sym_raw_string] = 715;
	v->arr[39][sym_ansi_c_string] = 715;
	v->arr[39][aux_sym_number_token1] = 717;
	v->arr[39][aux_sym_number_token2] = 719;
	v->arr[39][anon_sym_DOLLAR_LBRACE] = 721;
	v->arr[39][anon_sym_DOLLAR_LPAREN] = 723;
	v->arr[39][anon_sym_BQUOTE] = 725;
	v->arr[39][anon_sym_DOLLAR_BQUOTE] = 727;
	v->arr[39][anon_sym_LT_LPAREN] = 729;
	v->arr[39][anon_sym_GT_LPAREN] = 729;
	v->arr[39][sym_comment] = 71;
	v->arr[39][sym_file_descriptor] = 731;
	init_parse_table259(v);
}

void	init_parse_table259(t_parse_table *v)
{
	v->arr[39][sym_variable_name] = 733;
	v->arr[39][sym_test_operator] = 735;
	v->arr[39][sym__brace_start] = 737;
	v->arr[40][sym__statements] = 6700;
	v->arr[40][sym__statement_not_pipeline] = 6674;
	v->arr[40][sym_redirected_statement] = 4416;
	v->arr[40][sym_for_statement] = 4416;
	v->arr[40][sym_c_style_for_statement] = 4416;
	v->arr[40][sym_while_statement] = 4239;
	v->arr[40][sym_if_statement] = 4239;
	v->arr[40][sym_case_statement] = 4416;
	v->arr[40][sym_function_definition] = 4416;
	v->arr[40][sym_compound_statement] = 4416;
	v->arr[40][sym_subshell] = 4416;
	v->arr[40][sym_pipeline] = 4910;
	init_parse_table260(v);
}

// file funcs51.c
