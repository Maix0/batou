/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs2600.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table13000(t_small_table *v)
{
	v->arr[194999] = sym_number;
	v->arr[195000] = sym_simple_expansion;
	v->arr[195001] = sym_expansion;
	v->arr[195002] = sym_command_substitution;
	v->arr[195003] = sym_process_substitution;
	v->arr[195005] = 21;
	v->arr[195005] = 71;
	v->arr[195006] = 1;
	v->arr[195007] = sym_comment;
	v->arr[195008] = 8565;
	v->arr[195009] = 1;
	v->arr[195010] = sym_word;
	v->arr[195011] = 8571;
	v->arr[195012] = 1;
	v->arr[195013] = anon_sym_DOLLAR_LBRACK;
	init_small_table13001(v);
}

void	init_small_table13001(t_small_table *v)
{
	v->arr[195014] = 8573;
	v->arr[195015] = 1;
	v->arr[195016] = anon_sym_DOLLAR;
	v->arr[195017] = 8575;
	v->arr[195018] = 1;
	v->arr[195019] = sym__special_character;
	v->arr[195020] = 8577;
	v->arr[195021] = 1;
	v->arr[195022] = anon_sym_DQUOTE;
	v->arr[195023] = 8581;
	v->arr[195024] = 1;
	v->arr[195025] = aux_sym_number_token1;
	v->arr[195026] = 8583;
	v->arr[195027] = 1;
	v->arr[195028] = aux_sym_number_token2;
	init_small_table13002(v);
}

void	init_small_table13002(t_small_table *v)
{
	v->arr[195029] = 8585;
	v->arr[195030] = 1;
	v->arr[195031] = anon_sym_DOLLAR_LBRACE;
	v->arr[195032] = 8587;
	v->arr[195033] = 1;
	v->arr[195034] = anon_sym_DOLLAR_LPAREN;
	v->arr[195035] = 8589;
	v->arr[195036] = 1;
	v->arr[195037] = anon_sym_BQUOTE;
	v->arr[195038] = 8591;
	v->arr[195039] = 1;
	v->arr[195040] = anon_sym_DOLLAR_BQUOTE;
	v->arr[195041] = 8595;
	v->arr[195042] = 1;
	v->arr[195043] = sym_test_operator;
	init_small_table13003(v);
}

void	init_small_table13003(t_small_table *v)
{
	v->arr[195044] = 8597;
	v->arr[195045] = 1;
	v->arr[195046] = sym__brace_start;
	v->arr[195047] = 8730;
	v->arr[195048] = 1;
	v->arr[195049] = anon_sym_RPAREN;
	v->arr[195050] = 5365;
	v->arr[195051] = 1;
	v->arr[195052] = aux_sym__literal_repeat1;
	v->arr[195053] = 8567;
	v->arr[195054] = 2;
	v->arr[195055] = anon_sym_LPAREN_LPAREN;
	v->arr[195056] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->arr[195057] = 8579;
	v->arr[195058] = 2;
	init_small_table13004(v);
}

void	init_small_table13004(t_small_table *v)
{
	v->arr[195059] = sym_raw_string;
	v->arr[195060] = sym_ansi_c_string;
	v->arr[195061] = 8593;
	v->arr[195062] = 2;
	v->arr[195063] = anon_sym_LT_LPAREN;
	v->arr[195064] = anon_sym_GT_LPAREN;
	v->arr[195065] = 3577;
	v->arr[195066] = 2;
	v->arr[195067] = sym_concatenation;
	v->arr[195068] = aux_sym_for_statement_repeat1;
	v->arr[195069] = 5045;
	v->arr[195070] = 9;
	v->arr[195071] = sym_arithmetic_expansion;
	v->arr[195072] = sym_brace_expression;
	v->arr[195073] = sym_string;
	init_small_table13005(v);
}

// file funcs2600.c
