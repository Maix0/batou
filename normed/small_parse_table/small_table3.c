/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table15(t_small_table *v)
{
	v->arr[224] = anon_sym_LT_LT;
	v->arr[225] = anon_sym_GT_GT;
	v->arr[226] = anon_sym_esac;
	v->arr[227] = anon_sym_SEMI_SEMI;
	v->arr[228] = anon_sym_SEMI_AMP;
	v->arr[229] = anon_sym_SEMI_SEMI_AMP;
	v->arr[230] = anon_sym_PIPE_AMP;
	v->arr[231] = anon_sym_AMP_GT;
	v->arr[232] = anon_sym_AMP_GT_GT;
	v->arr[233] = anon_sym_LT_AMP;
	v->arr[234] = anon_sym_GT_AMP;
	v->arr[235] = anon_sym_GT_PIPE;
	v->arr[236] = anon_sym_LT_AMP_DASH;
	v->arr[237] = anon_sym_GT_AMP_DASH;
	v->arr[238] = anon_sym_LT_LT_DASH;
	init_small_table16(v);
}

void	init_small_table16(t_small_table *v)
{
	v->arr[240] = 28;
	v->arr[240] = 3;
	v->arr[241] = 1;
	v->arr[242] = sym_comment;
	v->arr[243] = 677;
	v->arr[244] = 1;
	v->arr[245] = anon_sym_LPAREN;
	v->arr[246] = 1450;
	v->arr[247] = 1;
	v->arr[248] = anon_sym_LT_LT_LT;
	v->arr[249] = 1452;
	v->arr[250] = 1;
	v->arr[251] = anon_sym_DOLLAR_LBRACK;
	v->arr[252] = 1454;
	v->arr[253] = 1;
	init_small_table17(v);
}

void	init_small_table17(t_small_table *v)
{
	v->arr[254] = anon_sym_DOLLAR;
	v->arr[255] = 1456;
	v->arr[256] = 1;
	v->arr[257] = sym__special_character;
	v->arr[258] = 1458;
	v->arr[259] = 1;
	v->arr[260] = anon_sym_DQUOTE;
	v->arr[261] = 1460;
	v->arr[262] = 1;
	v->arr[263] = aux_sym_number_token1;
	v->arr[264] = 1462;
	v->arr[265] = 1;
	v->arr[266] = aux_sym_number_token2;
	v->arr[267] = 1464;
	v->arr[268] = 1;
	init_small_table18(v);
}

void	init_small_table18(t_small_table *v)
{
	v->arr[269] = anon_sym_DOLLAR_LBRACE;
	v->arr[270] = 1466;
	v->arr[271] = 1;
	v->arr[272] = anon_sym_DOLLAR_LPAREN;
	v->arr[273] = 1468;
	v->arr[274] = 1;
	v->arr[275] = anon_sym_BQUOTE;
	v->arr[276] = 1470;
	v->arr[277] = 1;
	v->arr[278] = anon_sym_DOLLAR_BQUOTE;
	v->arr[279] = 1474;
	v->arr[280] = 1;
	v->arr[281] = sym_test_operator;
	v->arr[282] = 1476;
	v->arr[283] = 1;
	init_small_table19(v);
}

void	init_small_table19(t_small_table *v)
{
	v->arr[284] = sym__bare_dollar;
	v->arr[285] = 1478;
	v->arr[286] = 1;
	v->arr[287] = sym__brace_start;
	v->arr[288] = 542;
	v->arr[289] = 1;
	v->arr[290] = aux_sym_command_repeat2;
	v->arr[291] = 1175;
	v->arr[292] = 1;
	v->arr[293] = aux_sym__literal_repeat1;
	v->arr[294] = 1328;
	v->arr[295] = 1;
	v->arr[296] = sym_concatenation;
	v->arr[297] = 1329;
	v->arr[298] = 1;
	init_small_table20(v);
}

// file funcs3.c
