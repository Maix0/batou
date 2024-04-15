/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs60.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_parse_table300(t_parse_table *v)
{
	v->arr[46][anon_sym_LBRACE] = 689;
	v->arr[46][anon_sym_BANG] = 691;
	v->arr[46][anon_sym_LBRACK] = 693;
	v->arr[46][anon_sym_LBRACK_LBRACK] = 695;
	v->arr[46][anon_sym_declare] = 697;
	v->arr[46][anon_sym_typeset] = 697;
	v->arr[46][anon_sym_export] = 697;
	v->arr[46][anon_sym_readonly] = 697;
	v->arr[46][anon_sym_local] = 697;
	v->arr[46][anon_sym_unset] = 699;
	v->arr[46][anon_sym_unsetenv] = 699;
	v->arr[46][anon_sym_AMP_GT] = 673;
	v->arr[46][anon_sym_AMP_GT_GT] = 675;
	v->arr[46][anon_sym_LT_AMP] = 673;
	v->arr[46][anon_sym_GT_AMP] = 673;
	init_parse_table301(v);
}

void	init_parse_table301(t_parse_table *v)
{
	v->arr[46][anon_sym_GT_PIPE] = 675;
	v->arr[46][anon_sym_LT_AMP_DASH] = 701;
	v->arr[46][anon_sym_GT_AMP_DASH] = 701;
	v->arr[46][anon_sym_LT_LT_LT] = 703;
	v->arr[46][anon_sym_DOLLAR_LPAREN_LPAREN] = 705;
	v->arr[46][anon_sym_DOLLAR_LBRACK] = 707;
	v->arr[46][anon_sym_DOLLAR] = 709;
	v->arr[46][sym__special_character] = 711;
	v->arr[46][anon_sym_DQUOTE] = 713;
	v->arr[46][sym_raw_string] = 715;
	v->arr[46][sym_ansi_c_string] = 715;
	v->arr[46][aux_sym_number_token1] = 717;
	v->arr[46][aux_sym_number_token2] = 719;
	v->arr[46][anon_sym_DOLLAR_LBRACE] = 721;
	v->arr[46][anon_sym_DOLLAR_LPAREN] = 723;
	init_parse_table302(v);
}

void	init_parse_table302(t_parse_table *v)
{
	v->arr[46][anon_sym_BQUOTE] = 725;
	v->arr[46][anon_sym_DOLLAR_BQUOTE] = 727;
	v->arr[46][anon_sym_LT_LPAREN] = 729;
	v->arr[46][anon_sym_GT_LPAREN] = 729;
	v->arr[46][sym_comment] = 71;
	v->arr[46][sym_file_descriptor] = 731;
	v->arr[46][sym_variable_name] = 733;
	v->arr[46][sym_test_operator] = 735;
	v->arr[46][sym__brace_start] = 737;
	v->arr[47][aux_sym__terminated_statement] = 34;
	v->arr[47][sym__statement_not_pipeline] = 6718;
	v->arr[47][sym_redirected_statement] = 5007;
	v->arr[47][sym_for_statement] = 5007;
	v->arr[47][sym_c_style_for_statement] = 5007;
	v->arr[47][sym_while_statement] = 4551;
	init_parse_table303(v);
}

void	init_parse_table303(t_parse_table *v)
{
	v->arr[47][sym_if_statement] = 4551;
	v->arr[47][sym_case_statement] = 5007;
	v->arr[47][sym_function_definition] = 5007;
	v->arr[47][sym_compound_statement] = 5007;
	v->arr[47][sym_subshell] = 5007;
	v->arr[47][sym_pipeline] = 5189;
	v->arr[47][sym_list] = 5007;
	v->arr[47][sym_negated_command] = 5007;
	v->arr[47][sym_test_command] = 5007;
	v->arr[47][sym_declaration_command] = 5007;
	v->arr[47][sym_unset_command] = 5007;
	v->arr[47][sym_command] = 5007;
	v->arr[47][sym_command_name] = 544;
	v->arr[47][sym_variable_assignment] = 1151;
	v->arr[47][sym_variable_assignments] = 5007;
	init_parse_table304(v);
}

void	init_parse_table304(t_parse_table *v)
{
	v->arr[47][sym_subscript] = 6790;
	v->arr[47][sym_file_redirect] = 2019;
	v->arr[47][sym_herestring_redirect] = 2017;
	v->arr[47][sym_arithmetic_expansion] = 1078;
	v->arr[47][sym_brace_expression] = 1078;
	v->arr[47][sym_concatenation] = 1376;
	v->arr[47][sym_string] = 1078;
	v->arr[47][sym_translated_string] = 1078;
	v->arr[47][sym_number] = 1078;
	v->arr[47][sym_simple_expansion] = 1078;
	v->arr[47][sym_expansion] = 1078;
	v->arr[47][sym_command_substitution] = 1078;
	v->arr[47][sym_process_substitution] = 1078;
	v->arr[47][aux_sym_redirected_statement_repeat2] = 4644;
	v->arr[47][aux_sym_command_repeat1] = 997;
	init_parse_table305(v);
}

// file funcs60.c
