/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs2602.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table13010(t_small_table *v)
{
	v->arr[195149] = sym_string;
	v->arr[195150] = sym_translated_string;
	v->arr[195151] = sym_number;
	v->arr[195152] = sym_simple_expansion;
	v->arr[195153] = sym_expansion;
	v->arr[195154] = sym_command_substitution;
	v->arr[195155] = sym_process_substitution;
	v->arr[195157] = 21;
	v->arr[195157] = 3;
	v->arr[195158] = 1;
	v->arr[195159] = sym_comment;
	v->arr[195160] = 3729;
	v->arr[195161] = 1;
	v->arr[195162] = anon_sym_DOLLAR_LBRACK;
	v->arr[195163] = 3731;
	init_small_table13011(v);
}

void	init_small_table13011(t_small_table *v)
{
	v->arr[195164] = 1;
	v->arr[195165] = anon_sym_DOLLAR;
	v->arr[195166] = 3733;
	v->arr[195167] = 1;
	v->arr[195168] = sym__special_character;
	v->arr[195169] = 3735;
	v->arr[195170] = 1;
	v->arr[195171] = anon_sym_DQUOTE;
	v->arr[195172] = 3737;
	v->arr[195173] = 1;
	v->arr[195174] = aux_sym_number_token1;
	v->arr[195175] = 3739;
	v->arr[195176] = 1;
	v->arr[195177] = aux_sym_number_token2;
	v->arr[195178] = 3741;
	init_small_table13012(v);
}

void	init_small_table13012(t_small_table *v)
{
	v->arr[195179] = 1;
	v->arr[195180] = anon_sym_DOLLAR_LBRACE;
	v->arr[195181] = 3743;
	v->arr[195182] = 1;
	v->arr[195183] = anon_sym_DOLLAR_LPAREN;
	v->arr[195184] = 3745;
	v->arr[195185] = 1;
	v->arr[195186] = anon_sym_BQUOTE;
	v->arr[195187] = 3747;
	v->arr[195188] = 1;
	v->arr[195189] = anon_sym_DOLLAR_BQUOTE;
	v->arr[195190] = 3753;
	v->arr[195191] = 1;
	v->arr[195192] = sym_test_operator;
	v->arr[195193] = 3755;
	init_small_table13013(v);
}

void	init_small_table13013(t_small_table *v)
{
	v->arr[195194] = 1;
	v->arr[195195] = sym__brace_start;
	v->arr[195196] = 8734;
	v->arr[195197] = 1;
	v->arr[195198] = aux_sym_heredoc_redirect_token1;
	v->arr[195199] = 3571;
	v->arr[195200] = 1;
	v->arr[195201] = aux_sym__heredoc_command;
	v->arr[195202] = 5351;
	v->arr[195203] = 1;
	v->arr[195204] = aux_sym__literal_repeat1;
	v->arr[195205] = 5456;
	v->arr[195206] = 1;
	v->arr[195207] = sym_concatenation;
	v->arr[195208] = 3715;
	init_small_table13014(v);
}

void	init_small_table13014(t_small_table *v)
{
	v->arr[195209] = 2;
	v->arr[195210] = anon_sym_LPAREN_LPAREN;
	v->arr[195211] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->arr[195212] = 3749;
	v->arr[195213] = 2;
	v->arr[195214] = anon_sym_LT_LPAREN;
	v->arr[195215] = anon_sym_GT_LPAREN;
	v->arr[195216] = 3713;
	v->arr[195217] = 3;
	v->arr[195218] = sym_raw_string;
	v->arr[195219] = sym_ansi_c_string;
	v->arr[195220] = sym_word;
	v->arr[195221] = 5062;
	v->arr[195222] = 9;
	v->arr[195223] = sym_arithmetic_expansion;
	init_small_table13015(v);
}

// file funcs2602.c
