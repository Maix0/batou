/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs45.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_parse_table225(t_parse_table *v)
{
	v->arr[34][anon_sym_until] = 576;
	v->arr[34][anon_sym_do] = 579;
	v->arr[34][anon_sym_if] = 581;
	v->arr[34][anon_sym_then] = 579;
	v->arr[34][anon_sym_fi] = 579;
	v->arr[34][anon_sym_elif] = 579;
	v->arr[34][anon_sym_else] = 579;
	v->arr[34][anon_sym_case] = 584;
	v->arr[34][anon_sym_function] = 587;
	v->arr[34][anon_sym_LBRACE] = 590;
	v->arr[34][anon_sym_BANG] = 593;
	v->arr[34][anon_sym_LBRACK] = 596;
	v->arr[34][anon_sym_LBRACK_LBRACK] = 599;
	v->arr[34][anon_sym_declare] = 602;
	v->arr[34][anon_sym_typeset] = 602;
	init_parse_table226(v);
}

void	init_parse_table226(t_parse_table *v)
{
	v->arr[34][anon_sym_export] = 602;
	v->arr[34][anon_sym_readonly] = 602;
	v->arr[34][anon_sym_local] = 602;
	v->arr[34][anon_sym_unset] = 605;
	v->arr[34][anon_sym_unsetenv] = 605;
	v->arr[34][anon_sym_AMP_GT] = 567;
	v->arr[34][anon_sym_AMP_GT_GT] = 570;
	v->arr[34][anon_sym_LT_AMP] = 567;
	v->arr[34][anon_sym_GT_AMP] = 567;
	v->arr[34][anon_sym_GT_PIPE] = 570;
	v->arr[34][anon_sym_LT_AMP_DASH] = 608;
	v->arr[34][anon_sym_GT_AMP_DASH] = 608;
	v->arr[34][anon_sym_LT_LT_LT] = 611;
	v->arr[34][anon_sym_DOLLAR_LPAREN_LPAREN] = 614;
	v->arr[34][anon_sym_DOLLAR_LBRACK] = 617;
	init_parse_table227(v);
}

void	init_parse_table227(t_parse_table *v)
{
	v->arr[34][anon_sym_DOLLAR] = 620;
	v->arr[34][sym__special_character] = 623;
	v->arr[34][anon_sym_DQUOTE] = 626;
	v->arr[34][sym_raw_string] = 629;
	v->arr[34][sym_ansi_c_string] = 629;
	v->arr[34][aux_sym_number_token1] = 632;
	v->arr[34][aux_sym_number_token2] = 635;
	v->arr[34][anon_sym_DOLLAR_LBRACE] = 638;
	v->arr[34][anon_sym_DOLLAR_LPAREN] = 641;
	v->arr[34][anon_sym_BQUOTE] = 644;
	v->arr[34][anon_sym_DOLLAR_BQUOTE] = 647;
	v->arr[34][anon_sym_LT_LPAREN] = 650;
	v->arr[34][anon_sym_GT_LPAREN] = 650;
	v->arr[34][sym_comment] = 71;
	v->arr[34][sym_file_descriptor] = 653;
	init_parse_table228(v);
}

void	init_parse_table228(t_parse_table *v)
{
	v->arr[34][sym_variable_name] = 656;
	v->arr[34][sym_test_operator] = 659;
	v->arr[34][sym__brace_start] = 662;
	v->arr[35][sym__statements] = 6649;
	v->arr[35][sym__statement_not_pipeline] = 6674;
	v->arr[35][sym_redirected_statement] = 4416;
	v->arr[35][sym_for_statement] = 4416;
	v->arr[35][sym_c_style_for_statement] = 4416;
	v->arr[35][sym_while_statement] = 4239;
	v->arr[35][sym_if_statement] = 4239;
	v->arr[35][sym_case_statement] = 4416;
	v->arr[35][sym_function_definition] = 4416;
	v->arr[35][sym_compound_statement] = 4416;
	v->arr[35][sym_subshell] = 4416;
	v->arr[35][sym_pipeline] = 4910;
	init_parse_table229(v);
}

void	init_parse_table229(t_parse_table *v)
{
	v->arr[35][sym_list] = 4416;
	v->arr[35][sym_negated_command] = 4416;
	v->arr[35][sym_test_command] = 4416;
	v->arr[35][sym_declaration_command] = 4416;
	v->arr[35][sym_unset_command] = 4416;
	v->arr[35][sym_command] = 4416;
	v->arr[35][sym_command_name] = 530;
	v->arr[35][sym_variable_assignment] = 849;
	v->arr[35][sym_variable_assignments] = 4416;
	v->arr[35][sym_subscript] = 6760;
	v->arr[35][sym_file_redirect] = 1893;
	v->arr[35][sym_herestring_redirect] = 1892;
	v->arr[35][sym_arithmetic_expansion] = 852;
	v->arr[35][sym_brace_expression] = 852;
	v->arr[35][sym_concatenation] = 1169;
	init_parse_table230(v);
}

// file funcs45.c
