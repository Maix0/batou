/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs517.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_parse_table2585(t_parse_table *v)
{
	v->arr[427][sym_simple_expansion] = 957;
	v->arr[427][sym_expansion] = 957;
	v->arr[427][sym_command_substitution] = 957;
	v->arr[427][sym_process_substitution] = 957;
	v->arr[427][aux_sym__statements_repeat1] = 419;
	v->arr[427][aux_sym_redirected_statement_repeat2] = 4571;
	v->arr[427][aux_sym_command_repeat1] = 937;
	v->arr[427][aux_sym__literal_repeat1] = 1212;
	v->arr[427][sym_word] = 7;
	v->arr[427][anon_sym_for] = 9;
	v->arr[427][anon_sym_select] = 11;
	v->arr[427][anon_sym_LPAREN_LPAREN] = 13;
	v->arr[427][anon_sym_LT] = 15;
	v->arr[427][anon_sym_GT] = 15;
	v->arr[427][anon_sym_GT_GT] = 17;
	init_parse_table2586(v);
}

void	init_parse_table2586(t_parse_table *v)
{
	v->arr[427][anon_sym_LPAREN] = 19;
	v->arr[427][anon_sym_while] = 21;
	v->arr[427][anon_sym_until] = 21;
	v->arr[427][anon_sym_if] = 23;
	v->arr[427][anon_sym_case] = 25;
	v->arr[427][anon_sym_function] = 27;
	v->arr[427][anon_sym_LBRACE] = 29;
	v->arr[427][anon_sym_BANG] = 31;
	v->arr[427][anon_sym_LBRACK] = 33;
	v->arr[427][anon_sym_LBRACK_LBRACK] = 35;
	v->arr[427][anon_sym_declare] = 37;
	v->arr[427][anon_sym_typeset] = 37;
	v->arr[427][anon_sym_export] = 37;
	v->arr[427][anon_sym_readonly] = 37;
	v->arr[427][anon_sym_local] = 37;
	init_parse_table2587(v);
}

void	init_parse_table2587(t_parse_table *v)
{
	v->arr[427][anon_sym_unset] = 39;
	v->arr[427][anon_sym_unsetenv] = 39;
	v->arr[427][anon_sym_AMP_GT] = 15;
	v->arr[427][anon_sym_AMP_GT_GT] = 17;
	v->arr[427][anon_sym_LT_AMP] = 15;
	v->arr[427][anon_sym_GT_AMP] = 15;
	v->arr[427][anon_sym_GT_PIPE] = 17;
	v->arr[427][anon_sym_LT_AMP_DASH] = 41;
	v->arr[427][anon_sym_GT_AMP_DASH] = 41;
	v->arr[427][anon_sym_LT_LT_LT] = 43;
	v->arr[427][anon_sym_DOLLAR_LPAREN_LPAREN] = 45;
	v->arr[427][anon_sym_DOLLAR_LBRACK] = 47;
	v->arr[427][anon_sym_DOLLAR] = 49;
	v->arr[427][sym__special_character] = 51;
	v->arr[427][anon_sym_DQUOTE] = 53;
	init_parse_table2588(v);
}

void	init_parse_table2588(t_parse_table *v)
{
	v->arr[427][sym_raw_string] = 55;
	v->arr[427][sym_ansi_c_string] = 55;
	v->arr[427][aux_sym_number_token1] = 57;
	v->arr[427][aux_sym_number_token2] = 59;
	v->arr[427][anon_sym_DOLLAR_LBRACE] = 61;
	v->arr[427][anon_sym_DOLLAR_LPAREN] = 63;
	v->arr[427][anon_sym_BQUOTE] = 65;
	v->arr[427][anon_sym_DOLLAR_BQUOTE] = 67;
	v->arr[427][anon_sym_LT_LPAREN] = 69;
	v->arr[427][anon_sym_GT_LPAREN] = 69;
	v->arr[427][sym_comment] = 71;
	v->arr[427][sym_file_descriptor] = 73;
	v->arr[427][sym_variable_name] = 75;
	v->arr[427][sym_test_operator] = 77;
	v->arr[427][sym__brace_start] = 79;
	init_parse_table2589(v);
}

void	init_parse_table2589(t_parse_table *v)
{
	v->arr[428][aux_sym__terminated_statement] = 102;
	v->arr[428][sym__statement_not_pipeline] = 6718;
	v->arr[428][sym_redirected_statement] = 5007;
	v->arr[428][sym_for_statement] = 5007;
	v->arr[428][sym_c_style_for_statement] = 5007;
	v->arr[428][sym_while_statement] = 4551;
	v->arr[428][sym_if_statement] = 4551;
	v->arr[428][sym_case_statement] = 5007;
	v->arr[428][sym_function_definition] = 5007;
	v->arr[428][sym_compound_statement] = 5007;
	v->arr[428][sym_subshell] = 5007;
	v->arr[428][sym_pipeline] = 5189;
	v->arr[428][sym_list] = 5007;
	v->arr[428][sym_negated_command] = 5007;
	v->arr[428][sym_test_command] = 5007;
	init_parse_table2590(v);
}

// file funcs517.c
