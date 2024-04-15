/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs56.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_parse_table280(t_parse_table *v)
{
	v->arr[43][sym_process_substitution] = 852;
	v->arr[43][aux_sym__statements_repeat1] = 426;
	v->arr[43][aux_sym_redirected_statement_repeat2] = 4371;
	v->arr[43][aux_sym_command_repeat1] = 989;
	v->arr[43][aux_sym__literal_repeat1] = 1026;
	v->arr[43][sym_word] = 665;
	v->arr[43][anon_sym_for] = 667;
	v->arr[43][anon_sym_select] = 669;
	v->arr[43][anon_sym_LPAREN_LPAREN] = 671;
	v->arr[43][anon_sym_LT] = 673;
	v->arr[43][anon_sym_GT] = 673;
	v->arr[43][anon_sym_GT_GT] = 675;
	v->arr[43][anon_sym_LPAREN] = 677;
	v->arr[43][anon_sym_while] = 679;
	v->arr[43][anon_sym_until] = 679;
	init_parse_table281(v);
}

void	init_parse_table281(t_parse_table *v)
{
	v->arr[43][anon_sym_if] = 681;
	v->arr[43][anon_sym_case] = 683;
	v->arr[43][anon_sym_SEMI_SEMI] = 753;
	v->arr[43][anon_sym_SEMI_AMP] = 493;
	v->arr[43][anon_sym_SEMI_SEMI_AMP] = 495;
	v->arr[43][anon_sym_function] = 687;
	v->arr[43][anon_sym_LBRACE] = 689;
	v->arr[43][anon_sym_BANG] = 691;
	v->arr[43][anon_sym_LBRACK] = 693;
	v->arr[43][anon_sym_LBRACK_LBRACK] = 695;
	v->arr[43][anon_sym_declare] = 697;
	v->arr[43][anon_sym_typeset] = 697;
	v->arr[43][anon_sym_export] = 697;
	v->arr[43][anon_sym_readonly] = 697;
	v->arr[43][anon_sym_local] = 697;
	init_parse_table282(v);
}

void	init_parse_table282(t_parse_table *v)
{
	v->arr[43][anon_sym_unset] = 699;
	v->arr[43][anon_sym_unsetenv] = 699;
	v->arr[43][anon_sym_AMP_GT] = 673;
	v->arr[43][anon_sym_AMP_GT_GT] = 675;
	v->arr[43][anon_sym_LT_AMP] = 673;
	v->arr[43][anon_sym_GT_AMP] = 673;
	v->arr[43][anon_sym_GT_PIPE] = 675;
	v->arr[43][anon_sym_LT_AMP_DASH] = 701;
	v->arr[43][anon_sym_GT_AMP_DASH] = 701;
	v->arr[43][anon_sym_LT_LT_LT] = 703;
	v->arr[43][anon_sym_DOLLAR_LPAREN_LPAREN] = 705;
	v->arr[43][anon_sym_DOLLAR_LBRACK] = 707;
	v->arr[43][anon_sym_DOLLAR] = 709;
	v->arr[43][sym__special_character] = 711;
	v->arr[43][anon_sym_DQUOTE] = 713;
	init_parse_table283(v);
}

void	init_parse_table283(t_parse_table *v)
{
	v->arr[43][sym_raw_string] = 715;
	v->arr[43][sym_ansi_c_string] = 715;
	v->arr[43][aux_sym_number_token1] = 717;
	v->arr[43][aux_sym_number_token2] = 719;
	v->arr[43][anon_sym_DOLLAR_LBRACE] = 721;
	v->arr[43][anon_sym_DOLLAR_LPAREN] = 723;
	v->arr[43][anon_sym_BQUOTE] = 725;
	v->arr[43][anon_sym_DOLLAR_BQUOTE] = 727;
	v->arr[43][anon_sym_LT_LPAREN] = 729;
	v->arr[43][anon_sym_GT_LPAREN] = 729;
	v->arr[43][sym_comment] = 71;
	v->arr[43][sym_file_descriptor] = 731;
	v->arr[43][sym_variable_name] = 733;
	v->arr[43][sym_test_operator] = 735;
	v->arr[43][sym__brace_start] = 737;
	init_parse_table284(v);
}

void	init_parse_table284(t_parse_table *v)
{
	v->arr[44][sym__statements] = 6637;
	v->arr[44][sym__statement_not_pipeline] = 6674;
	v->arr[44][sym_redirected_statement] = 4416;
	v->arr[44][sym_for_statement] = 4416;
	v->arr[44][sym_c_style_for_statement] = 4416;
	v->arr[44][sym_while_statement] = 4239;
	v->arr[44][sym_if_statement] = 4239;
	v->arr[44][sym_case_statement] = 4416;
	v->arr[44][sym_function_definition] = 4416;
	v->arr[44][sym_compound_statement] = 4416;
	v->arr[44][sym_subshell] = 4416;
	v->arr[44][sym_pipeline] = 4910;
	v->arr[44][sym_list] = 4416;
	v->arr[44][sym_negated_command] = 4416;
	v->arr[44][sym_test_command] = 4416;
	init_parse_table285(v);
}

// file funcs56.c
