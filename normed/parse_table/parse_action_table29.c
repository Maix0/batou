/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs29.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_parse_table145(t_parse_table *v)
{
	v->arr[21][anon_sym_LT_AMP] = 290;
	v->arr[21][anon_sym_GT_AMP] = 290;
	v->arr[21][anon_sym_GT_PIPE] = 292;
	v->arr[21][anon_sym_LT_AMP_DASH] = 308;
	v->arr[21][anon_sym_GT_AMP_DASH] = 308;
	v->arr[21][anon_sym_LT_LT_LT] = 310;
	v->arr[21][anon_sym_DOLLAR_LPAREN_LPAREN] = 312;
	v->arr[21][anon_sym_DOLLAR_LBRACK] = 314;
	v->arr[21][anon_sym_DOLLAR] = 316;
	v->arr[21][sym__special_character] = 318;
	v->arr[21][anon_sym_DQUOTE] = 320;
	v->arr[21][sym_raw_string] = 322;
	v->arr[21][sym_ansi_c_string] = 322;
	v->arr[21][aux_sym_number_token1] = 324;
	v->arr[21][aux_sym_number_token2] = 326;
	init_parse_table146(v);
}

void	init_parse_table146(t_parse_table *v)
{
	v->arr[21][anon_sym_DOLLAR_LBRACE] = 328;
	v->arr[21][anon_sym_DOLLAR_LPAREN] = 330;
	v->arr[21][anon_sym_BQUOTE] = 332;
	v->arr[21][anon_sym_DOLLAR_BQUOTE] = 334;
	v->arr[21][anon_sym_LT_LPAREN] = 336;
	v->arr[21][anon_sym_GT_LPAREN] = 336;
	v->arr[21][sym_comment] = 71;
	v->arr[21][sym_file_descriptor] = 338;
	v->arr[21][sym_variable_name] = 340;
	v->arr[21][sym_test_operator] = 342;
	v->arr[21][sym__brace_start] = 344;
	v->arr[22][sym__statements] = 6501;
	v->arr[22][sym__statement_not_pipeline] = 6584;
	v->arr[22][sym_redirected_statement] = 4349;
	v->arr[22][sym_for_statement] = 4349;
	init_parse_table147(v);
}

void	init_parse_table147(t_parse_table *v)
{
	v->arr[22][sym_c_style_for_statement] = 4349;
	v->arr[22][sym_while_statement] = 4225;
	v->arr[22][sym_if_statement] = 4225;
	v->arr[22][sym_case_statement] = 4349;
	v->arr[22][sym_function_definition] = 4349;
	v->arr[22][sym_compound_statement] = 4349;
	v->arr[22][sym_subshell] = 4349;
	v->arr[22][sym_pipeline] = 4620;
	v->arr[22][sym_list] = 4349;
	v->arr[22][sym_negated_command] = 4349;
	v->arr[22][sym_test_command] = 4349;
	v->arr[22][sym_declaration_command] = 4349;
	v->arr[22][sym_unset_command] = 4349;
	v->arr[22][sym_command] = 4349;
	v->arr[22][sym_command_name] = 528;
	init_parse_table148(v);
}

void	init_parse_table148(t_parse_table *v)
{
	v->arr[22][sym_variable_assignment] = 807;
	v->arr[22][sym_variable_assignments] = 4349;
	v->arr[22][sym_subscript] = 6736;
	v->arr[22][sym_file_redirect] = 1635;
	v->arr[22][sym_herestring_redirect] = 1634;
	v->arr[22][sym_arithmetic_expansion] = 815;
	v->arr[22][sym_brace_expression] = 815;
	v->arr[22][sym_concatenation] = 1082;
	v->arr[22][sym_string] = 815;
	v->arr[22][sym_translated_string] = 815;
	v->arr[22][sym_number] = 815;
	v->arr[22][sym_simple_expansion] = 815;
	v->arr[22][sym_expansion] = 815;
	v->arr[22][sym_command_substitution] = 815;
	v->arr[22][sym_process_substitution] = 815;
	init_parse_table149(v);
}

void	init_parse_table149(t_parse_table *v)
{
	v->arr[22][aux_sym__statements_repeat1] = 431;
	v->arr[22][aux_sym_redirected_statement_repeat2] = 4250;
	v->arr[22][aux_sym_command_repeat1] = 925;
	v->arr[22][aux_sym__literal_repeat1] = 926;
	v->arr[22][sym_word] = 403;
	v->arr[22][anon_sym_for] = 405;
	v->arr[22][anon_sym_select] = 407;
	v->arr[22][anon_sym_LPAREN_LPAREN] = 409;
	v->arr[22][anon_sym_LT] = 411;
	v->arr[22][anon_sym_GT] = 411;
	v->arr[22][anon_sym_GT_GT] = 413;
	v->arr[22][anon_sym_LPAREN] = 415;
	v->arr[22][anon_sym_while] = 417;
	v->arr[22][anon_sym_until] = 417;
	v->arr[22][anon_sym_if] = 419;
	init_parse_table150(v);
}

// file funcs29.c
