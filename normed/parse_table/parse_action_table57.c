/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs57.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_parse_table285(t_parse_table *v)
{
	v->arr[44][sym_declaration_command] = 4416;
	v->arr[44][sym_unset_command] = 4416;
	v->arr[44][sym_command] = 4416;
	v->arr[44][sym_command_name] = 530;
	v->arr[44][sym_variable_assignment] = 849;
	v->arr[44][sym_variable_assignments] = 4416;
	v->arr[44][sym_subscript] = 6760;
	v->arr[44][sym_file_redirect] = 1893;
	v->arr[44][sym_herestring_redirect] = 1892;
	v->arr[44][sym_arithmetic_expansion] = 852;
	v->arr[44][sym_brace_expression] = 852;
	v->arr[44][sym_concatenation] = 1169;
	v->arr[44][sym_string] = 852;
	v->arr[44][sym_translated_string] = 852;
	v->arr[44][sym_number] = 852;
	init_parse_table286(v);
}

void	init_parse_table286(t_parse_table *v)
{
	v->arr[44][sym_simple_expansion] = 852;
	v->arr[44][sym_expansion] = 852;
	v->arr[44][sym_command_substitution] = 852;
	v->arr[44][sym_process_substitution] = 852;
	v->arr[44][aux_sym__statements_repeat1] = 426;
	v->arr[44][aux_sym_redirected_statement_repeat2] = 4371;
	v->arr[44][aux_sym_command_repeat1] = 989;
	v->arr[44][aux_sym__literal_repeat1] = 1026;
	v->arr[44][sym_word] = 665;
	v->arr[44][anon_sym_for] = 667;
	v->arr[44][anon_sym_select] = 669;
	v->arr[44][anon_sym_LPAREN_LPAREN] = 671;
	v->arr[44][anon_sym_LT] = 673;
	v->arr[44][anon_sym_GT] = 673;
	v->arr[44][anon_sym_GT_GT] = 675;
	init_parse_table287(v);
}

void	init_parse_table287(t_parse_table *v)
{
	v->arr[44][anon_sym_LPAREN] = 677;
	v->arr[44][anon_sym_while] = 679;
	v->arr[44][anon_sym_until] = 679;
	v->arr[44][anon_sym_if] = 681;
	v->arr[44][anon_sym_case] = 683;
	v->arr[44][anon_sym_SEMI_SEMI] = 755;
	v->arr[44][anon_sym_SEMI_AMP] = 507;
	v->arr[44][anon_sym_SEMI_SEMI_AMP] = 509;
	v->arr[44][anon_sym_function] = 687;
	v->arr[44][anon_sym_LBRACE] = 689;
	v->arr[44][anon_sym_BANG] = 691;
	v->arr[44][anon_sym_LBRACK] = 693;
	v->arr[44][anon_sym_LBRACK_LBRACK] = 695;
	v->arr[44][anon_sym_declare] = 697;
	v->arr[44][anon_sym_typeset] = 697;
	init_parse_table288(v);
}

void	init_parse_table288(t_parse_table *v)
{
	v->arr[44][anon_sym_export] = 697;
	v->arr[44][anon_sym_readonly] = 697;
	v->arr[44][anon_sym_local] = 697;
	v->arr[44][anon_sym_unset] = 699;
	v->arr[44][anon_sym_unsetenv] = 699;
	v->arr[44][anon_sym_AMP_GT] = 673;
	v->arr[44][anon_sym_AMP_GT_GT] = 675;
	v->arr[44][anon_sym_LT_AMP] = 673;
	v->arr[44][anon_sym_GT_AMP] = 673;
	v->arr[44][anon_sym_GT_PIPE] = 675;
	v->arr[44][anon_sym_LT_AMP_DASH] = 701;
	v->arr[44][anon_sym_GT_AMP_DASH] = 701;
	v->arr[44][anon_sym_LT_LT_LT] = 703;
	v->arr[44][anon_sym_DOLLAR_LPAREN_LPAREN] = 705;
	v->arr[44][anon_sym_DOLLAR_LBRACK] = 707;
	init_parse_table289(v);
}

void	init_parse_table289(t_parse_table *v)
{
	v->arr[44][anon_sym_DOLLAR] = 709;
	v->arr[44][sym__special_character] = 711;
	v->arr[44][anon_sym_DQUOTE] = 713;
	v->arr[44][sym_raw_string] = 715;
	v->arr[44][sym_ansi_c_string] = 715;
	v->arr[44][aux_sym_number_token1] = 717;
	v->arr[44][aux_sym_number_token2] = 719;
	v->arr[44][anon_sym_DOLLAR_LBRACE] = 721;
	v->arr[44][anon_sym_DOLLAR_LPAREN] = 723;
	v->arr[44][anon_sym_BQUOTE] = 725;
	v->arr[44][anon_sym_DOLLAR_BQUOTE] = 727;
	v->arr[44][anon_sym_LT_LPAREN] = 729;
	v->arr[44][anon_sym_GT_LPAREN] = 729;
	v->arr[44][sym_comment] = 71;
	v->arr[44][sym_file_descriptor] = 731;
	init_parse_table290(v);
}

// file funcs57.c
