/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs32.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table160(t_small_table *v)
{
	v->arr[2399] = anon_sym_EQ_EQ;
	v->arr[2400] = anon_sym_LT;
	v->arr[2401] = anon_sym_GT;
	v->arr[2402] = anon_sym_LT_LT;
	v->arr[2403] = anon_sym_GT_GT;
	v->arr[2404] = anon_sym_LPAREN;
	v->arr[2405] = anon_sym_SEMI_SEMI;
	v->arr[2406] = anon_sym_SEMI_AMP;
	v->arr[2407] = anon_sym_SEMI_SEMI_AMP;
	v->arr[2408] = anon_sym_PIPE_AMP;
	v->arr[2409] = anon_sym_EQ_TILDE;
	v->arr[2410] = anon_sym_AMP_GT;
	v->arr[2411] = anon_sym_AMP_GT_GT;
	v->arr[2412] = anon_sym_LT_AMP;
	v->arr[2413] = anon_sym_GT_AMP;
	init_small_table161(v);
}

void	init_small_table161(t_small_table *v)
{
	v->arr[2414] = anon_sym_GT_PIPE;
	v->arr[2415] = anon_sym_LT_AMP_DASH;
	v->arr[2416] = anon_sym_GT_AMP_DASH;
	v->arr[2417] = anon_sym_LT_LT_DASH;
	v->arr[2418] = aux_sym_heredoc_redirect_token1;
	v->arr[2419] = anon_sym_LT_LT_LT;
	v->arr[2420] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->arr[2421] = anon_sym_DOLLAR_LBRACK;
	v->arr[2422] = sym__special_character;
	v->arr[2423] = sym_raw_string;
	v->arr[2424] = sym_ansi_c_string;
	v->arr[2425] = aux_sym_number_token1;
	v->arr[2426] = aux_sym_number_token2;
	v->arr[2427] = anon_sym_DOLLAR_LBRACE;
	v->arr[2428] = anon_sym_DOLLAR_LPAREN;
	init_small_table162(v);
}

void	init_small_table162(t_small_table *v)
{
	v->arr[2429] = anon_sym_BQUOTE;
	v->arr[2430] = anon_sym_DOLLAR_BQUOTE;
	v->arr[2431] = anon_sym_LT_LPAREN;
	v->arr[2432] = anon_sym_GT_LPAREN;
	v->arr[2433] = sym_word;
	v->arr[2435] = 8;
	v->arr[2435] = 3;
	v->arr[2436] = 1;
	v->arr[2437] = sym_comment;
	v->arr[2438] = 1791;
	v->arr[2439] = 1;
	v->arr[2440] = anon_sym_DQUOTE;
	v->arr[2441] = 1795;
	v->arr[2442] = 1;
	v->arr[2443] = sym_variable_name;
	init_small_table163(v);
}

void	init_small_table163(t_small_table *v)
{
	v->arr[2444] = 998;
	v->arr[2445] = 1;
	v->arr[2446] = sym_string;
	v->arr[2447] = 1793;
	v->arr[2448] = 2;
	v->arr[2449] = aux_sym__simple_variable_name_token1;
	v->arr[2450] = aux_sym__multiline_variable_name_token1;
	v->arr[2451] = 1235;
	v->arr[2452] = 4;
	v->arr[2453] = sym_file_descriptor;
	v->arr[2454] = sym_test_operator;
	v->arr[2455] = sym__bare_dollar;
	v->arr[2456] = sym__brace_start;
	v->arr[2457] = 1789;
	v->arr[2458] = 9;
	init_small_table164(v);
}

void	init_small_table164(t_small_table *v)
{
	v->arr[2459] = anon_sym_DASH;
	v->arr[2460] = anon_sym_STAR;
	v->arr[2461] = anon_sym_BANG;
	v->arr[2462] = anon_sym_QMARK;
	v->arr[2463] = anon_sym_DOLLAR;
	v->arr[2464] = anon_sym_POUND;
	v->arr[2465] = anon_sym_AT2;
	v->arr[2466] = anon_sym_0;
	v->arr[2467] = anon_sym__;
	v->arr[2468] = 1227;
	v->arr[2469] = 41;
	v->arr[2470] = anon_sym_LPAREN_LPAREN;
	v->arr[2471] = anon_sym_SEMI;
	v->arr[2472] = anon_sym_PIPE_PIPE;
	v->arr[2473] = anon_sym_AMP_AMP;
	init_small_table165(v);
}

// file funcs32.c
