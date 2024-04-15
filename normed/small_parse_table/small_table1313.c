/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs1313.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table6565(t_small_table *v)
{
	v->arr[98474] = sym_simple_expansion;
	v->arr[98475] = sym_expansion;
	v->arr[98476] = sym_command_substitution;
	v->arr[98477] = sym_process_substitution;
	v->arr[98479] = 26;
	v->arr[98479] = 71;
	v->arr[98480] = 1;
	v->arr[98481] = sym_comment;
	v->arr[98482] = 187;
	v->arr[98483] = 1;
	v->arr[98484] = anon_sym_TILDE;
	v->arr[98485] = 350;
	v->arr[98486] = 1;
	v->arr[98487] = sym_word;
	v->arr[98488] = 359;
	init_small_table6566(v);
}

void	init_small_table6566(t_small_table *v)
{
	v->arr[98489] = 1;
	v->arr[98490] = anon_sym_LPAREN;
	v->arr[98491] = 361;
	v->arr[98492] = 1;
	v->arr[98493] = anon_sym_BANG;
	v->arr[98494] = 363;
	v->arr[98495] = 1;
	v->arr[98496] = anon_sym_DOLLAR_LBRACK;
	v->arr[98497] = 367;
	v->arr[98498] = 1;
	v->arr[98499] = anon_sym_DOLLAR;
	v->arr[98500] = 371;
	v->arr[98501] = 1;
	v->arr[98502] = anon_sym_DQUOTE;
	v->arr[98503] = 375;
	init_small_table6567(v);
}

void	init_small_table6567(t_small_table *v)
{
	v->arr[98504] = 1;
	v->arr[98505] = aux_sym_number_token1;
	v->arr[98506] = 377;
	v->arr[98507] = 1;
	v->arr[98508] = aux_sym_number_token2;
	v->arr[98509] = 379;
	v->arr[98510] = 1;
	v->arr[98511] = anon_sym_DOLLAR_LBRACE;
	v->arr[98512] = 381;
	v->arr[98513] = 1;
	v->arr[98514] = anon_sym_DOLLAR_LPAREN;
	v->arr[98515] = 385;
	v->arr[98516] = 1;
	v->arr[98517] = anon_sym_DOLLAR_BQUOTE;
	v->arr[98518] = 389;
	init_small_table6568(v);
}

void	init_small_table6568(t_small_table *v)
{
	v->arr[98519] = 1;
	v->arr[98520] = sym_test_operator;
	v->arr[98521] = 391;
	v->arr[98522] = 1;
	v->arr[98523] = sym__brace_start;
	v->arr[98524] = 5807;
	v->arr[98525] = 1;
	v->arr[98526] = sym__special_character;
	v->arr[98527] = 5809;
	v->arr[98528] = 1;
	v->arr[98529] = anon_sym_BQUOTE;
	v->arr[98530] = 2641;
	v->arr[98531] = 1;
	v->arr[98532] = aux_sym__literal_repeat1;
	v->arr[98533] = 2960;
	init_small_table6569(v);
}

void	init_small_table6569(t_small_table *v)
{
	v->arr[98534] = 1;
	v->arr[98535] = sym__expression;
	v->arr[98536] = 183;
	v->arr[98537] = 2;
	v->arr[98538] = anon_sym_PLUS_PLUS2;
	v->arr[98539] = anon_sym_DASH_DASH2;
	v->arr[98540] = 185;
	v->arr[98541] = 2;
	v->arr[98542] = anon_sym_DASH2;
	v->arr[98543] = anon_sym_PLUS2;
	v->arr[98544] = 352;
	v->arr[98545] = 2;
	v->arr[98546] = anon_sym_LPAREN_LPAREN;
	v->arr[98547] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->arr[98548] = 373;
	init_small_table6570(v);
}

// file funcs1313.c
