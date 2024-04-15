/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs30.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_parse_table150(t_parse_table *v)
{
	v->arr[22][anon_sym_case] = 421;
	v->arr[22][anon_sym_esac] = 423;
	v->arr[22][anon_sym_SEMI_SEMI] = 425;
	v->arr[22][anon_sym_SEMI_AMP] = 427;
	v->arr[22][anon_sym_SEMI_SEMI_AMP] = 429;
	v->arr[22][anon_sym_function] = 431;
	v->arr[22][anon_sym_LBRACE] = 433;
	v->arr[22][anon_sym_BANG] = 435;
	v->arr[22][anon_sym_LBRACK] = 437;
	v->arr[22][anon_sym_LBRACK_LBRACK] = 439;
	v->arr[22][anon_sym_declare] = 441;
	v->arr[22][anon_sym_typeset] = 441;
	v->arr[22][anon_sym_export] = 441;
	v->arr[22][anon_sym_readonly] = 441;
	v->arr[22][anon_sym_local] = 441;
	init_parse_table151(v);
}

void	init_parse_table151(t_parse_table *v)
{
	v->arr[22][anon_sym_unset] = 443;
	v->arr[22][anon_sym_unsetenv] = 443;
	v->arr[22][anon_sym_AMP_GT] = 411;
	v->arr[22][anon_sym_AMP_GT_GT] = 413;
	v->arr[22][anon_sym_LT_AMP] = 411;
	v->arr[22][anon_sym_GT_AMP] = 411;
	v->arr[22][anon_sym_GT_PIPE] = 413;
	v->arr[22][anon_sym_LT_AMP_DASH] = 445;
	v->arr[22][anon_sym_GT_AMP_DASH] = 445;
	v->arr[22][anon_sym_LT_LT_LT] = 447;
	v->arr[22][anon_sym_DOLLAR_LPAREN_LPAREN] = 449;
	v->arr[22][anon_sym_DOLLAR_LBRACK] = 451;
	v->arr[22][anon_sym_DOLLAR] = 453;
	v->arr[22][sym__special_character] = 455;
	v->arr[22][anon_sym_DQUOTE] = 457;
	init_parse_table152(v);
}

void	init_parse_table152(t_parse_table *v)
{
	v->arr[22][sym_raw_string] = 459;
	v->arr[22][sym_ansi_c_string] = 459;
	v->arr[22][aux_sym_number_token1] = 461;
	v->arr[22][aux_sym_number_token2] = 463;
	v->arr[22][anon_sym_DOLLAR_LBRACE] = 465;
	v->arr[22][anon_sym_DOLLAR_LPAREN] = 467;
	v->arr[22][anon_sym_BQUOTE] = 469;
	v->arr[22][anon_sym_DOLLAR_BQUOTE] = 471;
	v->arr[22][anon_sym_LT_LPAREN] = 473;
	v->arr[22][anon_sym_GT_LPAREN] = 473;
	v->arr[22][sym_comment] = 71;
	v->arr[22][sym_file_descriptor] = 475;
	v->arr[22][sym_variable_name] = 477;
	v->arr[22][sym_test_operator] = 479;
	v->arr[22][sym__brace_start] = 481;
	init_parse_table153(v);
}

void	init_parse_table153(t_parse_table *v)
{
	v->arr[23][sym__statements] = 6539;
	v->arr[23][sym__statement_not_pipeline] = 6584;
	v->arr[23][sym_redirected_statement] = 4349;
	v->arr[23][sym_for_statement] = 4349;
	v->arr[23][sym_c_style_for_statement] = 4349;
	v->arr[23][sym_while_statement] = 4225;
	v->arr[23][sym_if_statement] = 4225;
	v->arr[23][sym_case_statement] = 4349;
	v->arr[23][sym_function_definition] = 4349;
	v->arr[23][sym_compound_statement] = 4349;
	v->arr[23][sym_subshell] = 4349;
	v->arr[23][sym_pipeline] = 4620;
	v->arr[23][sym_list] = 4349;
	v->arr[23][sym_negated_command] = 4349;
	v->arr[23][sym_test_command] = 4349;
	init_parse_table154(v);
}

void	init_parse_table154(t_parse_table *v)
{
	v->arr[23][sym_declaration_command] = 4349;
	v->arr[23][sym_unset_command] = 4349;
	v->arr[23][sym_command] = 4349;
	v->arr[23][sym_command_name] = 528;
	v->arr[23][sym_variable_assignment] = 807;
	v->arr[23][sym_variable_assignments] = 4349;
	v->arr[23][sym_subscript] = 6736;
	v->arr[23][sym_file_redirect] = 1635;
	v->arr[23][sym_herestring_redirect] = 1634;
	v->arr[23][sym_arithmetic_expansion] = 815;
	v->arr[23][sym_brace_expression] = 815;
	v->arr[23][sym_concatenation] = 1082;
	v->arr[23][sym_string] = 815;
	v->arr[23][sym_translated_string] = 815;
	v->arr[23][sym_number] = 815;
	init_parse_table155(v);
}

// file funcs30.c
