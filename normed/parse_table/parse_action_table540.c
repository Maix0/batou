/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs540.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_parse_table2700(t_parse_table *v)
{
	v->arr[446][aux_sym_number_token2] = 326;
	v->arr[446][anon_sym_DOLLAR_LBRACE] = 328;
	v->arr[446][anon_sym_DOLLAR_LPAREN] = 330;
	v->arr[446][anon_sym_BQUOTE] = 332;
	v->arr[446][anon_sym_DOLLAR_BQUOTE] = 334;
	v->arr[446][anon_sym_LT_LPAREN] = 336;
	v->arr[446][anon_sym_GT_LPAREN] = 336;
	v->arr[446][sym_comment] = 71;
	v->arr[446][sym_file_descriptor] = 1019;
	v->arr[446][sym_variable_name] = 1021;
	v->arr[446][sym_test_operator] = 1023;
	v->arr[446][sym__brace_start] = 344;
	v->arr[447][sym__statement_not_pipeline] = 6568;
	v->arr[447][sym_redirected_statement] = 5421;
	v->arr[447][sym_for_statement] = 5421;
	init_parse_table2701(v);
}

void	init_parse_table2701(t_parse_table *v)
{
	v->arr[447][sym_c_style_for_statement] = 5421;
	v->arr[447][sym_while_statement] = 5184;
	v->arr[447][sym_if_statement] = 5184;
	v->arr[447][sym_case_statement] = 5421;
	v->arr[447][sym_function_definition] = 5421;
	v->arr[447][sym_compound_statement] = 5421;
	v->arr[447][sym_subshell] = 5421;
	v->arr[447][sym_pipeline] = 5419;
	v->arr[447][sym_list] = 5421;
	v->arr[447][sym_negated_command] = 5421;
	v->arr[447][sym_test_command] = 5421;
	v->arr[447][sym_declaration_command] = 5421;
	v->arr[447][sym_unset_command] = 5421;
	v->arr[447][sym_command] = 5421;
	v->arr[447][sym_command_name] = 620;
	init_parse_table2702(v);
}

void	init_parse_table2702(t_parse_table *v)
{
	v->arr[447][sym_variable_assignment] = 1882;
	v->arr[447][sym_variable_assignments] = 5421;
	v->arr[447][sym_subscript] = 6756;
	v->arr[447][sym_file_redirect] = 2780;
	v->arr[447][sym_herestring_redirect] = 2886;
	v->arr[447][sym_arithmetic_expansion] = 1799;
	v->arr[447][sym_brace_expression] = 1799;
	v->arr[447][sym_concatenation] = 2368;
	v->arr[447][sym_string] = 1799;
	v->arr[447][sym_translated_string] = 1799;
	v->arr[447][sym_number] = 1799;
	v->arr[447][sym_simple_expansion] = 1799;
	v->arr[447][sym_expansion] = 1799;
	v->arr[447][sym_command_substitution] = 1799;
	v->arr[447][sym_process_substitution] = 1799;
	init_parse_table2703(v);
}

void	init_parse_table2703(t_parse_table *v)
{
	v->arr[447][aux_sym_redirected_statement_repeat2] = 5362;
	v->arr[447][aux_sym_command_repeat1] = 955;
	v->arr[447][aux_sym__literal_repeat1] = 2332;
	v->arr[447][sym_word] = 1025;
	v->arr[447][anon_sym_for] = 145;
	v->arr[447][anon_sym_select] = 147;
	v->arr[447][anon_sym_LPAREN_LPAREN] = 1027;
	v->arr[447][anon_sym_LT] = 1029;
	v->arr[447][anon_sym_GT] = 1029;
	v->arr[447][anon_sym_GT_GT] = 1031;
	v->arr[447][anon_sym_LPAREN] = 1033;
	v->arr[447][anon_sym_while] = 157;
	v->arr[447][anon_sym_until] = 157;
	v->arr[447][anon_sym_if] = 159;
	v->arr[447][anon_sym_case] = 161;
	init_parse_table2704(v);
}

void	init_parse_table2704(t_parse_table *v)
{
	v->arr[447][anon_sym_function] = 163;
	v->arr[447][anon_sym_LBRACE] = 165;
	v->arr[447][anon_sym_BANG] = 1035;
	v->arr[447][anon_sym_LBRACK] = 169;
	v->arr[447][anon_sym_LBRACK_LBRACK] = 173;
	v->arr[447][anon_sym_declare] = 175;
	v->arr[447][anon_sym_typeset] = 175;
	v->arr[447][anon_sym_export] = 175;
	v->arr[447][anon_sym_readonly] = 175;
	v->arr[447][anon_sym_local] = 175;
	v->arr[447][anon_sym_unset] = 177;
	v->arr[447][anon_sym_unsetenv] = 177;
	v->arr[447][anon_sym_AMP_GT] = 1029;
	v->arr[447][anon_sym_AMP_GT_GT] = 1031;
	v->arr[447][anon_sym_LT_AMP] = 1029;
	init_parse_table2705(v);
}

// file funcs540.c
