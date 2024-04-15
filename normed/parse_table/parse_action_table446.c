/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs446.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_parse_table2230(t_parse_table *v)
{
	v->arr[368][sym_while_statement] = 4400;
	v->arr[368][sym_if_statement] = 4400;
	v->arr[368][sym_case_statement] = 4797;
	v->arr[368][sym_function_definition] = 4797;
	v->arr[368][sym_compound_statement] = 4797;
	v->arr[368][sym_subshell] = 4797;
	v->arr[368][sym_pipeline] = 5054;
	v->arr[368][sym_list] = 4797;
	v->arr[368][sym_negated_command] = 4797;
	v->arr[368][sym_test_command] = 4797;
	v->arr[368][sym_declaration_command] = 4797;
	v->arr[368][sym_unset_command] = 4797;
	v->arr[368][sym_command] = 4797;
	v->arr[368][sym_command_name] = 533;
	v->arr[368][sym_variable_assignment] = 945;
	init_parse_table2231(v);
}

void	init_parse_table2231(t_parse_table *v)
{
	v->arr[368][sym_variable_assignments] = 4797;
	v->arr[368][sym_subscript] = 6754;
	v->arr[368][sym_file_redirect] = 2019;
	v->arr[368][sym_herestring_redirect] = 2017;
	v->arr[368][sym_arithmetic_expansion] = 938;
	v->arr[368][sym_brace_expression] = 938;
	v->arr[368][sym_concatenation] = 1376;
	v->arr[368][sym_string] = 938;
	v->arr[368][sym_translated_string] = 938;
	v->arr[368][sym_number] = 938;
	v->arr[368][sym_simple_expansion] = 938;
	v->arr[368][sym_expansion] = 938;
	v->arr[368][sym_command_substitution] = 938;
	v->arr[368][sym_process_substitution] = 938;
	v->arr[368][aux_sym__statements_repeat1] = 423;
	init_parse_table2232(v);
}

void	init_parse_table2232(t_parse_table *v)
{
	v->arr[368][aux_sym_redirected_statement_repeat2] = 4480;
	v->arr[368][aux_sym_command_repeat1] = 951;
	v->arr[368][aux_sym__literal_repeat1] = 1267;
	v->arr[368][sym_word] = 765;
	v->arr[368][anon_sym_for] = 9;
	v->arr[368][anon_sym_select] = 11;
	v->arr[368][anon_sym_LPAREN_LPAREN] = 288;
	v->arr[368][anon_sym_LT] = 85;
	v->arr[368][anon_sym_GT] = 85;
	v->arr[368][anon_sym_GT_GT] = 87;
	v->arr[368][anon_sym_LPAREN] = 19;
	v->arr[368][anon_sym_while] = 21;
	v->arr[368][anon_sym_until] = 21;
	v->arr[368][anon_sym_if] = 23;
	v->arr[368][anon_sym_case] = 25;
	init_parse_table2233(v);
}

void	init_parse_table2233(t_parse_table *v)
{
	v->arr[368][anon_sym_function] = 91;
	v->arr[368][anon_sym_LBRACE] = 29;
	v->arr[368][anon_sym_BANG] = 769;
	v->arr[368][anon_sym_LBRACK] = 33;
	v->arr[368][anon_sym_LBRACK_LBRACK] = 35;
	v->arr[368][anon_sym_declare] = 95;
	v->arr[368][anon_sym_typeset] = 95;
	v->arr[368][anon_sym_export] = 95;
	v->arr[368][anon_sym_readonly] = 95;
	v->arr[368][anon_sym_local] = 95;
	v->arr[368][anon_sym_unset] = 97;
	v->arr[368][anon_sym_unsetenv] = 97;
	v->arr[368][anon_sym_AMP_GT] = 85;
	v->arr[368][anon_sym_AMP_GT_GT] = 87;
	v->arr[368][anon_sym_LT_AMP] = 85;
	init_parse_table2234(v);
}

void	init_parse_table2234(t_parse_table *v)
{
	v->arr[368][anon_sym_GT_AMP] = 85;
	v->arr[368][anon_sym_GT_PIPE] = 87;
	v->arr[368][anon_sym_LT_AMP_DASH] = 99;
	v->arr[368][anon_sym_GT_AMP_DASH] = 99;
	v->arr[368][anon_sym_LT_LT_LT] = 101;
	v->arr[368][anon_sym_DOLLAR_LPAREN_LPAREN] = 312;
	v->arr[368][anon_sym_DOLLAR_LBRACK] = 314;
	v->arr[368][anon_sym_DOLLAR] = 316;
	v->arr[368][sym__special_character] = 771;
	v->arr[368][anon_sym_DQUOTE] = 320;
	v->arr[368][sym_raw_string] = 773;
	v->arr[368][sym_ansi_c_string] = 773;
	v->arr[368][aux_sym_number_token1] = 324;
	v->arr[368][aux_sym_number_token2] = 326;
	v->arr[368][anon_sym_DOLLAR_LBRACE] = 328;
	init_parse_table2235(v);
}

// file funcs446.c
