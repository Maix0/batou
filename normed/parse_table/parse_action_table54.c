/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs54.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_parse_table270(t_parse_table *v)
{
	v->arr[41][anon_sym_GT_PIPE] = 675;
	v->arr[41][anon_sym_LT_AMP_DASH] = 701;
	v->arr[41][anon_sym_GT_AMP_DASH] = 701;
	v->arr[41][anon_sym_LT_LT_LT] = 703;
	v->arr[41][anon_sym_DOLLAR_LPAREN_LPAREN] = 705;
	v->arr[41][anon_sym_DOLLAR_LBRACK] = 707;
	v->arr[41][anon_sym_DOLLAR] = 709;
	v->arr[41][sym__special_character] = 711;
	v->arr[41][anon_sym_DQUOTE] = 713;
	v->arr[41][sym_raw_string] = 715;
	v->arr[41][sym_ansi_c_string] = 715;
	v->arr[41][aux_sym_number_token1] = 717;
	v->arr[41][aux_sym_number_token2] = 719;
	v->arr[41][anon_sym_DOLLAR_LBRACE] = 721;
	v->arr[41][anon_sym_DOLLAR_LPAREN] = 723;
	init_parse_table271(v);
}

void	init_parse_table271(t_parse_table *v)
{
	v->arr[41][anon_sym_BQUOTE] = 725;
	v->arr[41][anon_sym_DOLLAR_BQUOTE] = 727;
	v->arr[41][anon_sym_LT_LPAREN] = 729;
	v->arr[41][anon_sym_GT_LPAREN] = 729;
	v->arr[41][sym_comment] = 71;
	v->arr[41][sym_file_descriptor] = 731;
	v->arr[41][sym_variable_name] = 733;
	v->arr[41][sym_test_operator] = 735;
	v->arr[41][sym__brace_start] = 737;
	v->arr[42][sym__statements] = 6672;
	v->arr[42][sym__statement_not_pipeline] = 6674;
	v->arr[42][sym_redirected_statement] = 4416;
	v->arr[42][sym_for_statement] = 4416;
	v->arr[42][sym_c_style_for_statement] = 4416;
	v->arr[42][sym_while_statement] = 4239;
	init_parse_table272(v);
}

void	init_parse_table272(t_parse_table *v)
{
	v->arr[42][sym_if_statement] = 4239;
	v->arr[42][sym_case_statement] = 4416;
	v->arr[42][sym_function_definition] = 4416;
	v->arr[42][sym_compound_statement] = 4416;
	v->arr[42][sym_subshell] = 4416;
	v->arr[42][sym_pipeline] = 4910;
	v->arr[42][sym_list] = 4416;
	v->arr[42][sym_negated_command] = 4416;
	v->arr[42][sym_test_command] = 4416;
	v->arr[42][sym_declaration_command] = 4416;
	v->arr[42][sym_unset_command] = 4416;
	v->arr[42][sym_command] = 4416;
	v->arr[42][sym_command_name] = 530;
	v->arr[42][sym_variable_assignment] = 849;
	v->arr[42][sym_variable_assignments] = 4416;
	init_parse_table273(v);
}

void	init_parse_table273(t_parse_table *v)
{
	v->arr[42][sym_subscript] = 6760;
	v->arr[42][sym_file_redirect] = 1893;
	v->arr[42][sym_herestring_redirect] = 1892;
	v->arr[42][sym_arithmetic_expansion] = 852;
	v->arr[42][sym_brace_expression] = 852;
	v->arr[42][sym_concatenation] = 1169;
	v->arr[42][sym_string] = 852;
	v->arr[42][sym_translated_string] = 852;
	v->arr[42][sym_number] = 852;
	v->arr[42][sym_simple_expansion] = 852;
	v->arr[42][sym_expansion] = 852;
	v->arr[42][sym_command_substitution] = 852;
	v->arr[42][sym_process_substitution] = 852;
	v->arr[42][aux_sym__statements_repeat1] = 426;
	v->arr[42][aux_sym_redirected_statement_repeat2] = 4371;
	init_parse_table274(v);
}

void	init_parse_table274(t_parse_table *v)
{
	v->arr[42][aux_sym_command_repeat1] = 989;
	v->arr[42][aux_sym__literal_repeat1] = 1026;
	v->arr[42][sym_word] = 665;
	v->arr[42][anon_sym_for] = 667;
	v->arr[42][anon_sym_select] = 669;
	v->arr[42][anon_sym_LPAREN_LPAREN] = 671;
	v->arr[42][anon_sym_LT] = 673;
	v->arr[42][anon_sym_GT] = 673;
	v->arr[42][anon_sym_GT_GT] = 675;
	v->arr[42][anon_sym_LPAREN] = 677;
	v->arr[42][anon_sym_while] = 679;
	v->arr[42][anon_sym_until] = 679;
	v->arr[42][anon_sym_if] = 681;
	v->arr[42][anon_sym_case] = 683;
	v->arr[42][anon_sym_SEMI_SEMI] = 751;
	init_parse_table275(v);
}

// file funcs54.c
