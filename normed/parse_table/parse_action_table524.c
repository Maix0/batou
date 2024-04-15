/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs524.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_parse_table2620(t_parse_table *v)
{
	v->arr[433][sym_subscript] = 6774;
	v->arr[433][sym_file_redirect] = 2055;
	v->arr[433][sym_herestring_redirect] = 2156;
	v->arr[433][sym_arithmetic_expansion] = 957;
	v->arr[433][sym_brace_expression] = 957;
	v->arr[433][sym_concatenation] = 1386;
	v->arr[433][sym_string] = 957;
	v->arr[433][sym_translated_string] = 957;
	v->arr[433][sym_number] = 957;
	v->arr[433][sym_simple_expansion] = 957;
	v->arr[433][sym_expansion] = 957;
	v->arr[433][sym_command_substitution] = 957;
	v->arr[433][sym_process_substitution] = 957;
	v->arr[433][aux_sym_redirected_statement_repeat2] = 4571;
	v->arr[433][aux_sym_command_repeat1] = 937;
	init_parse_table2621(v);
}

void	init_parse_table2621(t_parse_table *v)
{
	v->arr[433][aux_sym__literal_repeat1] = 1212;
	v->arr[433][sym_word] = 7;
	v->arr[433][anon_sym_for] = 9;
	v->arr[433][anon_sym_select] = 11;
	v->arr[433][anon_sym_LPAREN_LPAREN] = 13;
	v->arr[433][anon_sym_LT] = 15;
	v->arr[433][anon_sym_GT] = 15;
	v->arr[433][anon_sym_GT_GT] = 17;
	v->arr[433][anon_sym_LPAREN] = 19;
	v->arr[433][anon_sym_while] = 21;
	v->arr[433][anon_sym_until] = 21;
	v->arr[433][anon_sym_if] = 23;
	v->arr[433][anon_sym_case] = 25;
	v->arr[433][anon_sym_function] = 27;
	v->arr[433][anon_sym_LBRACE] = 29;
	init_parse_table2622(v);
}

void	init_parse_table2622(t_parse_table *v)
{
	v->arr[433][anon_sym_BANG] = 31;
	v->arr[433][anon_sym_LBRACK] = 33;
	v->arr[433][anon_sym_LBRACK_LBRACK] = 35;
	v->arr[433][anon_sym_declare] = 37;
	v->arr[433][anon_sym_typeset] = 37;
	v->arr[433][anon_sym_export] = 37;
	v->arr[433][anon_sym_readonly] = 37;
	v->arr[433][anon_sym_local] = 37;
	v->arr[433][anon_sym_unset] = 39;
	v->arr[433][anon_sym_unsetenv] = 39;
	v->arr[433][anon_sym_AMP_GT] = 15;
	v->arr[433][anon_sym_AMP_GT_GT] = 17;
	v->arr[433][anon_sym_LT_AMP] = 15;
	v->arr[433][anon_sym_GT_AMP] = 15;
	v->arr[433][anon_sym_GT_PIPE] = 17;
	init_parse_table2623(v);
}

void	init_parse_table2623(t_parse_table *v)
{
	v->arr[433][anon_sym_LT_AMP_DASH] = 41;
	v->arr[433][anon_sym_GT_AMP_DASH] = 41;
	v->arr[433][anon_sym_LT_LT_LT] = 43;
	v->arr[433][anon_sym_DOLLAR_LPAREN_LPAREN] = 45;
	v->arr[433][anon_sym_DOLLAR_LBRACK] = 47;
	v->arr[433][anon_sym_DOLLAR] = 49;
	v->arr[433][sym__special_character] = 51;
	v->arr[433][anon_sym_DQUOTE] = 53;
	v->arr[433][sym_raw_string] = 55;
	v->arr[433][sym_ansi_c_string] = 55;
	v->arr[433][aux_sym_number_token1] = 57;
	v->arr[433][aux_sym_number_token2] = 59;
	v->arr[433][anon_sym_DOLLAR_LBRACE] = 61;
	v->arr[433][anon_sym_DOLLAR_LPAREN] = 63;
	v->arr[433][anon_sym_BQUOTE] = 65;
	init_parse_table2624(v);
}

void	init_parse_table2624(t_parse_table *v)
{
	v->arr[433][anon_sym_DOLLAR_BQUOTE] = 67;
	v->arr[433][anon_sym_LT_LPAREN] = 69;
	v->arr[433][anon_sym_GT_LPAREN] = 69;
	v->arr[433][sym_comment] = 71;
	v->arr[433][sym_file_descriptor] = 73;
	v->arr[433][sym_variable_name] = 75;
	v->arr[433][sym_test_operator] = 77;
	v->arr[433][sym__brace_start] = 79;
	v->arr[434][sym__statement_not_pipeline] = 6566;
	v->arr[434][sym_redirected_statement] = 5381;
	v->arr[434][sym_for_statement] = 5381;
	v->arr[434][sym_c_style_for_statement] = 5381;
	v->arr[434][sym_while_statement] = 5118;
	v->arr[434][sym_if_statement] = 5118;
	v->arr[434][sym_case_statement] = 5381;
	init_parse_table2625(v);
}

// file funcs524.c
