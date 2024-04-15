/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs6.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table30(t_small_table *v)
{
	v->arr[449] = sym_number;
	v->arr[450] = sym_simple_expansion;
	v->arr[451] = sym_expansion;
	v->arr[452] = sym_command_substitution;
	v->arr[453] = sym_process_substitution;
	v->arr[454] = 1440;
	v->arr[455] = 21;
	v->arr[456] = anon_sym_SEMI;
	v->arr[457] = anon_sym_PIPE_PIPE;
	v->arr[458] = anon_sym_AMP_AMP;
	v->arr[459] = anon_sym_PIPE;
	v->arr[460] = anon_sym_AMP;
	v->arr[461] = anon_sym_LT;
	v->arr[462] = anon_sym_GT;
	v->arr[463] = anon_sym_LT_LT;
	init_small_table31(v);
}

void	init_small_table31(t_small_table *v)
{
	v->arr[464] = anon_sym_GT_GT;
	v->arr[465] = anon_sym_SEMI_SEMI;
	v->arr[466] = anon_sym_SEMI_AMP;
	v->arr[467] = anon_sym_SEMI_SEMI_AMP;
	v->arr[468] = anon_sym_PIPE_AMP;
	v->arr[469] = anon_sym_AMP_GT;
	v->arr[470] = anon_sym_AMP_GT_GT;
	v->arr[471] = anon_sym_LT_AMP;
	v->arr[472] = anon_sym_GT_AMP;
	v->arr[473] = anon_sym_GT_PIPE;
	v->arr[474] = anon_sym_LT_AMP_DASH;
	v->arr[475] = anon_sym_GT_AMP_DASH;
	v->arr[476] = anon_sym_LT_LT_DASH;
	v->arr[478] = 27;
	v->arr[478] = 3;
	init_small_table32(v);
}

void	init_small_table32(t_small_table *v)
{
	v->arr[479] = 1;
	v->arr[480] = sym_comment;
	v->arr[481] = 1491;
	v->arr[482] = 1;
	v->arr[483] = aux_sym_heredoc_redirect_token1;
	v->arr[484] = 1493;
	v->arr[485] = 1;
	v->arr[486] = anon_sym_LT_LT_LT;
	v->arr[487] = 1496;
	v->arr[488] = 1;
	v->arr[489] = anon_sym_DOLLAR_LBRACK;
	v->arr[490] = 1499;
	v->arr[491] = 1;
	v->arr[492] = anon_sym_DOLLAR;
	v->arr[493] = 1502;
	init_small_table33(v);
}

void	init_small_table33(t_small_table *v)
{
	v->arr[494] = 1;
	v->arr[495] = sym__special_character;
	v->arr[496] = 1505;
	v->arr[497] = 1;
	v->arr[498] = anon_sym_DQUOTE;
	v->arr[499] = 1508;
	v->arr[500] = 1;
	v->arr[501] = aux_sym_number_token1;
	v->arr[502] = 1511;
	v->arr[503] = 1;
	v->arr[504] = aux_sym_number_token2;
	v->arr[505] = 1514;
	v->arr[506] = 1;
	v->arr[507] = anon_sym_DOLLAR_LBRACE;
	v->arr[508] = 1517;
	init_small_table34(v);
}

void	init_small_table34(t_small_table *v)
{
	v->arr[509] = 1;
	v->arr[510] = anon_sym_DOLLAR_LPAREN;
	v->arr[511] = 1520;
	v->arr[512] = 1;
	v->arr[513] = anon_sym_BQUOTE;
	v->arr[514] = 1523;
	v->arr[515] = 1;
	v->arr[516] = anon_sym_DOLLAR_BQUOTE;
	v->arr[517] = 1529;
	v->arr[518] = 1;
	v->arr[519] = sym_file_descriptor;
	v->arr[520] = 1532;
	v->arr[521] = 1;
	v->arr[522] = sym_test_operator;
	v->arr[523] = 1535;
	init_small_table35(v);
}

// file funcs6.c
