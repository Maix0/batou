/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs537.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_parse_table2685(t_parse_table *v)
{
	v->arr[444][sym_translated_string] = 1078;
	v->arr[444][sym_number] = 1078;
	v->arr[444][sym_simple_expansion] = 1078;
	v->arr[444][sym_expansion] = 1078;
	v->arr[444][sym_command_substitution] = 1078;
	v->arr[444][sym_process_substitution] = 1078;
	v->arr[444][aux_sym_redirected_statement_repeat2] = 4644;
	v->arr[444][aux_sym_command_repeat1] = 997;
	v->arr[444][aux_sym__literal_repeat1] = 1267;
	v->arr[444][sym_word] = 286;
	v->arr[444][anon_sym_for] = 9;
	v->arr[444][anon_sym_select] = 11;
	v->arr[444][anon_sym_LPAREN_LPAREN] = 288;
	v->arr[444][anon_sym_LT] = 290;
	v->arr[444][anon_sym_GT] = 290;
	init_parse_table2686(v);
}

void	init_parse_table2686(t_parse_table *v)
{
	v->arr[444][anon_sym_GT_GT] = 292;
	v->arr[444][anon_sym_LPAREN] = 19;
	v->arr[444][anon_sym_while] = 21;
	v->arr[444][anon_sym_until] = 21;
	v->arr[444][anon_sym_if] = 23;
	v->arr[444][anon_sym_case] = 25;
	v->arr[444][anon_sym_function] = 300;
	v->arr[444][anon_sym_LBRACE] = 29;
	v->arr[444][anon_sym_BANG] = 302;
	v->arr[444][anon_sym_LBRACK] = 33;
	v->arr[444][anon_sym_LBRACK_LBRACK] = 35;
	v->arr[444][anon_sym_declare] = 304;
	v->arr[444][anon_sym_typeset] = 304;
	v->arr[444][anon_sym_export] = 304;
	v->arr[444][anon_sym_readonly] = 304;
	init_parse_table2687(v);
}

void	init_parse_table2687(t_parse_table *v)
{
	v->arr[444][anon_sym_local] = 304;
	v->arr[444][anon_sym_unset] = 306;
	v->arr[444][anon_sym_unsetenv] = 306;
	v->arr[444][anon_sym_AMP_GT] = 290;
	v->arr[444][anon_sym_AMP_GT_GT] = 292;
	v->arr[444][anon_sym_LT_AMP] = 290;
	v->arr[444][anon_sym_GT_AMP] = 290;
	v->arr[444][anon_sym_GT_PIPE] = 292;
	v->arr[444][anon_sym_LT_AMP_DASH] = 308;
	v->arr[444][anon_sym_GT_AMP_DASH] = 308;
	v->arr[444][anon_sym_LT_LT_LT] = 310;
	v->arr[444][anon_sym_DOLLAR_LPAREN_LPAREN] = 312;
	v->arr[444][anon_sym_DOLLAR_LBRACK] = 314;
	v->arr[444][anon_sym_DOLLAR] = 316;
	v->arr[444][sym__special_character] = 318;
	init_parse_table2688(v);
}

void	init_parse_table2688(t_parse_table *v)
{
	v->arr[444][anon_sym_DQUOTE] = 320;
	v->arr[444][sym_raw_string] = 322;
	v->arr[444][sym_ansi_c_string] = 322;
	v->arr[444][aux_sym_number_token1] = 324;
	v->arr[444][aux_sym_number_token2] = 326;
	v->arr[444][anon_sym_DOLLAR_LBRACE] = 328;
	v->arr[444][anon_sym_DOLLAR_LPAREN] = 330;
	v->arr[444][anon_sym_BQUOTE] = 332;
	v->arr[444][anon_sym_DOLLAR_BQUOTE] = 334;
	v->arr[444][anon_sym_LT_LPAREN] = 336;
	v->arr[444][anon_sym_GT_LPAREN] = 336;
	v->arr[444][sym_comment] = 71;
	v->arr[444][sym_file_descriptor] = 338;
	v->arr[444][sym_variable_name] = 340;
	v->arr[444][sym_test_operator] = 342;
	init_parse_table2689(v);
}

void	init_parse_table2689(t_parse_table *v)
{
	v->arr[444][sym__brace_start] = 344;
	v->arr[445][sym__statement_not_pipeline] = 6566;
	v->arr[445][sym_redirected_statement] = 5368;
	v->arr[445][sym_for_statement] = 5368;
	v->arr[445][sym_c_style_for_statement] = 5368;
	v->arr[445][sym_while_statement] = 5056;
	v->arr[445][sym_if_statement] = 5056;
	v->arr[445][sym_case_statement] = 5368;
	v->arr[445][sym_function_definition] = 5368;
	v->arr[445][sym_compound_statement] = 5368;
	v->arr[445][sym_subshell] = 5368;
	v->arr[445][sym_pipeline] = 5369;
	v->arr[445][sym_list] = 5368;
	v->arr[445][sym_negated_command] = 5368;
	v->arr[445][sym_test_command] = 5368;
	init_parse_table2690(v);
}

// file funcs537.c
