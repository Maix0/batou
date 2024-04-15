/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs2664.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table13320(t_small_table *v)
{
	v->arr[199799] = 9;
	v->arr[199800] = sym_arithmetic_expansion;
	v->arr[199801] = sym_brace_expression;
	v->arr[199802] = sym_string;
	v->arr[199803] = sym_translated_string;
	v->arr[199804] = sym_number;
	v->arr[199805] = sym_simple_expansion;
	v->arr[199806] = sym_expansion;
	v->arr[199807] = sym_command_substitution;
	v->arr[199808] = sym_process_substitution;
	v->arr[199810] = 19;
	v->arr[199810] = 3;
	v->arr[199811] = 1;
	v->arr[199812] = sym_comment;
	v->arr[199813] = 363;
	init_small_table13321(v);
}

void	init_small_table13321(t_small_table *v)
{
	v->arr[199814] = 1;
	v->arr[199815] = anon_sym_DOLLAR_LBRACK;
	v->arr[199816] = 367;
	v->arr[199817] = 1;
	v->arr[199818] = anon_sym_DOLLAR;
	v->arr[199819] = 371;
	v->arr[199820] = 1;
	v->arr[199821] = anon_sym_DQUOTE;
	v->arr[199822] = 375;
	v->arr[199823] = 1;
	v->arr[199824] = aux_sym_number_token1;
	v->arr[199825] = 377;
	v->arr[199826] = 1;
	v->arr[199827] = aux_sym_number_token2;
	v->arr[199828] = 379;
	init_small_table13322(v);
}

void	init_small_table13322(t_small_table *v)
{
	v->arr[199829] = 1;
	v->arr[199830] = anon_sym_DOLLAR_LBRACE;
	v->arr[199831] = 381;
	v->arr[199832] = 1;
	v->arr[199833] = anon_sym_DOLLAR_LPAREN;
	v->arr[199834] = 385;
	v->arr[199835] = 1;
	v->arr[199836] = anon_sym_DOLLAR_BQUOTE;
	v->arr[199837] = 391;
	v->arr[199838] = 1;
	v->arr[199839] = sym__brace_start;
	v->arr[199840] = 5809;
	v->arr[199841] = 1;
	v->arr[199842] = anon_sym_BQUOTE;
	v->arr[199843] = 8836;
	init_small_table13323(v);
}

void	init_small_table13323(t_small_table *v)
{
	v->arr[199844] = 1;
	v->arr[199845] = sym_word;
	v->arr[199846] = 8844;
	v->arr[199847] = 1;
	v->arr[199848] = sym_test_operator;
	v->arr[199849] = 9082;
	v->arr[199850] = 1;
	v->arr[199851] = anon_sym_RBRACK;
	v->arr[199852] = 352;
	v->arr[199853] = 2;
	v->arr[199854] = anon_sym_LPAREN_LPAREN;
	v->arr[199855] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->arr[199856] = 387;
	v->arr[199857] = 2;
	v->arr[199858] = anon_sym_LT_LPAREN;
	init_small_table13324(v);
}

void	init_small_table13324(t_small_table *v)
{
	v->arr[199859] = anon_sym_GT_LPAREN;
	v->arr[199860] = 8840;
	v->arr[199861] = 2;
	v->arr[199862] = sym__special_character;
	v->arr[199863] = sym__comment_word;
	v->arr[199864] = 8842;
	v->arr[199865] = 3;
	v->arr[199866] = sym__bare_dollar;
	v->arr[199867] = sym_raw_string;
	v->arr[199868] = sym_ansi_c_string;
	v->arr[199869] = 2730;
	v->arr[199870] = 9;
	v->arr[199871] = sym_arithmetic_expansion;
	v->arr[199872] = sym_brace_expression;
	v->arr[199873] = sym_string;
	init_small_table13325(v);
}

// file funcs2664.c
