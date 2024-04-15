/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs529.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_parse_table2645(t_parse_table *v)
{
	v->arr[437][anon_sym_LPAREN] = 19;
	v->arr[437][anon_sym_while] = 21;
	v->arr[437][anon_sym_until] = 21;
	v->arr[437][anon_sym_if] = 23;
	v->arr[437][anon_sym_case] = 25;
	v->arr[437][anon_sym_function] = 801;
	v->arr[437][anon_sym_LBRACE] = 29;
	v->arr[437][anon_sym_BANG] = 803;
	v->arr[437][anon_sym_LBRACK] = 33;
	v->arr[437][anon_sym_LBRACK_LBRACK] = 35;
	v->arr[437][anon_sym_declare] = 805;
	v->arr[437][anon_sym_typeset] = 805;
	v->arr[437][anon_sym_export] = 805;
	v->arr[437][anon_sym_readonly] = 805;
	v->arr[437][anon_sym_local] = 805;
	init_parse_table2646(v);
}

void	init_parse_table2646(t_parse_table *v)
{
	v->arr[437][anon_sym_unset] = 807;
	v->arr[437][anon_sym_unsetenv] = 807;
	v->arr[437][anon_sym_AMP_GT] = 290;
	v->arr[437][anon_sym_AMP_GT_GT] = 292;
	v->arr[437][anon_sym_LT_AMP] = 290;
	v->arr[437][anon_sym_GT_AMP] = 290;
	v->arr[437][anon_sym_GT_PIPE] = 292;
	v->arr[437][anon_sym_LT_AMP_DASH] = 308;
	v->arr[437][anon_sym_GT_AMP_DASH] = 308;
	v->arr[437][anon_sym_LT_LT_LT] = 310;
	v->arr[437][anon_sym_DOLLAR_LPAREN_LPAREN] = 312;
	v->arr[437][anon_sym_DOLLAR_LBRACK] = 314;
	v->arr[437][anon_sym_DOLLAR] = 316;
	v->arr[437][sym__special_character] = 318;
	v->arr[437][anon_sym_DQUOTE] = 320;
	init_parse_table2647(v);
}

void	init_parse_table2647(t_parse_table *v)
{
	v->arr[437][sym_raw_string] = 322;
	v->arr[437][sym_ansi_c_string] = 322;
	v->arr[437][aux_sym_number_token1] = 324;
	v->arr[437][aux_sym_number_token2] = 326;
	v->arr[437][anon_sym_DOLLAR_LBRACE] = 328;
	v->arr[437][anon_sym_DOLLAR_LPAREN] = 330;
	v->arr[437][anon_sym_BQUOTE] = 332;
	v->arr[437][anon_sym_DOLLAR_BQUOTE] = 334;
	v->arr[437][anon_sym_LT_LPAREN] = 336;
	v->arr[437][anon_sym_GT_LPAREN] = 336;
	v->arr[437][sym_comment] = 71;
	v->arr[437][sym_file_descriptor] = 338;
	v->arr[437][sym_variable_name] = 340;
	v->arr[437][sym_test_operator] = 342;
	v->arr[437][sym__brace_start] = 344;
	init_parse_table2648(v);
}

void	init_parse_table2648(t_parse_table *v)
{
	v->arr[438][sym__statement_not_pipeline] = 4616;
	v->arr[438][sym_redirected_statement] = 4616;
	v->arr[438][sym_for_statement] = 4616;
	v->arr[438][sym_c_style_for_statement] = 4616;
	v->arr[438][sym_while_statement] = 4227;
	v->arr[438][sym_if_statement] = 4227;
	v->arr[438][sym_case_statement] = 4616;
	v->arr[438][sym_function_definition] = 4616;
	v->arr[438][sym_compound_statement] = 4616;
	v->arr[438][sym_subshell] = 4616;
	v->arr[438][sym_pipeline] = 5614;
	v->arr[438][sym_list] = 4616;
	v->arr[438][sym_negated_command] = 4616;
	v->arr[438][sym_test_command] = 4616;
	v->arr[438][sym_declaration_command] = 4616;
	init_parse_table2649(v);
}

void	init_parse_table2649(t_parse_table *v)
{
	v->arr[438][sym_unset_command] = 4616;
	v->arr[438][sym_command] = 4616;
	v->arr[438][sym_command_name] = 528;
	v->arr[438][sym_variable_assignment] = 822;
	v->arr[438][sym_variable_assignments] = 4616;
	v->arr[438][sym_subscript] = 6736;
	v->arr[438][sym_file_redirect] = 1635;
	v->arr[438][sym_herestring_redirect] = 1634;
	v->arr[438][sym_arithmetic_expansion] = 815;
	v->arr[438][sym_brace_expression] = 815;
	v->arr[438][sym_concatenation] = 1082;
	v->arr[438][sym_string] = 815;
	v->arr[438][sym_translated_string] = 815;
	v->arr[438][sym_number] = 815;
	v->arr[438][sym_simple_expansion] = 815;
	init_parse_table2650(v);
}

// file funcs529.c
