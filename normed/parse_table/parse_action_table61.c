/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs61.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_parse_table305(t_parse_table *v)
{
	v->arr[47][aux_sym__literal_repeat1] = 1267;
	v->arr[47][sym_word] = 286;
	v->arr[47][anon_sym_for] = 9;
	v->arr[47][anon_sym_select] = 11;
	v->arr[47][anon_sym_LPAREN_LPAREN] = 288;
	v->arr[47][anon_sym_LT] = 290;
	v->arr[47][anon_sym_GT] = 290;
	v->arr[47][anon_sym_GT_GT] = 292;
	v->arr[47][anon_sym_LPAREN] = 19;
	v->arr[47][anon_sym_while] = 21;
	v->arr[47][anon_sym_until] = 21;
	v->arr[47][anon_sym_if] = 23;
	v->arr[47][anon_sym_fi] = 761;
	v->arr[47][anon_sym_elif] = 761;
	v->arr[47][anon_sym_else] = 761;
	init_parse_table306(v);
}

void	init_parse_table306(t_parse_table *v)
{
	v->arr[47][anon_sym_case] = 25;
	v->arr[47][anon_sym_function] = 300;
	v->arr[47][anon_sym_LBRACE] = 29;
	v->arr[47][anon_sym_BANG] = 302;
	v->arr[47][anon_sym_LBRACK] = 33;
	v->arr[47][anon_sym_LBRACK_LBRACK] = 35;
	v->arr[47][anon_sym_declare] = 304;
	v->arr[47][anon_sym_typeset] = 304;
	v->arr[47][anon_sym_export] = 304;
	v->arr[47][anon_sym_readonly] = 304;
	v->arr[47][anon_sym_local] = 304;
	v->arr[47][anon_sym_unset] = 306;
	v->arr[47][anon_sym_unsetenv] = 306;
	v->arr[47][anon_sym_AMP_GT] = 290;
	v->arr[47][anon_sym_AMP_GT_GT] = 292;
	init_parse_table307(v);
}

void	init_parse_table307(t_parse_table *v)
{
	v->arr[47][anon_sym_LT_AMP] = 290;
	v->arr[47][anon_sym_GT_AMP] = 290;
	v->arr[47][anon_sym_GT_PIPE] = 292;
	v->arr[47][anon_sym_LT_AMP_DASH] = 308;
	v->arr[47][anon_sym_GT_AMP_DASH] = 308;
	v->arr[47][anon_sym_LT_LT_LT] = 310;
	v->arr[47][anon_sym_DOLLAR_LPAREN_LPAREN] = 312;
	v->arr[47][anon_sym_DOLLAR_LBRACK] = 314;
	v->arr[47][anon_sym_DOLLAR] = 316;
	v->arr[47][sym__special_character] = 318;
	v->arr[47][anon_sym_DQUOTE] = 320;
	v->arr[47][sym_raw_string] = 322;
	v->arr[47][sym_ansi_c_string] = 322;
	v->arr[47][aux_sym_number_token1] = 324;
	v->arr[47][aux_sym_number_token2] = 326;
	init_parse_table308(v);
}

void	init_parse_table308(t_parse_table *v)
{
	v->arr[47][anon_sym_DOLLAR_LBRACE] = 328;
	v->arr[47][anon_sym_DOLLAR_LPAREN] = 330;
	v->arr[47][anon_sym_BQUOTE] = 332;
	v->arr[47][anon_sym_DOLLAR_BQUOTE] = 334;
	v->arr[47][anon_sym_LT_LPAREN] = 336;
	v->arr[47][anon_sym_GT_LPAREN] = 336;
	v->arr[47][sym_comment] = 71;
	v->arr[47][sym_file_descriptor] = 338;
	v->arr[47][sym_variable_name] = 340;
	v->arr[47][sym_test_operator] = 342;
	v->arr[47][sym__brace_start] = 344;
	v->arr[48][aux_sym__terminated_statement] = 47;
	v->arr[48][sym__statement_not_pipeline] = 6718;
	v->arr[48][sym_redirected_statement] = 5007;
	v->arr[48][sym_for_statement] = 5007;
	init_parse_table309(v);
}

void	init_parse_table309(t_parse_table *v)
{
	v->arr[48][sym_c_style_for_statement] = 5007;
	v->arr[48][sym_while_statement] = 4551;
	v->arr[48][sym_if_statement] = 4551;
	v->arr[48][sym_case_statement] = 5007;
	v->arr[48][sym_function_definition] = 5007;
	v->arr[48][sym_compound_statement] = 5007;
	v->arr[48][sym_subshell] = 5007;
	v->arr[48][sym_pipeline] = 5189;
	v->arr[48][sym_list] = 5007;
	v->arr[48][sym_negated_command] = 5007;
	v->arr[48][sym_test_command] = 5007;
	v->arr[48][sym_declaration_command] = 5007;
	v->arr[48][sym_unset_command] = 5007;
	v->arr[48][sym_command] = 5007;
	v->arr[48][sym_command_name] = 544;
	init_parse_table310(v);
}

// file funcs61.c
