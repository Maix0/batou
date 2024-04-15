/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs6.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_parse_table30(t_parse_table *v)
{
	v->arr[4][sym_for_statement] = 5406;
	v->arr[4][sym_c_style_for_statement] = 5406;
	v->arr[4][sym_while_statement] = 5195;
	v->arr[4][sym_if_statement] = 5195;
	v->arr[4][sym_case_statement] = 5406;
	v->arr[4][sym_function_definition] = 5406;
	v->arr[4][sym_compound_statement] = 5406;
	v->arr[4][sym_subshell] = 5406;
	v->arr[4][sym_pipeline] = 5569;
	v->arr[4][sym_list] = 5406;
	v->arr[4][sym_negated_command] = 5406;
	v->arr[4][sym_test_command] = 5406;
	v->arr[4][sym_declaration_command] = 5406;
	v->arr[4][sym_unset_command] = 5406;
	v->arr[4][sym_command] = 5406;
	init_parse_table31(v);
}

void	init_parse_table31(t_parse_table *v)
{
	v->arr[4][sym_command_name] = 620;
	v->arr[4][sym_variable_assignment] = 1811;
	v->arr[4][sym_variable_assignments] = 5406;
	v->arr[4][sym_subscript] = 6756;
	v->arr[4][sym_file_redirect] = 2693;
	v->arr[4][sym_herestring_redirect] = 2691;
	v->arr[4][sym__expression] = 3131;
	v->arr[4][sym_binary_expression] = 3071;
	v->arr[4][sym_ternary_expression] = 3071;
	v->arr[4][sym_unary_expression] = 3071;
	v->arr[4][sym_postfix_expression] = 3071;
	v->arr[4][sym_parenthesized_expression] = 3071;
	v->arr[4][sym_arithmetic_expansion] = 496;
	v->arr[4][sym_brace_expression] = 496;
	v->arr[4][sym_concatenation] = 524;
	init_parse_table32(v);
}

void	init_parse_table32(t_parse_table *v)
{
	v->arr[4][sym_string] = 496;
	v->arr[4][sym_translated_string] = 496;
	v->arr[4][sym_number] = 496;
	v->arr[4][sym_simple_expansion] = 496;
	v->arr[4][sym_expansion] = 496;
	v->arr[4][sym_command_substitution] = 496;
	v->arr[4][sym_process_substitution] = 496;
	v->arr[4][aux_sym_redirected_statement_repeat2] = 5167;
	v->arr[4][aux_sym_command_repeat1] = 955;
	v->arr[4][aux_sym__literal_repeat1] = 522;
	v->arr[4][sym_word] = 143;
	v->arr[4][anon_sym_for] = 145;
	v->arr[4][anon_sym_select] = 147;
	v->arr[4][anon_sym_LPAREN_LPAREN] = 149;
	v->arr[4][anon_sym_LT] = 151;
	init_parse_table33(v);
}

void	init_parse_table33(t_parse_table *v)
{
	v->arr[4][anon_sym_GT] = 151;
	v->arr[4][anon_sym_GT_GT] = 153;
	v->arr[4][anon_sym_LPAREN] = 155;
	v->arr[4][anon_sym_while] = 157;
	v->arr[4][anon_sym_until] = 157;
	v->arr[4][anon_sym_if] = 159;
	v->arr[4][anon_sym_case] = 161;
	v->arr[4][anon_sym_function] = 163;
	v->arr[4][anon_sym_LBRACE] = 165;
	v->arr[4][anon_sym_BANG] = 167;
	v->arr[4][anon_sym_LBRACK] = 169;
	v->arr[4][anon_sym_RBRACK] = 171;
	v->arr[4][anon_sym_LBRACK_LBRACK] = 173;
	v->arr[4][anon_sym_declare] = 175;
	v->arr[4][anon_sym_typeset] = 175;
	init_parse_table34(v);
}

void	init_parse_table34(t_parse_table *v)
{
	v->arr[4][anon_sym_export] = 175;
	v->arr[4][anon_sym_readonly] = 175;
	v->arr[4][anon_sym_local] = 175;
	v->arr[4][anon_sym_unset] = 177;
	v->arr[4][anon_sym_unsetenv] = 177;
	v->arr[4][anon_sym_AMP_GT] = 151;
	v->arr[4][anon_sym_AMP_GT_GT] = 153;
	v->arr[4][anon_sym_LT_AMP] = 151;
	v->arr[4][anon_sym_GT_AMP] = 151;
	v->arr[4][anon_sym_GT_PIPE] = 153;
	v->arr[4][anon_sym_LT_AMP_DASH] = 179;
	v->arr[4][anon_sym_GT_AMP_DASH] = 179;
	v->arr[4][anon_sym_LT_LT_LT] = 181;
	v->arr[4][anon_sym_PLUS_PLUS2] = 183;
	v->arr[4][anon_sym_DASH_DASH2] = 183;
	init_parse_table35(v);
}

// file funcs6.c
