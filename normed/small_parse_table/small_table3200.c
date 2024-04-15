/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs3200.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table16000(t_small_table *v)
{
	v->arr[239999] = 1;
	v->arr[240000] = anon_sym_LPAREN;
	v->arr[240001] = 11252;
	v->arr[240002] = 1;
	v->arr[240003] = aux_sym__c_word_token1;
	v->arr[240004] = 11254;
	v->arr[240005] = 1;
	v->arr[240006] = aux_sym_heredoc_redirect_token1;
	v->arr[240007] = 11256;
	v->arr[240008] = 1;
	v->arr[240009] = anon_sym_DOLLAR;
	v->arr[240010] = 11258;
	v->arr[240011] = 1;
	v->arr[240012] = anon_sym_DQUOTE;
	v->arr[240013] = 11260;
	init_small_table16001(v);
}

void	init_small_table16001(t_small_table *v)
{
	v->arr[240014] = 1;
	v->arr[240015] = aux_sym_number_token1;
	v->arr[240016] = 11262;
	v->arr[240017] = 1;
	v->arr[240018] = aux_sym_number_token2;
	v->arr[240019] = 11264;
	v->arr[240020] = 1;
	v->arr[240021] = anon_sym_DOLLAR_LBRACE;
	v->arr[240022] = 11266;
	v->arr[240023] = 1;
	v->arr[240024] = anon_sym_DOLLAR_LPAREN;
	v->arr[240025] = 11268;
	v->arr[240026] = 1;
	v->arr[240027] = anon_sym_BQUOTE;
	v->arr[240028] = 11270;
	init_small_table16002(v);
}

void	init_small_table16002(t_small_table *v)
{
	v->arr[240029] = 1;
	v->arr[240030] = anon_sym_DOLLAR_BQUOTE;
	v->arr[240031] = 3113;
	v->arr[240032] = 1;
	v->arr[240033] = sym__c_postfix_expression;
	v->arr[240034] = 3116;
	v->arr[240035] = 1;
	v->arr[240036] = sym__c_binary_expression;
	v->arr[240037] = 3118;
	v->arr[240038] = 1;
	v->arr[240039] = sym__c_unary_expression;
	v->arr[240040] = 4243;
	v->arr[240041] = 1;
	v->arr[240042] = sym__c_terminator;
	v->arr[240043] = 6365;
	init_small_table16003(v);
}

void	init_small_table16003(t_small_table *v)
{
	v->arr[240044] = 1;
	v->arr[240045] = sym__c_expression;
	v->arr[240046] = 6493;
	v->arr[240047] = 1;
	v->arr[240048] = sym__c_variable_assignment;
	v->arr[240049] = 7326;
	v->arr[240050] = 1;
	v->arr[240051] = sym__for_body;
	v->arr[240052] = 11246;
	v->arr[240053] = 2;
	v->arr[240054] = anon_sym_SEMI;
	v->arr[240055] = anon_sym_AMP;
	v->arr[240056] = 11248;
	v->arr[240057] = 2;
	v->arr[240058] = anon_sym_PLUS_PLUS;
	init_small_table16004(v);
}

void	init_small_table16004(t_small_table *v)
{
	v->arr[240059] = anon_sym_DASH_DASH;
	v->arr[240060] = 3119;
	v->arr[240061] = 7;
	v->arr[240062] = sym__c_expression_not_assignment;
	v->arr[240063] = sym__c_parenthesized_expression;
	v->arr[240064] = sym_string;
	v->arr[240065] = sym_number;
	v->arr[240066] = sym_simple_expansion;
	v->arr[240067] = sym_expansion;
	v->arr[240068] = sym_command_substitution;
	v->arr[240070] = 6;
	v->arr[240070] = 3;
	v->arr[240071] = 1;
	v->arr[240072] = sym_comment;
	v->arr[240073] = 11284;
	init_small_table16005(v);
}

// file funcs3200.c
