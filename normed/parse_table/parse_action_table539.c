/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs539.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_parse_table2695(t_parse_table *v)
{
	v->arr[446][sym_redirected_statement] = 4794;
	v->arr[446][sym_for_statement] = 4794;
	v->arr[446][sym_c_style_for_statement] = 4794;
	v->arr[446][sym_while_statement] = 5058;
	v->arr[446][sym_if_statement] = 5058;
	v->arr[446][sym_case_statement] = 4794;
	v->arr[446][sym_function_definition] = 4794;
	v->arr[446][sym_compound_statement] = 4794;
	v->arr[446][sym_subshell] = 4794;
	v->arr[446][sym_pipeline] = 5559;
	v->arr[446][sym_list] = 4794;
	v->arr[446][sym_negated_command] = 4794;
	v->arr[446][sym_test_command] = 4794;
	v->arr[446][sym_declaration_command] = 4794;
	v->arr[446][sym_unset_command] = 4794;
	init_parse_table2696(v);
}

void	init_parse_table2696(t_parse_table *v)
{
	v->arr[446][sym_command] = 4794;
	v->arr[446][sym_command_name] = 596;
	v->arr[446][sym_variable_assignment] = 1627;
	v->arr[446][sym_variable_assignments] = 4794;
	v->arr[446][sym_subscript] = 6759;
	v->arr[446][sym_file_redirect] = 2019;
	v->arr[446][sym_herestring_redirect] = 2017;
	v->arr[446][sym_arithmetic_expansion] = 1717;
	v->arr[446][sym_brace_expression] = 1717;
	v->arr[446][sym_concatenation] = 1376;
	v->arr[446][sym_string] = 1717;
	v->arr[446][sym_translated_string] = 1717;
	v->arr[446][sym_number] = 1717;
	v->arr[446][sym_simple_expansion] = 1717;
	v->arr[446][sym_expansion] = 1717;
	init_parse_table2697(v);
}

void	init_parse_table2697(t_parse_table *v)
{
	v->arr[446][sym_command_substitution] = 1717;
	v->arr[446][sym_process_substitution] = 1717;
	v->arr[446][aux_sym_redirected_statement_repeat2] = 5176;
	v->arr[446][aux_sym_command_repeat1] = 933;
	v->arr[446][aux_sym__literal_repeat1] = 1267;
	v->arr[446][sym_word] = 997;
	v->arr[446][anon_sym_for] = 9;
	v->arr[446][anon_sym_select] = 11;
	v->arr[446][anon_sym_LPAREN_LPAREN] = 288;
	v->arr[446][anon_sym_LT] = 999;
	v->arr[446][anon_sym_GT] = 999;
	v->arr[446][anon_sym_GT_GT] = 1001;
	v->arr[446][anon_sym_LPAREN] = 19;
	v->arr[446][anon_sym_while] = 21;
	v->arr[446][anon_sym_until] = 21;
	init_parse_table2698(v);
}

void	init_parse_table2698(t_parse_table *v)
{
	v->arr[446][anon_sym_if] = 23;
	v->arr[446][anon_sym_case] = 25;
	v->arr[446][anon_sym_function] = 1003;
	v->arr[446][anon_sym_LBRACE] = 29;
	v->arr[446][anon_sym_BANG] = 1005;
	v->arr[446][anon_sym_LBRACK] = 33;
	v->arr[446][anon_sym_LBRACK_LBRACK] = 35;
	v->arr[446][anon_sym_declare] = 1007;
	v->arr[446][anon_sym_typeset] = 1007;
	v->arr[446][anon_sym_export] = 1007;
	v->arr[446][anon_sym_readonly] = 1007;
	v->arr[446][anon_sym_local] = 1007;
	v->arr[446][anon_sym_unset] = 1009;
	v->arr[446][anon_sym_unsetenv] = 1009;
	v->arr[446][anon_sym_AMP_GT] = 999;
	init_parse_table2699(v);
}

void	init_parse_table2699(t_parse_table *v)
{
	v->arr[446][anon_sym_AMP_GT_GT] = 1001;
	v->arr[446][anon_sym_LT_AMP] = 999;
	v->arr[446][anon_sym_GT_AMP] = 999;
	v->arr[446][anon_sym_GT_PIPE] = 1001;
	v->arr[446][anon_sym_LT_AMP_DASH] = 1011;
	v->arr[446][anon_sym_GT_AMP_DASH] = 1011;
	v->arr[446][anon_sym_LT_LT_LT] = 1013;
	v->arr[446][anon_sym_DOLLAR_LPAREN_LPAREN] = 312;
	v->arr[446][anon_sym_DOLLAR_LBRACK] = 314;
	v->arr[446][anon_sym_DOLLAR] = 316;
	v->arr[446][sym__special_character] = 1015;
	v->arr[446][anon_sym_DQUOTE] = 320;
	v->arr[446][sym_raw_string] = 1017;
	v->arr[446][sym_ansi_c_string] = 1017;
	v->arr[446][aux_sym_number_token1] = 324;
	init_parse_table2700(v);
}

// file funcs539.c
