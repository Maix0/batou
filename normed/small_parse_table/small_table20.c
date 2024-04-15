/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs20.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table100(t_small_table *v)
{
	v->arr[1499] = 1;
	v->arr[1500] = sym__brace_start;
	v->arr[1501] = 541;
	v->arr[1502] = 1;
	v->arr[1503] = aux_sym_command_repeat2;
	v->arr[1504] = 1175;
	v->arr[1505] = 1;
	v->arr[1506] = aux_sym__literal_repeat1;
	v->arr[1507] = 1328;
	v->arr[1508] = 1;
	v->arr[1509] = sym_concatenation;
	v->arr[1510] = 1329;
	v->arr[1511] = 1;
	v->arr[1512] = sym_herestring_redirect;
	v->arr[1513] = 1632;
	init_small_table101(v);
}

void	init_small_table101(t_small_table *v)
{
	v->arr[1514] = 2;
	v->arr[1515] = anon_sym_LPAREN_LPAREN;
	v->arr[1516] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->arr[1517] = 1635;
	v->arr[1518] = 2;
	v->arr[1519] = anon_sym_EQ_EQ;
	v->arr[1520] = anon_sym_EQ_TILDE;
	v->arr[1521] = 1671;
	v->arr[1522] = 2;
	v->arr[1523] = anon_sym_LT_LPAREN;
	v->arr[1524] = anon_sym_GT_LPAREN;
	v->arr[1525] = 1629;
	v->arr[1526] = 3;
	v->arr[1527] = sym_raw_string;
	v->arr[1528] = sym_ansi_c_string;
	init_small_table102(v);
}

void	init_small_table102(t_small_table *v)
{
	v->arr[1529] = sym_word;
	v->arr[1530] = 985;
	v->arr[1531] = 9;
	v->arr[1532] = sym_arithmetic_expansion;
	v->arr[1533] = sym_brace_expression;
	v->arr[1534] = sym_string;
	v->arr[1535] = sym_translated_string;
	v->arr[1536] = sym_number;
	v->arr[1537] = sym_simple_expansion;
	v->arr[1538] = sym_expansion;
	v->arr[1539] = sym_command_substitution;
	v->arr[1540] = sym_process_substitution;
	v->arr[1541] = 1486;
	v->arr[1542] = 21;
	v->arr[1543] = anon_sym_SEMI;
	init_small_table103(v);
}

void	init_small_table103(t_small_table *v)
{
	v->arr[1544] = anon_sym_PIPE_PIPE;
	v->arr[1545] = anon_sym_AMP_AMP;
	v->arr[1546] = anon_sym_PIPE;
	v->arr[1547] = anon_sym_AMP;
	v->arr[1548] = anon_sym_LT;
	v->arr[1549] = anon_sym_GT;
	v->arr[1550] = anon_sym_LT_LT;
	v->arr[1551] = anon_sym_GT_GT;
	v->arr[1552] = anon_sym_SEMI_SEMI;
	v->arr[1553] = anon_sym_SEMI_AMP;
	v->arr[1554] = anon_sym_SEMI_SEMI_AMP;
	v->arr[1555] = anon_sym_PIPE_AMP;
	v->arr[1556] = anon_sym_AMP_GT;
	v->arr[1557] = anon_sym_AMP_GT_GT;
	v->arr[1558] = anon_sym_LT_AMP;
	init_small_table104(v);
}

void	init_small_table104(t_small_table *v)
{
	v->arr[1559] = anon_sym_GT_AMP;
	v->arr[1560] = anon_sym_GT_PIPE;
	v->arr[1561] = anon_sym_LT_AMP_DASH;
	v->arr[1562] = anon_sym_GT_AMP_DASH;
	v->arr[1563] = anon_sym_LT_LT_DASH;
	v->arr[1565] = 26;
	v->arr[1565] = 3;
	v->arr[1566] = 1;
	v->arr[1567] = sym_comment;
	v->arr[1568] = 1450;
	v->arr[1569] = 1;
	v->arr[1570] = anon_sym_LT_LT_LT;
	v->arr[1571] = 1452;
	v->arr[1572] = 1;
	v->arr[1573] = anon_sym_DOLLAR_LBRACK;
	init_small_table105(v);
}

// file funcs20.c
