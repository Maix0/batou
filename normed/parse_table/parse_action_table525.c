/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs525.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_parse_table2625(t_parse_table *v)
{
	v->arr[434][sym_function_definition] = 5381;
	v->arr[434][sym_compound_statement] = 5381;
	v->arr[434][sym_subshell] = 5381;
	v->arr[434][sym_pipeline] = 5533;
	v->arr[434][sym_list] = 5381;
	v->arr[434][sym_negated_command] = 5381;
	v->arr[434][sym_test_command] = 5381;
	v->arr[434][sym_declaration_command] = 5381;
	v->arr[434][sym_unset_command] = 5381;
	v->arr[434][sym_command] = 5381;
	v->arr[434][sym_command_name] = 596;
	v->arr[434][sym_variable_assignment] = 1706;
	v->arr[434][sym_variable_assignments] = 5381;
	v->arr[434][sym_subscript] = 6759;
	v->arr[434][sym_file_redirect] = 2019;
	init_parse_table2626(v);
}

void	init_parse_table2626(t_parse_table *v)
{
	v->arr[434][sym_herestring_redirect] = 2017;
	v->arr[434][sym_arithmetic_expansion] = 1717;
	v->arr[434][sym_brace_expression] = 1717;
	v->arr[434][sym_concatenation] = 1376;
	v->arr[434][sym_string] = 1717;
	v->arr[434][sym_translated_string] = 1717;
	v->arr[434][sym_number] = 1717;
	v->arr[434][sym_simple_expansion] = 1717;
	v->arr[434][sym_expansion] = 1717;
	v->arr[434][sym_command_substitution] = 1717;
	v->arr[434][sym_process_substitution] = 1717;
	v->arr[434][aux_sym_redirected_statement_repeat2] = 5176;
	v->arr[434][aux_sym_command_repeat1] = 933;
	v->arr[434][aux_sym__literal_repeat1] = 1267;
	v->arr[434][sym_word] = 997;
	init_parse_table2627(v);
}

void	init_parse_table2627(t_parse_table *v)
{
	v->arr[434][anon_sym_for] = 9;
	v->arr[434][anon_sym_select] = 11;
	v->arr[434][anon_sym_LPAREN_LPAREN] = 288;
	v->arr[434][anon_sym_LT] = 999;
	v->arr[434][anon_sym_GT] = 999;
	v->arr[434][anon_sym_GT_GT] = 1001;
	v->arr[434][anon_sym_LPAREN] = 19;
	v->arr[434][anon_sym_while] = 21;
	v->arr[434][anon_sym_until] = 21;
	v->arr[434][anon_sym_if] = 23;
	v->arr[434][anon_sym_case] = 25;
	v->arr[434][anon_sym_function] = 1003;
	v->arr[434][anon_sym_LBRACE] = 29;
	v->arr[434][anon_sym_BANG] = 1005;
	v->arr[434][anon_sym_LBRACK] = 33;
	init_parse_table2628(v);
}

void	init_parse_table2628(t_parse_table *v)
{
	v->arr[434][anon_sym_LBRACK_LBRACK] = 35;
	v->arr[434][anon_sym_declare] = 1007;
	v->arr[434][anon_sym_typeset] = 1007;
	v->arr[434][anon_sym_export] = 1007;
	v->arr[434][anon_sym_readonly] = 1007;
	v->arr[434][anon_sym_local] = 1007;
	v->arr[434][anon_sym_unset] = 1009;
	v->arr[434][anon_sym_unsetenv] = 1009;
	v->arr[434][anon_sym_AMP_GT] = 999;
	v->arr[434][anon_sym_AMP_GT_GT] = 1001;
	v->arr[434][anon_sym_LT_AMP] = 999;
	v->arr[434][anon_sym_GT_AMP] = 999;
	v->arr[434][anon_sym_GT_PIPE] = 1001;
	v->arr[434][anon_sym_LT_AMP_DASH] = 1011;
	v->arr[434][anon_sym_GT_AMP_DASH] = 1011;
	init_parse_table2629(v);
}

void	init_parse_table2629(t_parse_table *v)
{
	v->arr[434][anon_sym_LT_LT_LT] = 1013;
	v->arr[434][anon_sym_DOLLAR_LPAREN_LPAREN] = 312;
	v->arr[434][anon_sym_DOLLAR_LBRACK] = 314;
	v->arr[434][anon_sym_DOLLAR] = 316;
	v->arr[434][sym__special_character] = 1015;
	v->arr[434][anon_sym_DQUOTE] = 320;
	v->arr[434][sym_raw_string] = 1017;
	v->arr[434][sym_ansi_c_string] = 1017;
	v->arr[434][aux_sym_number_token1] = 324;
	v->arr[434][aux_sym_number_token2] = 326;
	v->arr[434][anon_sym_DOLLAR_LBRACE] = 328;
	v->arr[434][anon_sym_DOLLAR_LPAREN] = 330;
	v->arr[434][anon_sym_BQUOTE] = 332;
	v->arr[434][anon_sym_DOLLAR_BQUOTE] = 334;
	v->arr[434][anon_sym_LT_LPAREN] = 336;
	init_parse_table2630(v);
}

// file funcs525.c
