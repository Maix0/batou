/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs864.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table4320(t_small_table *v)
{
	v->arr[64799] = anon_sym_SEMI;
	v->arr[64800] = anon_sym_PIPE_PIPE;
	v->arr[64801] = anon_sym_AMP_AMP;
	v->arr[64802] = anon_sym_PIPE;
	v->arr[64803] = anon_sym_AMP;
	v->arr[64804] = anon_sym_LT;
	v->arr[64805] = anon_sym_GT;
	v->arr[64806] = anon_sym_LT_LT;
	v->arr[64807] = anon_sym_GT_GT;
	v->arr[64808] = anon_sym_SEMI_SEMI;
	v->arr[64809] = anon_sym_SEMI_AMP;
	v->arr[64810] = anon_sym_SEMI_SEMI_AMP;
	v->arr[64811] = anon_sym_PIPE_AMP;
	v->arr[64812] = anon_sym_AMP_GT;
	v->arr[64813] = anon_sym_AMP_GT_GT;
	init_small_table4321(v);
}

void	init_small_table4321(t_small_table *v)
{
	v->arr[64814] = anon_sym_LT_AMP;
	v->arr[64815] = anon_sym_GT_AMP;
	v->arr[64816] = anon_sym_GT_PIPE;
	v->arr[64817] = anon_sym_LT_AMP_DASH;
	v->arr[64818] = anon_sym_GT_AMP_DASH;
	v->arr[64819] = anon_sym_LT_LT_DASH;
	v->arr[64820] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->arr[64821] = anon_sym_DOLLAR_LBRACK;
	v->arr[64822] = anon_sym_DOLLAR;
	v->arr[64823] = sym__special_character;
	v->arr[64824] = anon_sym_DQUOTE;
	v->arr[64825] = sym_raw_string;
	v->arr[64826] = sym_ansi_c_string;
	v->arr[64827] = aux_sym_number_token1;
	v->arr[64828] = aux_sym_number_token2;
	init_small_table4322(v);
}

void	init_small_table4322(t_small_table *v)
{
	v->arr[64829] = anon_sym_DOLLAR_LBRACE;
	v->arr[64830] = anon_sym_DOLLAR_LPAREN;
	v->arr[64831] = anon_sym_BQUOTE;
	v->arr[64832] = anon_sym_DOLLAR_BQUOTE;
	v->arr[64833] = anon_sym_LT_LPAREN;
	v->arr[64834] = anon_sym_GT_LPAREN;
	v->arr[64835] = aux_sym__simple_variable_name_token1;
	v->arr[64836] = sym_word;
	v->arr[64838] = 6;
	v->arr[64838] = 3;
	v->arr[64839] = 1;
	v->arr[64840] = sym_comment;
	v->arr[64841] = 5638;
	v->arr[64842] = 1;
	v->arr[64843] = aux_sym_concatenation_token1;
	init_small_table4323(v);
}

void	init_small_table4323(t_small_table *v)
{
	v->arr[64844] = 5713;
	v->arr[64845] = 1;
	v->arr[64846] = sym__concat;
	v->arr[64847] = 1363;
	v->arr[64848] = 1;
	v->arr[64849] = aux_sym_concatenation_repeat1;
	v->arr[64850] = 1267;
	v->arr[64851] = 5;
	v->arr[64852] = sym_file_descriptor;
	v->arr[64853] = sym_variable_name;
	v->arr[64854] = sym_test_operator;
	v->arr[64855] = sym__brace_start;
	v->arr[64856] = aux_sym_heredoc_redirect_token1;
	v->arr[64857] = 1265;
	v->arr[64858] = 38;
	init_small_table4324(v);
}

void	init_small_table4324(t_small_table *v)
{
	v->arr[64859] = anon_sym_LPAREN_LPAREN;
	v->arr[64860] = anon_sym_SEMI;
	v->arr[64861] = anon_sym_PIPE_PIPE;
	v->arr[64862] = anon_sym_AMP_AMP;
	v->arr[64863] = anon_sym_PIPE;
	v->arr[64864] = anon_sym_AMP;
	v->arr[64865] = anon_sym_LT;
	v->arr[64866] = anon_sym_GT;
	v->arr[64867] = anon_sym_LT_LT;
	v->arr[64868] = anon_sym_GT_GT;
	v->arr[64869] = anon_sym_RPAREN;
	v->arr[64870] = anon_sym_SEMI_SEMI;
	v->arr[64871] = anon_sym_PIPE_AMP;
	v->arr[64872] = anon_sym_AMP_GT;
	v->arr[64873] = anon_sym_AMP_GT_GT;
	init_small_table4325(v);
}

// file funcs864.c
