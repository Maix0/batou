/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs174.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_parse_table870(t_parse_table *v)
{
	v->arr[141][aux_sym_redirected_statement_repeat2] = 4573;
	v->arr[141][aux_sym_command_repeat1] = 958;
	v->arr[141][aux_sym__literal_repeat1] = 1267;
	v->arr[141][sym_word] = 799;
	v->arr[141][anon_sym_for] = 9;
	v->arr[141][anon_sym_select] = 11;
	v->arr[141][anon_sym_LPAREN_LPAREN] = 288;
	v->arr[141][anon_sym_LT] = 290;
	v->arr[141][anon_sym_GT] = 290;
	v->arr[141][anon_sym_GT_GT] = 292;
	v->arr[141][anon_sym_LPAREN] = 19;
	v->arr[141][anon_sym_while] = 21;
	v->arr[141][anon_sym_until] = 21;
	v->arr[141][anon_sym_if] = 23;
	v->arr[141][anon_sym_case] = 25;
	init_parse_table871(v);
}

void	init_parse_table871(t_parse_table *v)
{
	v->arr[141][anon_sym_function] = 801;
	v->arr[141][anon_sym_LBRACE] = 29;
	v->arr[141][anon_sym_BANG] = 803;
	v->arr[141][anon_sym_LBRACK] = 33;
	v->arr[141][anon_sym_LBRACK_LBRACK] = 35;
	v->arr[141][anon_sym_declare] = 805;
	v->arr[141][anon_sym_typeset] = 805;
	v->arr[141][anon_sym_export] = 805;
	v->arr[141][anon_sym_readonly] = 805;
	v->arr[141][anon_sym_local] = 805;
	v->arr[141][anon_sym_unset] = 807;
	v->arr[141][anon_sym_unsetenv] = 807;
	v->arr[141][anon_sym_AMP_GT] = 290;
	v->arr[141][anon_sym_AMP_GT_GT] = 292;
	v->arr[141][anon_sym_LT_AMP] = 290;
	init_parse_table872(v);
}

void	init_parse_table872(t_parse_table *v)
{
	v->arr[141][anon_sym_GT_AMP] = 290;
	v->arr[141][anon_sym_GT_PIPE] = 292;
	v->arr[141][anon_sym_LT_AMP_DASH] = 308;
	v->arr[141][anon_sym_GT_AMP_DASH] = 308;
	v->arr[141][anon_sym_LT_LT_LT] = 310;
	v->arr[141][anon_sym_DOLLAR_LPAREN_LPAREN] = 312;
	v->arr[141][anon_sym_DOLLAR_LBRACK] = 314;
	v->arr[141][anon_sym_DOLLAR] = 316;
	v->arr[141][sym__special_character] = 318;
	v->arr[141][anon_sym_DQUOTE] = 320;
	v->arr[141][sym_raw_string] = 322;
	v->arr[141][sym_ansi_c_string] = 322;
	v->arr[141][aux_sym_number_token1] = 324;
	v->arr[141][aux_sym_number_token2] = 326;
	v->arr[141][anon_sym_DOLLAR_LBRACE] = 328;
	init_parse_table873(v);
}

void	init_parse_table873(t_parse_table *v)
{
	v->arr[141][anon_sym_DOLLAR_LPAREN] = 330;
	v->arr[141][anon_sym_BQUOTE] = 332;
	v->arr[141][anon_sym_DOLLAR_BQUOTE] = 334;
	v->arr[141][anon_sym_LT_LPAREN] = 336;
	v->arr[141][anon_sym_GT_LPAREN] = 336;
	v->arr[141][sym_comment] = 71;
	v->arr[141][sym_file_descriptor] = 338;
	v->arr[141][sym_variable_name] = 340;
	v->arr[141][sym_test_operator] = 342;
	v->arr[141][sym__brace_start] = 344;
	v->arr[142][sym__statements] = 7033;
	v->arr[142][sym__statement_not_pipeline] = 6558;
	v->arr[142][sym_redirected_statement] = 4662;
	v->arr[142][sym_for_statement] = 4662;
	v->arr[142][sym_c_style_for_statement] = 4662;
	init_parse_table874(v);
}

void	init_parse_table874(t_parse_table *v)
{
	v->arr[142][sym_while_statement] = 4314;
	v->arr[142][sym_if_statement] = 4314;
	v->arr[142][sym_case_statement] = 4662;
	v->arr[142][sym_function_definition] = 4662;
	v->arr[142][sym_compound_statement] = 4662;
	v->arr[142][sym_subshell] = 4662;
	v->arr[142][sym_pipeline] = 5070;
	v->arr[142][sym_list] = 4662;
	v->arr[142][sym_negated_command] = 4662;
	v->arr[142][sym_test_command] = 4662;
	v->arr[142][sym_declaration_command] = 4662;
	v->arr[142][sym_unset_command] = 4662;
	v->arr[142][sym_command] = 4662;
	v->arr[142][sym_command_name] = 554;
	v->arr[142][sym_variable_assignment] = 1150;
	init_parse_table875(v);
}

// file funcs174.c
