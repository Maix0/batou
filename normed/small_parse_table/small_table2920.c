/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs2920.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table14600(t_small_table *v)
{
	v->arr[218999] = sym_string;
	v->arr[219000] = sym_translated_string;
	v->arr[219001] = sym_number;
	v->arr[219002] = sym_simple_expansion;
	v->arr[219003] = sym_expansion;
	v->arr[219004] = sym_command_substitution;
	v->arr[219005] = sym_process_substitution;
	v->arr[219007] = 18;
	v->arr[219007] = 3;
	v->arr[219008] = 1;
	v->arr[219009] = sym_comment;
	v->arr[219010] = 258;
	v->arr[219011] = 1;
	v->arr[219012] = anon_sym_DOLLAR;
	v->arr[219013] = 264;
	init_small_table14601(v);
}

void	init_small_table14601(t_small_table *v)
{
	v->arr[219014] = 1;
	v->arr[219015] = aux_sym_number_token1;
	v->arr[219016] = 266;
	v->arr[219017] = 1;
	v->arr[219018] = aux_sym_number_token2;
	v->arr[219019] = 270;
	v->arr[219020] = 1;
	v->arr[219021] = anon_sym_DOLLAR_LPAREN;
	v->arr[219022] = 284;
	v->arr[219023] = 1;
	v->arr[219024] = sym__brace_start;
	v->arr[219025] = 1075;
	v->arr[219026] = 1;
	v->arr[219027] = anon_sym_DOLLAR_LBRACK;
	v->arr[219028] = 1081;
	init_small_table14602(v);
}

void	init_small_table14602(t_small_table *v)
{
	v->arr[219029] = 1;
	v->arr[219030] = anon_sym_DQUOTE;
	v->arr[219031] = 1085;
	v->arr[219032] = 1;
	v->arr[219033] = anon_sym_DOLLAR_LBRACE;
	v->arr[219034] = 1087;
	v->arr[219035] = 1;
	v->arr[219036] = anon_sym_DOLLAR_BQUOTE;
	v->arr[219037] = 3598;
	v->arr[219038] = 1;
	v->arr[219039] = anon_sym_BQUOTE;
	v->arr[219040] = 10428;
	v->arr[219041] = 1;
	v->arr[219042] = sym_word;
	v->arr[219043] = 10434;
	init_small_table14603(v);
}

void	init_small_table14603(t_small_table *v)
{
	v->arr[219044] = 1;
	v->arr[219045] = sym__comment_word;
	v->arr[219046] = 1073;
	v->arr[219047] = 2;
	v->arr[219048] = anon_sym_LPAREN_LPAREN;
	v->arr[219049] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->arr[219050] = 1089;
	v->arr[219051] = 2;
	v->arr[219052] = anon_sym_LT_LPAREN;
	v->arr[219053] = anon_sym_GT_LPAREN;
	v->arr[219054] = 10430;
	v->arr[219055] = 2;
	v->arr[219056] = sym_test_operator;
	v->arr[219057] = sym__special_character;
	v->arr[219058] = 10432;
	init_small_table14604(v);
}

void	init_small_table14604(t_small_table *v)
{
	v->arr[219059] = 3;
	v->arr[219060] = sym__bare_dollar;
	v->arr[219061] = sym_raw_string;
	v->arr[219062] = sym_ansi_c_string;
	v->arr[219063] = 2732;
	v->arr[219064] = 9;
	v->arr[219065] = sym_arithmetic_expansion;
	v->arr[219066] = sym_brace_expression;
	v->arr[219067] = sym_string;
	v->arr[219068] = sym_translated_string;
	v->arr[219069] = sym_number;
	v->arr[219070] = sym_simple_expansion;
	v->arr[219071] = sym_expansion;
	v->arr[219072] = sym_command_substitution;
	v->arr[219073] = sym_process_substitution;
	init_small_table14605(v);
}

// file funcs2920.c
