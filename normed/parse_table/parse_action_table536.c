/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs536.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_parse_table2680(t_parse_table *v)
{
	v->arr[443][anon_sym_LT] = 290;
	v->arr[443][anon_sym_GT] = 290;
	v->arr[443][anon_sym_GT_GT] = 292;
	v->arr[443][anon_sym_LPAREN] = 19;
	v->arr[443][anon_sym_while] = 21;
	v->arr[443][anon_sym_until] = 21;
	v->arr[443][anon_sym_if] = 23;
	v->arr[443][anon_sym_case] = 25;
	v->arr[443][anon_sym_function] = 300;
	v->arr[443][anon_sym_LBRACE] = 29;
	v->arr[443][anon_sym_BANG] = 302;
	v->arr[443][anon_sym_LBRACK] = 33;
	v->arr[443][anon_sym_LBRACK_LBRACK] = 35;
	v->arr[443][anon_sym_declare] = 304;
	v->arr[443][anon_sym_typeset] = 304;
	init_parse_table2681(v);
}

void	init_parse_table2681(t_parse_table *v)
{
	v->arr[443][anon_sym_export] = 304;
	v->arr[443][anon_sym_readonly] = 304;
	v->arr[443][anon_sym_local] = 304;
	v->arr[443][anon_sym_unset] = 306;
	v->arr[443][anon_sym_unsetenv] = 306;
	v->arr[443][anon_sym_AMP_GT] = 290;
	v->arr[443][anon_sym_AMP_GT_GT] = 292;
	v->arr[443][anon_sym_LT_AMP] = 290;
	v->arr[443][anon_sym_GT_AMP] = 290;
	v->arr[443][anon_sym_GT_PIPE] = 292;
	v->arr[443][anon_sym_LT_AMP_DASH] = 308;
	v->arr[443][anon_sym_GT_AMP_DASH] = 308;
	v->arr[443][anon_sym_LT_LT_LT] = 310;
	v->arr[443][anon_sym_DOLLAR_LPAREN_LPAREN] = 312;
	v->arr[443][anon_sym_DOLLAR_LBRACK] = 314;
	init_parse_table2682(v);
}

void	init_parse_table2682(t_parse_table *v)
{
	v->arr[443][anon_sym_DOLLAR] = 316;
	v->arr[443][sym__special_character] = 318;
	v->arr[443][anon_sym_DQUOTE] = 320;
	v->arr[443][sym_raw_string] = 322;
	v->arr[443][sym_ansi_c_string] = 322;
	v->arr[443][aux_sym_number_token1] = 324;
	v->arr[443][aux_sym_number_token2] = 326;
	v->arr[443][anon_sym_DOLLAR_LBRACE] = 328;
	v->arr[443][anon_sym_DOLLAR_LPAREN] = 330;
	v->arr[443][anon_sym_BQUOTE] = 332;
	v->arr[443][anon_sym_DOLLAR_BQUOTE] = 334;
	v->arr[443][anon_sym_LT_LPAREN] = 336;
	v->arr[443][anon_sym_GT_LPAREN] = 336;
	v->arr[443][sym_comment] = 71;
	v->arr[443][sym_file_descriptor] = 338;
	init_parse_table2683(v);
}

void	init_parse_table2683(t_parse_table *v)
{
	v->arr[443][sym_variable_name] = 340;
	v->arr[443][sym_test_operator] = 342;
	v->arr[443][sym__brace_start] = 344;
	v->arr[444][sym__statement_not_pipeline] = 6718;
	v->arr[444][sym_redirected_statement] = 4996;
	v->arr[444][sym_for_statement] = 4996;
	v->arr[444][sym_c_style_for_statement] = 4996;
	v->arr[444][sym_while_statement] = 4570;
	v->arr[444][sym_if_statement] = 4570;
	v->arr[444][sym_case_statement] = 4996;
	v->arr[444][sym_function_definition] = 4996;
	v->arr[444][sym_compound_statement] = 4996;
	v->arr[444][sym_subshell] = 4996;
	v->arr[444][sym_pipeline] = 4997;
	v->arr[444][sym_list] = 4996;
	init_parse_table2684(v);
}

void	init_parse_table2684(t_parse_table *v)
{
	v->arr[444][sym_negated_command] = 4996;
	v->arr[444][sym_test_command] = 4996;
	v->arr[444][sym_declaration_command] = 4996;
	v->arr[444][sym_unset_command] = 4996;
	v->arr[444][sym_command] = 4996;
	v->arr[444][sym_command_name] = 544;
	v->arr[444][sym_variable_assignment] = 1096;
	v->arr[444][sym_variable_assignments] = 4996;
	v->arr[444][sym_subscript] = 6790;
	v->arr[444][sym_file_redirect] = 2019;
	v->arr[444][sym_herestring_redirect] = 2017;
	v->arr[444][sym_arithmetic_expansion] = 1078;
	v->arr[444][sym_brace_expression] = 1078;
	v->arr[444][sym_concatenation] = 1376;
	v->arr[444][sym_string] = 1078;
	init_parse_table2685(v);
}

// file funcs536.c
