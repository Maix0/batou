/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs542.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_parse_table2710(t_parse_table *v)
{
	v->arr[448][anon_sym_BANG] = 31;
	v->arr[448][anon_sym_LBRACK] = 33;
	v->arr[448][anon_sym_LBRACK_LBRACK] = 35;
	v->arr[448][anon_sym_declare] = 37;
	v->arr[448][anon_sym_typeset] = 37;
	v->arr[448][anon_sym_export] = 37;
	v->arr[448][anon_sym_readonly] = 37;
	v->arr[448][anon_sym_local] = 37;
	v->arr[448][anon_sym_unset] = 39;
	v->arr[448][anon_sym_unsetenv] = 39;
	v->arr[448][anon_sym_AMP_GT] = 15;
	v->arr[448][anon_sym_AMP_GT_GT] = 17;
	v->arr[448][anon_sym_LT_AMP] = 15;
	v->arr[448][anon_sym_GT_AMP] = 15;
	v->arr[448][anon_sym_GT_PIPE] = 17;
	init_parse_table2711(v);
}

void	init_parse_table2711(t_parse_table *v)
{
	v->arr[448][anon_sym_LT_AMP_DASH] = 41;
	v->arr[448][anon_sym_GT_AMP_DASH] = 41;
	v->arr[448][anon_sym_LT_LT_LT] = 43;
	v->arr[448][anon_sym_DOLLAR_LPAREN_LPAREN] = 45;
	v->arr[448][anon_sym_DOLLAR_LBRACK] = 47;
	v->arr[448][anon_sym_DOLLAR] = 49;
	v->arr[448][sym__special_character] = 51;
	v->arr[448][anon_sym_DQUOTE] = 53;
	v->arr[448][sym_raw_string] = 55;
	v->arr[448][sym_ansi_c_string] = 55;
	v->arr[448][aux_sym_number_token1] = 57;
	v->arr[448][aux_sym_number_token2] = 59;
	v->arr[448][anon_sym_DOLLAR_LBRACE] = 61;
	v->arr[448][anon_sym_DOLLAR_LPAREN] = 63;
	v->arr[448][anon_sym_BQUOTE] = 65;
	init_parse_table2712(v);
}

void	init_parse_table2712(t_parse_table *v)
{
	v->arr[448][anon_sym_DOLLAR_BQUOTE] = 67;
	v->arr[448][anon_sym_LT_LPAREN] = 69;
	v->arr[448][anon_sym_GT_LPAREN] = 69;
	v->arr[448][sym_comment] = 71;
	v->arr[448][sym_file_descriptor] = 73;
	v->arr[448][sym_variable_name] = 75;
	v->arr[448][sym_test_operator] = 77;
	v->arr[448][sym__brace_start] = 79;
	v->arr[449][sym__statement_not_pipeline] = 6558;
	v->arr[449][sym_redirected_statement] = 4722;
	v->arr[449][sym_for_statement] = 4722;
	v->arr[449][sym_c_style_for_statement] = 4722;
	v->arr[449][sym_while_statement] = 4289;
	v->arr[449][sym_if_statement] = 4289;
	v->arr[449][sym_case_statement] = 4722;
	init_parse_table2713(v);
}

void	init_parse_table2713(t_parse_table *v)
{
	v->arr[449][sym_function_definition] = 4722;
	v->arr[449][sym_compound_statement] = 4722;
	v->arr[449][sym_subshell] = 4722;
	v->arr[449][sym_pipeline] = 4724;
	v->arr[449][sym_list] = 4722;
	v->arr[449][sym_negated_command] = 4722;
	v->arr[449][sym_test_command] = 4722;
	v->arr[449][sym_declaration_command] = 4722;
	v->arr[449][sym_unset_command] = 4722;
	v->arr[449][sym_command] = 4722;
	v->arr[449][sym_command_name] = 554;
	v->arr[449][sym_variable_assignment] = 1059;
	v->arr[449][sym_variable_assignments] = 4722;
	v->arr[449][sym_subscript] = 6790;
	v->arr[449][sym_file_redirect] = 2273;
	init_parse_table2714(v);
}

void	init_parse_table2714(t_parse_table *v)
{
	v->arr[449][sym_herestring_redirect] = 2272;
	v->arr[449][sym_arithmetic_expansion] = 1078;
	v->arr[449][sym_brace_expression] = 1078;
	v->arr[449][sym_concatenation] = 1376;
	v->arr[449][sym_string] = 1078;
	v->arr[449][sym_translated_string] = 1078;
	v->arr[449][sym_number] = 1078;
	v->arr[449][sym_simple_expansion] = 1078;
	v->arr[449][sym_expansion] = 1078;
	v->arr[449][sym_command_substitution] = 1078;
	v->arr[449][sym_process_substitution] = 1078;
	v->arr[449][aux_sym_redirected_statement_repeat2] = 4573;
	v->arr[449][aux_sym_command_repeat1] = 958;
	v->arr[449][aux_sym__literal_repeat1] = 1267;
	v->arr[449][sym_word] = 799;
	init_parse_table2715(v);
}

// file funcs542.c
