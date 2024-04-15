/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs18.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table90(t_small_table *v)
{
	v->arr[1349] = 1;
	v->arr[1350] = sym__special_character;
	v->arr[1351] = 1418;
	v->arr[1352] = 1;
	v->arr[1353] = anon_sym_DQUOTE;
	v->arr[1354] = 1420;
	v->arr[1355] = 1;
	v->arr[1356] = aux_sym_number_token1;
	v->arr[1357] = 1422;
	v->arr[1358] = 1;
	v->arr[1359] = aux_sym_number_token2;
	v->arr[1360] = 1424;
	v->arr[1361] = 1;
	v->arr[1362] = anon_sym_DOLLAR_LBRACE;
	v->arr[1363] = 1426;
	init_small_table91(v);
}

void	init_small_table91(t_small_table *v)
{
	v->arr[1364] = 1;
	v->arr[1365] = anon_sym_DOLLAR_LPAREN;
	v->arr[1366] = 1428;
	v->arr[1367] = 1;
	v->arr[1368] = anon_sym_BQUOTE;
	v->arr[1369] = 1430;
	v->arr[1370] = 1;
	v->arr[1371] = anon_sym_DOLLAR_BQUOTE;
	v->arr[1372] = 1434;
	v->arr[1373] = 1;
	v->arr[1374] = sym_test_operator;
	v->arr[1375] = 1436;
	v->arr[1376] = 1;
	v->arr[1377] = sym__bare_dollar;
	v->arr[1378] = 1438;
	init_small_table92(v);
}

void	init_small_table92(t_small_table *v)
{
	v->arr[1379] = 1;
	v->arr[1380] = sym__brace_start;
	v->arr[1381] = 532;
	v->arr[1382] = 1;
	v->arr[1383] = aux_sym_command_repeat2;
	v->arr[1384] = 1045;
	v->arr[1385] = 1;
	v->arr[1386] = aux_sym__literal_repeat1;
	v->arr[1387] = 1181;
	v->arr[1388] = 1;
	v->arr[1389] = sym_herestring_redirect;
	v->arr[1390] = 1182;
	v->arr[1391] = 1;
	v->arr[1392] = sym_concatenation;
	v->arr[1393] = 1402;
	init_small_table93(v);
}

void	init_small_table93(t_small_table *v)
{
	v->arr[1394] = 2;
	v->arr[1395] = anon_sym_LPAREN_LPAREN;
	v->arr[1396] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->arr[1397] = 1406;
	v->arr[1398] = 2;
	v->arr[1399] = anon_sym_EQ_EQ;
	v->arr[1400] = anon_sym_EQ_TILDE;
	v->arr[1401] = 1432;
	v->arr[1402] = 2;
	v->arr[1403] = anon_sym_LT_LPAREN;
	v->arr[1404] = anon_sym_GT_LPAREN;
	v->arr[1405] = 1627;
	v->arr[1406] = 2;
	v->arr[1407] = sym_file_descriptor;
	v->arr[1408] = aux_sym_heredoc_redirect_token1;
	init_small_table94(v);
}

void	init_small_table94(t_small_table *v)
{
	v->arr[1409] = 1400;
	v->arr[1410] = 3;
	v->arr[1411] = sym_raw_string;
	v->arr[1412] = sym_ansi_c_string;
	v->arr[1413] = sym_word;
	v->arr[1414] = 874;
	v->arr[1415] = 9;
	v->arr[1416] = sym_arithmetic_expansion;
	v->arr[1417] = sym_brace_expression;
	v->arr[1418] = sym_string;
	v->arr[1419] = sym_translated_string;
	v->arr[1420] = sym_number;
	v->arr[1421] = sym_simple_expansion;
	v->arr[1422] = sym_expansion;
	v->arr[1423] = sym_command_substitution;
	init_small_table95(v);
}

// file funcs18.c
