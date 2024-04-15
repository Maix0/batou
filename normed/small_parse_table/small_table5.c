/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table25(t_small_table *v)
{
	v->arr[374] = 1456;
	v->arr[375] = 1;
	v->arr[376] = sym__special_character;
	v->arr[377] = 1458;
	v->arr[378] = 1;
	v->arr[379] = anon_sym_DQUOTE;
	v->arr[380] = 1460;
	v->arr[381] = 1;
	v->arr[382] = aux_sym_number_token1;
	v->arr[383] = 1462;
	v->arr[384] = 1;
	v->arr[385] = aux_sym_number_token2;
	v->arr[386] = 1464;
	v->arr[387] = 1;
	v->arr[388] = anon_sym_DOLLAR_LBRACE;
	init_small_table26(v);
}

void	init_small_table26(t_small_table *v)
{
	v->arr[389] = 1466;
	v->arr[390] = 1;
	v->arr[391] = anon_sym_DOLLAR_LPAREN;
	v->arr[392] = 1468;
	v->arr[393] = 1;
	v->arr[394] = anon_sym_BQUOTE;
	v->arr[395] = 1470;
	v->arr[396] = 1;
	v->arr[397] = anon_sym_DOLLAR_BQUOTE;
	v->arr[398] = 1474;
	v->arr[399] = 1;
	v->arr[400] = sym_test_operator;
	v->arr[401] = 1476;
	v->arr[402] = 1;
	v->arr[403] = sym__bare_dollar;
	init_small_table27(v);
}

void	init_small_table27(t_small_table *v)
{
	v->arr[404] = 1478;
	v->arr[405] = 1;
	v->arr[406] = sym__brace_start;
	v->arr[407] = 547;
	v->arr[408] = 1;
	v->arr[409] = aux_sym_command_repeat2;
	v->arr[410] = 1175;
	v->arr[411] = 1;
	v->arr[412] = aux_sym__literal_repeat1;
	v->arr[413] = 1328;
	v->arr[414] = 1;
	v->arr[415] = sym_concatenation;
	v->arr[416] = 1329;
	v->arr[417] = 1;
	v->arr[418] = sym_herestring_redirect;
	init_small_table28(v);
}

void	init_small_table28(t_small_table *v)
{
	v->arr[419] = 5111;
	v->arr[420] = 1;
	v->arr[421] = sym_subshell;
	v->arr[422] = 1442;
	v->arr[423] = 2;
	v->arr[424] = sym_file_descriptor;
	v->arr[425] = aux_sym_heredoc_redirect_token1;
	v->arr[426] = 1446;
	v->arr[427] = 2;
	v->arr[428] = anon_sym_LPAREN_LPAREN;
	v->arr[429] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->arr[430] = 1448;
	v->arr[431] = 2;
	v->arr[432] = anon_sym_EQ_EQ;
	v->arr[433] = anon_sym_EQ_TILDE;
	init_small_table29(v);
}

void	init_small_table29(t_small_table *v)
{
	v->arr[434] = 1472;
	v->arr[435] = 2;
	v->arr[436] = anon_sym_LT_LPAREN;
	v->arr[437] = anon_sym_GT_LPAREN;
	v->arr[438] = 1444;
	v->arr[439] = 3;
	v->arr[440] = sym_raw_string;
	v->arr[441] = sym_ansi_c_string;
	v->arr[442] = sym_word;
	v->arr[443] = 985;
	v->arr[444] = 9;
	v->arr[445] = sym_arithmetic_expansion;
	v->arr[446] = sym_brace_expression;
	v->arr[447] = sym_string;
	v->arr[448] = sym_translated_string;
	init_small_table30(v);
}

// file funcs5.c
