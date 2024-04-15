/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs38.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_parse_table190(t_parse_table *v)
{
	v->arr[28][anon_sym_BQUOTE] = 469;
	v->arr[28][anon_sym_DOLLAR_BQUOTE] = 471;
	v->arr[28][anon_sym_LT_LPAREN] = 473;
	v->arr[28][anon_sym_GT_LPAREN] = 473;
	v->arr[28][sym_comment] = 71;
	v->arr[28][sym_file_descriptor] = 475;
	v->arr[28][sym_variable_name] = 477;
	v->arr[28][sym_test_operator] = 479;
	v->arr[28][sym__brace_start] = 481;
	v->arr[29][sym__statements] = 6542;
	v->arr[29][sym__statement_not_pipeline] = 6584;
	v->arr[29][sym_redirected_statement] = 4349;
	v->arr[29][sym_for_statement] = 4349;
	v->arr[29][sym_c_style_for_statement] = 4349;
	v->arr[29][sym_while_statement] = 4225;
	init_parse_table191(v);
}

void	init_parse_table191(t_parse_table *v)
{
	v->arr[29][sym_if_statement] = 4225;
	v->arr[29][sym_case_statement] = 4349;
	v->arr[29][sym_function_definition] = 4349;
	v->arr[29][sym_compound_statement] = 4349;
	v->arr[29][sym_subshell] = 4349;
	v->arr[29][sym_pipeline] = 4620;
	v->arr[29][sym_list] = 4349;
	v->arr[29][sym_negated_command] = 4349;
	v->arr[29][sym_test_command] = 4349;
	v->arr[29][sym_declaration_command] = 4349;
	v->arr[29][sym_unset_command] = 4349;
	v->arr[29][sym_command] = 4349;
	v->arr[29][sym_command_name] = 528;
	v->arr[29][sym_variable_assignment] = 807;
	v->arr[29][sym_variable_assignments] = 4349;
	init_parse_table192(v);
}

void	init_parse_table192(t_parse_table *v)
{
	v->arr[29][sym_subscript] = 6736;
	v->arr[29][sym_file_redirect] = 1635;
	v->arr[29][sym_herestring_redirect] = 1634;
	v->arr[29][sym_arithmetic_expansion] = 815;
	v->arr[29][sym_brace_expression] = 815;
	v->arr[29][sym_concatenation] = 1082;
	v->arr[29][sym_string] = 815;
	v->arr[29][sym_translated_string] = 815;
	v->arr[29][sym_number] = 815;
	v->arr[29][sym_simple_expansion] = 815;
	v->arr[29][sym_expansion] = 815;
	v->arr[29][sym_command_substitution] = 815;
	v->arr[29][sym_process_substitution] = 815;
	v->arr[29][aux_sym__statements_repeat1] = 431;
	v->arr[29][aux_sym_redirected_statement_repeat2] = 4250;
	init_parse_table193(v);
}

void	init_parse_table193(t_parse_table *v)
{
	v->arr[29][aux_sym_command_repeat1] = 925;
	v->arr[29][aux_sym__literal_repeat1] = 926;
	v->arr[29][sym_word] = 403;
	v->arr[29][anon_sym_for] = 405;
	v->arr[29][anon_sym_select] = 407;
	v->arr[29][anon_sym_LPAREN_LPAREN] = 409;
	v->arr[29][anon_sym_LT] = 411;
	v->arr[29][anon_sym_GT] = 411;
	v->arr[29][anon_sym_GT_GT] = 413;
	v->arr[29][anon_sym_LPAREN] = 415;
	v->arr[29][anon_sym_while] = 417;
	v->arr[29][anon_sym_until] = 417;
	v->arr[29][anon_sym_if] = 419;
	v->arr[29][anon_sym_case] = 421;
	v->arr[29][anon_sym_esac] = 503;
	init_parse_table194(v);
}

void	init_parse_table194(t_parse_table *v)
{
	v->arr[29][anon_sym_SEMI_SEMI] = 525;
	v->arr[29][anon_sym_SEMI_AMP] = 527;
	v->arr[29][anon_sym_SEMI_SEMI_AMP] = 529;
	v->arr[29][anon_sym_function] = 431;
	v->arr[29][anon_sym_LBRACE] = 433;
	v->arr[29][anon_sym_BANG] = 435;
	v->arr[29][anon_sym_LBRACK] = 437;
	v->arr[29][anon_sym_LBRACK_LBRACK] = 439;
	v->arr[29][anon_sym_declare] = 441;
	v->arr[29][anon_sym_typeset] = 441;
	v->arr[29][anon_sym_export] = 441;
	v->arr[29][anon_sym_readonly] = 441;
	v->arr[29][anon_sym_local] = 441;
	v->arr[29][anon_sym_unset] = 443;
	v->arr[29][anon_sym_unsetenv] = 443;
	init_parse_table195(v);
}

// file funcs38.c
