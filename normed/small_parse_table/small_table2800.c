/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs2800.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table14000(t_small_table *v)
{
	v->arr[209999] = 9910;
	v->arr[210000] = 1;
	v->arr[210001] = anon_sym_DQUOTE;
	v->arr[210002] = 9912;
	v->arr[210003] = 1;
	v->arr[210004] = aux_sym_number_token1;
	v->arr[210005] = 9914;
	v->arr[210006] = 1;
	v->arr[210007] = aux_sym_number_token2;
	v->arr[210008] = 9916;
	v->arr[210009] = 1;
	v->arr[210010] = anon_sym_DOLLAR_LBRACE;
	v->arr[210011] = 9918;
	v->arr[210012] = 1;
	v->arr[210013] = anon_sym_DOLLAR_LPAREN;
	init_small_table14001(v);
}

void	init_small_table14001(t_small_table *v)
{
	v->arr[210014] = 9920;
	v->arr[210015] = 1;
	v->arr[210016] = anon_sym_BQUOTE;
	v->arr[210017] = 9922;
	v->arr[210018] = 1;
	v->arr[210019] = anon_sym_DOLLAR_BQUOTE;
	v->arr[210020] = 9924;
	v->arr[210021] = 1;
	v->arr[210022] = aux_sym__simple_variable_name_token1;
	v->arr[210023] = 3359;
	v->arr[210024] = 1;
	v->arr[210025] = sym__arithmetic_postfix_expression;
	v->arr[210026] = 3361;
	v->arr[210027] = 1;
	v->arr[210028] = sym__arithmetic_unary_expression;
	init_small_table14002(v);
}

void	init_small_table14002(t_small_table *v)
{
	v->arr[210029] = 3367;
	v->arr[210030] = 1;
	v->arr[210031] = sym__arithmetic_ternary_expression;
	v->arr[210032] = 3375;
	v->arr[210033] = 1;
	v->arr[210034] = sym__arithmetic_binary_expression;
	v->arr[210035] = 9902;
	v->arr[210036] = 2;
	v->arr[210037] = anon_sym_PLUS_PLUS2;
	v->arr[210038] = anon_sym_DASH_DASH2;
	v->arr[210039] = 9904;
	v->arr[210040] = 2;
	v->arr[210041] = anon_sym_DASH2;
	v->arr[210042] = anon_sym_PLUS2;
	v->arr[210043] = 3188;
	init_small_table14003(v);
}

void	init_small_table14003(t_small_table *v)
{
	v->arr[210044] = 9;
	v->arr[210045] = sym_subscript;
	v->arr[210046] = sym__arithmetic_expression;
	v->arr[210047] = sym__arithmetic_literal;
	v->arr[210048] = sym__arithmetic_parenthesized_expression;
	v->arr[210049] = sym_string;
	v->arr[210050] = sym_number;
	v->arr[210051] = sym_simple_expansion;
	v->arr[210052] = sym_expansion;
	v->arr[210053] = sym_command_substitution;
	v->arr[210055] = 20;
	v->arr[210055] = 71;
	v->arr[210056] = 1;
	v->arr[210057] = sym_comment;
	v->arr[210058] = 1414;
	init_small_table14004(v);
}

void	init_small_table14004(t_small_table *v)
{
	v->arr[210059] = 1;
	v->arr[210060] = anon_sym_DOLLAR;
	v->arr[210061] = 1420;
	v->arr[210062] = 1;
	v->arr[210063] = aux_sym_number_token1;
	v->arr[210064] = 1422;
	v->arr[210065] = 1;
	v->arr[210066] = aux_sym_number_token2;
	v->arr[210067] = 1426;
	v->arr[210068] = 1;
	v->arr[210069] = anon_sym_DOLLAR_LPAREN;
	v->arr[210070] = 1438;
	v->arr[210071] = 1;
	v->arr[210072] = sym__brace_start;
	v->arr[210073] = 9094;
	init_small_table14005(v);
}

// file funcs2800.c
