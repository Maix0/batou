/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs36.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_parse_table180(t_parse_table *v)
{
	v->arr[27][sym_number] = 815;
	v->arr[27][sym_simple_expansion] = 815;
	v->arr[27][sym_expansion] = 815;
	v->arr[27][sym_command_substitution] = 815;
	v->arr[27][sym_process_substitution] = 815;
	v->arr[27][aux_sym__statements_repeat1] = 431;
	v->arr[27][aux_sym_redirected_statement_repeat2] = 4250;
	v->arr[27][aux_sym_command_repeat1] = 925;
	v->arr[27][aux_sym__literal_repeat1] = 926;
	v->arr[27][sym_word] = 403;
	v->arr[27][anon_sym_for] = 405;
	v->arr[27][anon_sym_select] = 407;
	v->arr[27][anon_sym_LPAREN_LPAREN] = 409;
	v->arr[27][anon_sym_LT] = 411;
	v->arr[27][anon_sym_GT] = 411;
	init_parse_table181(v);
}

void	init_parse_table181(t_parse_table *v)
{
	v->arr[27][anon_sym_GT_GT] = 413;
	v->arr[27][anon_sym_LPAREN] = 415;
	v->arr[27][anon_sym_while] = 417;
	v->arr[27][anon_sym_until] = 417;
	v->arr[27][anon_sym_if] = 419;
	v->arr[27][anon_sym_case] = 421;
	v->arr[27][anon_sym_esac] = 511;
	v->arr[27][anon_sym_SEMI_SEMI] = 513;
	v->arr[27][anon_sym_SEMI_AMP] = 515;
	v->arr[27][anon_sym_SEMI_SEMI_AMP] = 517;
	v->arr[27][anon_sym_function] = 431;
	v->arr[27][anon_sym_LBRACE] = 433;
	v->arr[27][anon_sym_BANG] = 435;
	v->arr[27][anon_sym_LBRACK] = 437;
	v->arr[27][anon_sym_LBRACK_LBRACK] = 439;
	init_parse_table182(v);
}

void	init_parse_table182(t_parse_table *v)
{
	v->arr[27][anon_sym_declare] = 441;
	v->arr[27][anon_sym_typeset] = 441;
	v->arr[27][anon_sym_export] = 441;
	v->arr[27][anon_sym_readonly] = 441;
	v->arr[27][anon_sym_local] = 441;
	v->arr[27][anon_sym_unset] = 443;
	v->arr[27][anon_sym_unsetenv] = 443;
	v->arr[27][anon_sym_AMP_GT] = 411;
	v->arr[27][anon_sym_AMP_GT_GT] = 413;
	v->arr[27][anon_sym_LT_AMP] = 411;
	v->arr[27][anon_sym_GT_AMP] = 411;
	v->arr[27][anon_sym_GT_PIPE] = 413;
	v->arr[27][anon_sym_LT_AMP_DASH] = 445;
	v->arr[27][anon_sym_GT_AMP_DASH] = 445;
	v->arr[27][anon_sym_LT_LT_LT] = 447;
	init_parse_table183(v);
}

void	init_parse_table183(t_parse_table *v)
{
	v->arr[27][anon_sym_DOLLAR_LPAREN_LPAREN] = 449;
	v->arr[27][anon_sym_DOLLAR_LBRACK] = 451;
	v->arr[27][anon_sym_DOLLAR] = 453;
	v->arr[27][sym__special_character] = 455;
	v->arr[27][anon_sym_DQUOTE] = 457;
	v->arr[27][sym_raw_string] = 459;
	v->arr[27][sym_ansi_c_string] = 459;
	v->arr[27][aux_sym_number_token1] = 461;
	v->arr[27][aux_sym_number_token2] = 463;
	v->arr[27][anon_sym_DOLLAR_LBRACE] = 465;
	v->arr[27][anon_sym_DOLLAR_LPAREN] = 467;
	v->arr[27][anon_sym_BQUOTE] = 469;
	v->arr[27][anon_sym_DOLLAR_BQUOTE] = 471;
	v->arr[27][anon_sym_LT_LPAREN] = 473;
	v->arr[27][anon_sym_GT_LPAREN] = 473;
	init_parse_table184(v);
}

void	init_parse_table184(t_parse_table *v)
{
	v->arr[27][sym_comment] = 71;
	v->arr[27][sym_file_descriptor] = 475;
	v->arr[27][sym_variable_name] = 477;
	v->arr[27][sym_test_operator] = 479;
	v->arr[27][sym__brace_start] = 481;
	v->arr[28][sym__statements] = 6491;
	v->arr[28][sym__statement_not_pipeline] = 6584;
	v->arr[28][sym_redirected_statement] = 4349;
	v->arr[28][sym_for_statement] = 4349;
	v->arr[28][sym_c_style_for_statement] = 4349;
	v->arr[28][sym_while_statement] = 4225;
	v->arr[28][sym_if_statement] = 4225;
	v->arr[28][sym_case_statement] = 4349;
	v->arr[28][sym_function_definition] = 4349;
	v->arr[28][sym_compound_statement] = 4349;
	init_parse_table185(v);
}

// file funcs36.c
