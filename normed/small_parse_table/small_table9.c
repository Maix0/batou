/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs9.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table45(t_small_table *v)
{
	v->arr[674] = 3;
	v->arr[675] = sym_raw_string;
	v->arr[676] = sym_ansi_c_string;
	v->arr[677] = sym_word;
	v->arr[678] = 1023;
	v->arr[679] = 9;
	v->arr[680] = sym_arithmetic_expansion;
	v->arr[681] = sym_brace_expression;
	v->arr[682] = sym_string;
	v->arr[683] = sym_translated_string;
	v->arr[684] = sym_number;
	v->arr[685] = sym_simple_expansion;
	v->arr[686] = sym_expansion;
	v->arr[687] = sym_command_substitution;
	v->arr[688] = sym_process_substitution;
	init_small_table46(v);
}

void	init_small_table46(t_small_table *v)
{
	v->arr[689] = 1404;
	v->arr[690] = 20;
	v->arr[691] = anon_sym_SEMI;
	v->arr[692] = anon_sym_PIPE_PIPE;
	v->arr[693] = anon_sym_AMP_AMP;
	v->arr[694] = anon_sym_PIPE;
	v->arr[695] = anon_sym_AMP;
	v->arr[696] = anon_sym_LT;
	v->arr[697] = anon_sym_GT;
	v->arr[698] = anon_sym_LT_LT;
	v->arr[699] = anon_sym_GT_GT;
	v->arr[700] = anon_sym_RPAREN;
	v->arr[701] = anon_sym_SEMI_SEMI;
	v->arr[702] = anon_sym_PIPE_AMP;
	v->arr[703] = anon_sym_AMP_GT;
	init_small_table47(v);
}

void	init_small_table47(t_small_table *v)
{
	v->arr[704] = anon_sym_AMP_GT_GT;
	v->arr[705] = anon_sym_LT_AMP;
	v->arr[706] = anon_sym_GT_AMP;
	v->arr[707] = anon_sym_GT_PIPE;
	v->arr[708] = anon_sym_LT_AMP_DASH;
	v->arr[709] = anon_sym_GT_AMP_DASH;
	v->arr[710] = anon_sym_LT_LT_DASH;
	v->arr[712] = 28;
	v->arr[712] = 3;
	v->arr[713] = 1;
	v->arr[714] = sym_comment;
	v->arr[715] = 19;
	v->arr[716] = 1;
	v->arr[717] = anon_sym_LPAREN;
	v->arr[718] = 1583;
	init_small_table48(v);
}

void	init_small_table48(t_small_table *v)
{
	v->arr[719] = 1;
	v->arr[720] = anon_sym_LT_LT_LT;
	v->arr[721] = 1585;
	v->arr[722] = 1;
	v->arr[723] = anon_sym_DOLLAR_LBRACK;
	v->arr[724] = 1587;
	v->arr[725] = 1;
	v->arr[726] = anon_sym_DOLLAR;
	v->arr[727] = 1589;
	v->arr[728] = 1;
	v->arr[729] = sym__special_character;
	v->arr[730] = 1591;
	v->arr[731] = 1;
	v->arr[732] = anon_sym_DQUOTE;
	v->arr[733] = 1593;
	init_small_table49(v);
}

void	init_small_table49(t_small_table *v)
{
	v->arr[734] = 1;
	v->arr[735] = aux_sym_number_token1;
	v->arr[736] = 1595;
	v->arr[737] = 1;
	v->arr[738] = aux_sym_number_token2;
	v->arr[739] = 1597;
	v->arr[740] = 1;
	v->arr[741] = anon_sym_DOLLAR_LBRACE;
	v->arr[742] = 1599;
	v->arr[743] = 1;
	v->arr[744] = anon_sym_DOLLAR_LPAREN;
	v->arr[745] = 1601;
	v->arr[746] = 1;
	v->arr[747] = anon_sym_BQUOTE;
	v->arr[748] = 1603;
	init_small_table50(v);
}

// file funcs9.c
