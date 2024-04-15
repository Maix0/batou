/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs49.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_parse_table245(t_parse_table *v)
{
	v->arr[37][anon_sym_AMP_GT_GT] = 675;
	v->arr[37][anon_sym_LT_AMP] = 673;
	v->arr[37][anon_sym_GT_AMP] = 673;
	v->arr[37][anon_sym_GT_PIPE] = 675;
	v->arr[37][anon_sym_LT_AMP_DASH] = 701;
	v->arr[37][anon_sym_GT_AMP_DASH] = 701;
	v->arr[37][anon_sym_LT_LT_LT] = 703;
	v->arr[37][anon_sym_DOLLAR_LPAREN_LPAREN] = 705;
	v->arr[37][anon_sym_DOLLAR_LBRACK] = 707;
	v->arr[37][anon_sym_DOLLAR] = 709;
	v->arr[37][sym__special_character] = 711;
	v->arr[37][anon_sym_DQUOTE] = 713;
	v->arr[37][sym_raw_string] = 715;
	v->arr[37][sym_ansi_c_string] = 715;
	v->arr[37][aux_sym_number_token1] = 717;
	init_parse_table246(v);
}

void	init_parse_table246(t_parse_table *v)
{
	v->arr[37][aux_sym_number_token2] = 719;
	v->arr[37][anon_sym_DOLLAR_LBRACE] = 721;
	v->arr[37][anon_sym_DOLLAR_LPAREN] = 723;
	v->arr[37][anon_sym_BQUOTE] = 725;
	v->arr[37][anon_sym_DOLLAR_BQUOTE] = 727;
	v->arr[37][anon_sym_LT_LPAREN] = 729;
	v->arr[37][anon_sym_GT_LPAREN] = 729;
	v->arr[37][sym_comment] = 71;
	v->arr[37][sym_file_descriptor] = 731;
	v->arr[37][sym_variable_name] = 733;
	v->arr[37][sym_test_operator] = 735;
	v->arr[37][sym__brace_start] = 737;
	v->arr[38][sym__statements] = 6719;
	v->arr[38][sym__statement_not_pipeline] = 6674;
	v->arr[38][sym_redirected_statement] = 4416;
	init_parse_table247(v);
}

void	init_parse_table247(t_parse_table *v)
{
	v->arr[38][sym_for_statement] = 4416;
	v->arr[38][sym_c_style_for_statement] = 4416;
	v->arr[38][sym_while_statement] = 4239;
	v->arr[38][sym_if_statement] = 4239;
	v->arr[38][sym_case_statement] = 4416;
	v->arr[38][sym_function_definition] = 4416;
	v->arr[38][sym_compound_statement] = 4416;
	v->arr[38][sym_subshell] = 4416;
	v->arr[38][sym_pipeline] = 4910;
	v->arr[38][sym_list] = 4416;
	v->arr[38][sym_negated_command] = 4416;
	v->arr[38][sym_test_command] = 4416;
	v->arr[38][sym_declaration_command] = 4416;
	v->arr[38][sym_unset_command] = 4416;
	v->arr[38][sym_command] = 4416;
	init_parse_table248(v);
}

void	init_parse_table248(t_parse_table *v)
{
	v->arr[38][sym_command_name] = 530;
	v->arr[38][sym_variable_assignment] = 849;
	v->arr[38][sym_variable_assignments] = 4416;
	v->arr[38][sym_subscript] = 6760;
	v->arr[38][sym_file_redirect] = 1893;
	v->arr[38][sym_herestring_redirect] = 1892;
	v->arr[38][sym_arithmetic_expansion] = 852;
	v->arr[38][sym_brace_expression] = 852;
	v->arr[38][sym_concatenation] = 1169;
	v->arr[38][sym_string] = 852;
	v->arr[38][sym_translated_string] = 852;
	v->arr[38][sym_number] = 852;
	v->arr[38][sym_simple_expansion] = 852;
	v->arr[38][sym_expansion] = 852;
	v->arr[38][sym_command_substitution] = 852;
	init_parse_table249(v);
}

void	init_parse_table249(t_parse_table *v)
{
	v->arr[38][sym_process_substitution] = 852;
	v->arr[38][aux_sym__statements_repeat1] = 426;
	v->arr[38][aux_sym_redirected_statement_repeat2] = 4371;
	v->arr[38][aux_sym_command_repeat1] = 989;
	v->arr[38][aux_sym__literal_repeat1] = 1026;
	v->arr[38][sym_word] = 665;
	v->arr[38][anon_sym_for] = 667;
	v->arr[38][anon_sym_select] = 669;
	v->arr[38][anon_sym_LPAREN_LPAREN] = 671;
	v->arr[38][anon_sym_LT] = 673;
	v->arr[38][anon_sym_GT] = 673;
	v->arr[38][anon_sym_GT_GT] = 675;
	v->arr[38][anon_sym_LPAREN] = 677;
	v->arr[38][anon_sym_while] = 679;
	v->arr[38][anon_sym_until] = 679;
	init_parse_table250(v);
}

// file funcs49.c
