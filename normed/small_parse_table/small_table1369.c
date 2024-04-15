/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs1369.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table6845(t_small_table *v)
{
	v->arr[102674] = sym_string;
	v->arr[102675] = sym_translated_string;
	v->arr[102676] = sym_number;
	v->arr[102677] = sym_simple_expansion;
	v->arr[102678] = sym_expansion;
	v->arr[102679] = sym_command_substitution;
	v->arr[102680] = sym_process_substitution;
	v->arr[102682] = 26;
	v->arr[102682] = 71;
	v->arr[102683] = 1;
	v->arr[102684] = sym_comment;
	v->arr[102685] = 107;
	v->arr[102686] = 1;
	v->arr[102687] = anon_sym_TILDE;
	v->arr[102688] = 237;
	init_small_table6846(v);
}

void	init_small_table6846(t_small_table *v)
{
	v->arr[102689] = 1;
	v->arr[102690] = sym_word;
	v->arr[102691] = 248;
	v->arr[102692] = 1;
	v->arr[102693] = anon_sym_LPAREN;
	v->arr[102694] = 250;
	v->arr[102695] = 1;
	v->arr[102696] = anon_sym_BANG;
	v->arr[102697] = 258;
	v->arr[102698] = 1;
	v->arr[102699] = anon_sym_DOLLAR;
	v->arr[102700] = 264;
	v->arr[102701] = 1;
	v->arr[102702] = aux_sym_number_token1;
	v->arr[102703] = 266;
	init_small_table6847(v);
}

void	init_small_table6847(t_small_table *v)
{
	v->arr[102704] = 1;
	v->arr[102705] = aux_sym_number_token2;
	v->arr[102706] = 270;
	v->arr[102707] = 1;
	v->arr[102708] = anon_sym_DOLLAR_LPAREN;
	v->arr[102709] = 282;
	v->arr[102710] = 1;
	v->arr[102711] = sym_test_operator;
	v->arr[102712] = 284;
	v->arr[102713] = 1;
	v->arr[102714] = sym__brace_start;
	v->arr[102715] = 1075;
	v->arr[102716] = 1;
	v->arr[102717] = anon_sym_DOLLAR_LBRACK;
	v->arr[102718] = 1079;
	init_small_table6848(v);
}

void	init_small_table6848(t_small_table *v)
{
	v->arr[102719] = 1;
	v->arr[102720] = sym__special_character;
	v->arr[102721] = 1081;
	v->arr[102722] = 1;
	v->arr[102723] = anon_sym_DQUOTE;
	v->arr[102724] = 1085;
	v->arr[102725] = 1;
	v->arr[102726] = anon_sym_DOLLAR_LBRACE;
	v->arr[102727] = 1087;
	v->arr[102728] = 1;
	v->arr[102729] = anon_sym_DOLLAR_BQUOTE;
	v->arr[102730] = 3598;
	v->arr[102731] = 1;
	v->arr[102732] = anon_sym_BQUOTE;
	v->arr[102733] = 2690;
	init_small_table6849(v);
}

void	init_small_table6849(t_small_table *v)
{
	v->arr[102734] = 1;
	v->arr[102735] = aux_sym__literal_repeat1;
	v->arr[102736] = 3091;
	v->arr[102737] = 1;
	v->arr[102738] = sym__expression;
	v->arr[102739] = 103;
	v->arr[102740] = 2;
	v->arr[102741] = anon_sym_PLUS_PLUS2;
	v->arr[102742] = anon_sym_DASH_DASH2;
	v->arr[102743] = 105;
	v->arr[102744] = 2;
	v->arr[102745] = anon_sym_DASH2;
	v->arr[102746] = anon_sym_PLUS2;
	v->arr[102747] = 1073;
	v->arr[102748] = 2;
	init_small_table6850(v);
}

// file funcs1369.c
