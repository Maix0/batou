/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs1664.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table8320(t_small_table *v)
{
	v->arr[124799] = sym_string;
	v->arr[124800] = sym_translated_string;
	v->arr[124801] = sym_number;
	v->arr[124802] = sym_simple_expansion;
	v->arr[124803] = sym_expansion;
	v->arr[124804] = sym_command_substitution;
	v->arr[124805] = sym_process_substitution;
	v->arr[124807] = 26;
	v->arr[124807] = 3;
	v->arr[124808] = 1;
	v->arr[124809] = sym_comment;
	v->arr[124810] = 6480;
	v->arr[124811] = 1;
	v->arr[124812] = anon_sym_LPAREN;
	v->arr[124813] = 6486;
	init_small_table8321(v);
}

void	init_small_table8321(t_small_table *v)
{
	v->arr[124814] = 1;
	v->arr[124815] = anon_sym_DOLLAR_LBRACK;
	v->arr[124816] = 6488;
	v->arr[124817] = 1;
	v->arr[124818] = anon_sym_DOLLAR;
	v->arr[124819] = 6490;
	v->arr[124820] = 1;
	v->arr[124821] = sym__special_character;
	v->arr[124822] = 6492;
	v->arr[124823] = 1;
	v->arr[124824] = anon_sym_DQUOTE;
	v->arr[124825] = 6494;
	v->arr[124826] = 1;
	v->arr[124827] = aux_sym_number_token1;
	v->arr[124828] = 6496;
	init_small_table8322(v);
}

void	init_small_table8322(t_small_table *v)
{
	v->arr[124829] = 1;
	v->arr[124830] = aux_sym_number_token2;
	v->arr[124831] = 6498;
	v->arr[124832] = 1;
	v->arr[124833] = anon_sym_DOLLAR_LBRACE;
	v->arr[124834] = 6500;
	v->arr[124835] = 1;
	v->arr[124836] = anon_sym_DOLLAR_LPAREN;
	v->arr[124837] = 6502;
	v->arr[124838] = 1;
	v->arr[124839] = anon_sym_BQUOTE;
	v->arr[124840] = 6504;
	v->arr[124841] = 1;
	v->arr[124842] = anon_sym_DOLLAR_BQUOTE;
	v->arr[124843] = 6508;
	init_small_table8323(v);
}

void	init_small_table8323(t_small_table *v)
{
	v->arr[124844] = 1;
	v->arr[124845] = sym_test_operator;
	v->arr[124846] = 6510;
	v->arr[124847] = 1;
	v->arr[124848] = sym_extglob_pattern;
	v->arr[124849] = 6512;
	v->arr[124850] = 1;
	v->arr[124851] = sym__brace_start;
	v->arr[124852] = 6580;
	v->arr[124853] = 1;
	v->arr[124854] = anon_sym_esac;
	v->arr[124855] = 6582;
	v->arr[124856] = 1;
	v->arr[124857] = aux_sym_heredoc_redirect_token1;
	v->arr[124858] = 6426;
	init_small_table8324(v);
}

void	init_small_table8324(t_small_table *v)
{
	v->arr[124859] = 1;
	v->arr[124860] = aux_sym__literal_repeat1;
	v->arr[124861] = 6824;
	v->arr[124862] = 1;
	v->arr[124863] = sym_last_case_item;
	v->arr[124864] = 6476;
	v->arr[124865] = 2;
	v->arr[124866] = anon_sym_LPAREN_LPAREN;
	v->arr[124867] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->arr[124868] = 6506;
	v->arr[124869] = 2;
	v->arr[124870] = anon_sym_LT_LPAREN;
	v->arr[124871] = anon_sym_GT_LPAREN;
	v->arr[124872] = 3378;
	v->arr[124873] = 2;
	init_small_table8325(v);
}

// file funcs1664.c
