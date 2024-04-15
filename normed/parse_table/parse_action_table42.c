/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs42.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_parse_table210(t_parse_table *v)
{
	v->arr[32][sym_compound_statement] = 4349;
	v->arr[32][sym_subshell] = 4349;
	v->arr[32][sym_pipeline] = 4620;
	v->arr[32][sym_list] = 4349;
	v->arr[32][sym_negated_command] = 4349;
	v->arr[32][sym_test_command] = 4349;
	v->arr[32][sym_declaration_command] = 4349;
	v->arr[32][sym_unset_command] = 4349;
	v->arr[32][sym_command] = 4349;
	v->arr[32][sym_command_name] = 528;
	v->arr[32][sym_variable_assignment] = 807;
	v->arr[32][sym_variable_assignments] = 4349;
	v->arr[32][sym_subscript] = 6736;
	v->arr[32][sym_file_redirect] = 1635;
	v->arr[32][sym_herestring_redirect] = 1634;
	init_parse_table211(v);
}

void	init_parse_table211(t_parse_table *v)
{
	v->arr[32][sym_arithmetic_expansion] = 815;
	v->arr[32][sym_brace_expression] = 815;
	v->arr[32][sym_concatenation] = 1082;
	v->arr[32][sym_string] = 815;
	v->arr[32][sym_translated_string] = 815;
	v->arr[32][sym_number] = 815;
	v->arr[32][sym_simple_expansion] = 815;
	v->arr[32][sym_expansion] = 815;
	v->arr[32][sym_command_substitution] = 815;
	v->arr[32][sym_process_substitution] = 815;
	v->arr[32][aux_sym__statements_repeat1] = 431;
	v->arr[32][aux_sym_redirected_statement_repeat2] = 4250;
	v->arr[32][aux_sym_command_repeat1] = 925;
	v->arr[32][aux_sym__literal_repeat1] = 926;
	v->arr[32][sym_word] = 403;
	init_parse_table212(v);
}

void	init_parse_table212(t_parse_table *v)
{
	v->arr[32][anon_sym_for] = 405;
	v->arr[32][anon_sym_select] = 407;
	v->arr[32][anon_sym_LPAREN_LPAREN] = 409;
	v->arr[32][anon_sym_LT] = 411;
	v->arr[32][anon_sym_GT] = 411;
	v->arr[32][anon_sym_GT_GT] = 413;
	v->arr[32][anon_sym_LPAREN] = 415;
	v->arr[32][anon_sym_while] = 417;
	v->arr[32][anon_sym_until] = 417;
	v->arr[32][anon_sym_if] = 419;
	v->arr[32][anon_sym_case] = 421;
	v->arr[32][anon_sym_esac] = 543;
	v->arr[32][anon_sym_SEMI_SEMI] = 545;
	v->arr[32][anon_sym_SEMI_AMP] = 547;
	v->arr[32][anon_sym_SEMI_SEMI_AMP] = 547;
	init_parse_table213(v);
}

void	init_parse_table213(t_parse_table *v)
{
	v->arr[32][anon_sym_function] = 431;
	v->arr[32][anon_sym_LBRACE] = 433;
	v->arr[32][anon_sym_BANG] = 435;
	v->arr[32][anon_sym_LBRACK] = 437;
	v->arr[32][anon_sym_LBRACK_LBRACK] = 439;
	v->arr[32][anon_sym_declare] = 441;
	v->arr[32][anon_sym_typeset] = 441;
	v->arr[32][anon_sym_export] = 441;
	v->arr[32][anon_sym_readonly] = 441;
	v->arr[32][anon_sym_local] = 441;
	v->arr[32][anon_sym_unset] = 443;
	v->arr[32][anon_sym_unsetenv] = 443;
	v->arr[32][anon_sym_AMP_GT] = 411;
	v->arr[32][anon_sym_AMP_GT_GT] = 413;
	v->arr[32][anon_sym_LT_AMP] = 411;
	init_parse_table214(v);
}

void	init_parse_table214(t_parse_table *v)
{
	v->arr[32][anon_sym_GT_AMP] = 411;
	v->arr[32][anon_sym_GT_PIPE] = 413;
	v->arr[32][anon_sym_LT_AMP_DASH] = 445;
	v->arr[32][anon_sym_GT_AMP_DASH] = 445;
	v->arr[32][anon_sym_LT_LT_LT] = 447;
	v->arr[32][anon_sym_DOLLAR_LPAREN_LPAREN] = 449;
	v->arr[32][anon_sym_DOLLAR_LBRACK] = 451;
	v->arr[32][anon_sym_DOLLAR] = 453;
	v->arr[32][sym__special_character] = 455;
	v->arr[32][anon_sym_DQUOTE] = 457;
	v->arr[32][sym_raw_string] = 459;
	v->arr[32][sym_ansi_c_string] = 459;
	v->arr[32][aux_sym_number_token1] = 461;
	v->arr[32][aux_sym_number_token2] = 463;
	v->arr[32][anon_sym_DOLLAR_LBRACE] = 465;
	init_parse_table215(v);
}

// file funcs42.c
