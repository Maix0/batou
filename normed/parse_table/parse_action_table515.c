/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs515.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_parse_table2575(t_parse_table *v)
{
	v->arr[425][anon_sym_readonly] = 304;
	v->arr[425][anon_sym_local] = 304;
	v->arr[425][anon_sym_unset] = 306;
	v->arr[425][anon_sym_unsetenv] = 306;
	v->arr[425][anon_sym_AMP_GT] = 290;
	v->arr[425][anon_sym_AMP_GT_GT] = 292;
	v->arr[425][anon_sym_LT_AMP] = 290;
	v->arr[425][anon_sym_GT_AMP] = 290;
	v->arr[425][anon_sym_GT_PIPE] = 292;
	v->arr[425][anon_sym_LT_AMP_DASH] = 308;
	v->arr[425][anon_sym_GT_AMP_DASH] = 308;
	v->arr[425][anon_sym_LT_LT_LT] = 310;
	v->arr[425][anon_sym_DOLLAR_LPAREN_LPAREN] = 312;
	v->arr[425][anon_sym_DOLLAR_LBRACK] = 314;
	v->arr[425][anon_sym_DOLLAR] = 316;
	init_parse_table2576(v);
}

void	init_parse_table2576(t_parse_table *v)
{
	v->arr[425][sym__special_character] = 318;
	v->arr[425][anon_sym_DQUOTE] = 320;
	v->arr[425][sym_raw_string] = 322;
	v->arr[425][sym_ansi_c_string] = 322;
	v->arr[425][aux_sym_number_token1] = 324;
	v->arr[425][aux_sym_number_token2] = 326;
	v->arr[425][anon_sym_DOLLAR_LBRACE] = 328;
	v->arr[425][anon_sym_DOLLAR_LPAREN] = 330;
	v->arr[425][anon_sym_BQUOTE] = 332;
	v->arr[425][anon_sym_DOLLAR_BQUOTE] = 334;
	v->arr[425][anon_sym_LT_LPAREN] = 336;
	v->arr[425][anon_sym_GT_LPAREN] = 336;
	v->arr[425][sym_comment] = 71;
	v->arr[425][sym_file_descriptor] = 338;
	v->arr[425][sym_variable_name] = 340;
	init_parse_table2577(v);
}

void	init_parse_table2577(t_parse_table *v)
{
	v->arr[425][sym_test_operator] = 342;
	v->arr[425][sym__brace_start] = 344;
	v->arr[426][sym__statement_not_pipeline] = 6674;
	v->arr[426][sym_redirected_statement] = 4433;
	v->arr[426][sym_for_statement] = 4433;
	v->arr[426][sym_c_style_for_statement] = 4433;
	v->arr[426][sym_while_statement] = 4249;
	v->arr[426][sym_if_statement] = 4249;
	v->arr[426][sym_case_statement] = 4433;
	v->arr[426][sym_function_definition] = 4433;
	v->arr[426][sym_compound_statement] = 4433;
	v->arr[426][sym_subshell] = 4433;
	v->arr[426][sym_pipeline] = 4939;
	v->arr[426][sym_list] = 4433;
	v->arr[426][sym_negated_command] = 4433;
	init_parse_table2578(v);
}

void	init_parse_table2578(t_parse_table *v)
{
	v->arr[426][sym_test_command] = 4433;
	v->arr[426][sym_declaration_command] = 4433;
	v->arr[426][sym_unset_command] = 4433;
	v->arr[426][sym_command] = 4433;
	v->arr[426][sym_command_name] = 530;
	v->arr[426][sym_variable_assignment] = 835;
	v->arr[426][sym_variable_assignments] = 4433;
	v->arr[426][sym_subscript] = 6760;
	v->arr[426][sym_file_redirect] = 1893;
	v->arr[426][sym_herestring_redirect] = 1892;
	v->arr[426][sym_arithmetic_expansion] = 852;
	v->arr[426][sym_brace_expression] = 852;
	v->arr[426][sym_concatenation] = 1169;
	v->arr[426][sym_string] = 852;
	v->arr[426][sym_translated_string] = 852;
	init_parse_table2579(v);
}

void	init_parse_table2579(t_parse_table *v)
{
	v->arr[426][sym_number] = 852;
	v->arr[426][sym_simple_expansion] = 852;
	v->arr[426][sym_expansion] = 852;
	v->arr[426][sym_command_substitution] = 852;
	v->arr[426][sym_process_substitution] = 852;
	v->arr[426][aux_sym__statements_repeat1] = 419;
	v->arr[426][aux_sym_redirected_statement_repeat2] = 4371;
	v->arr[426][aux_sym_command_repeat1] = 989;
	v->arr[426][aux_sym__literal_repeat1] = 1026;
	v->arr[426][sym_word] = 665;
	v->arr[426][anon_sym_for] = 667;
	v->arr[426][anon_sym_select] = 669;
	v->arr[426][anon_sym_LPAREN_LPAREN] = 671;
	v->arr[426][anon_sym_LT] = 673;
	v->arr[426][anon_sym_GT] = 673;
	init_parse_table2580(v);
}

// file funcs515.c
