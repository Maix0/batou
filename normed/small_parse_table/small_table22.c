/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs22.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table110(t_small_table *v)
{
	v->arr[1649] = sym_number;
	v->arr[1650] = sym_simple_expansion;
	v->arr[1651] = sym_expansion;
	v->arr[1652] = sym_command_substitution;
	v->arr[1653] = sym_process_substitution;
	v->arr[1654] = 1625;
	v->arr[1655] = 21;
	v->arr[1656] = anon_sym_SEMI;
	v->arr[1657] = anon_sym_PIPE_PIPE;
	v->arr[1658] = anon_sym_AMP_AMP;
	v->arr[1659] = anon_sym_PIPE;
	v->arr[1660] = anon_sym_AMP;
	v->arr[1661] = anon_sym_LT;
	v->arr[1662] = anon_sym_GT;
	v->arr[1663] = anon_sym_LT_LT;
	init_small_table111(v);
}

void	init_small_table111(t_small_table *v)
{
	v->arr[1664] = anon_sym_GT_GT;
	v->arr[1665] = anon_sym_SEMI_SEMI;
	v->arr[1666] = anon_sym_SEMI_AMP;
	v->arr[1667] = anon_sym_SEMI_SEMI_AMP;
	v->arr[1668] = anon_sym_PIPE_AMP;
	v->arr[1669] = anon_sym_AMP_GT;
	v->arr[1670] = anon_sym_AMP_GT_GT;
	v->arr[1671] = anon_sym_LT_AMP;
	v->arr[1672] = anon_sym_GT_AMP;
	v->arr[1673] = anon_sym_GT_PIPE;
	v->arr[1674] = anon_sym_LT_AMP_DASH;
	v->arr[1675] = anon_sym_GT_AMP_DASH;
	v->arr[1676] = anon_sym_LT_LT_DASH;
	v->arr[1678] = 27;
	v->arr[1678] = 3;
	init_small_table112(v);
}

void	init_small_table112(t_small_table *v)
{
	v->arr[1679] = 1;
	v->arr[1680] = sym_comment;
	v->arr[1681] = 19;
	v->arr[1682] = 1;
	v->arr[1683] = anon_sym_LPAREN;
	v->arr[1684] = 1549;
	v->arr[1685] = 1;
	v->arr[1686] = anon_sym_DOLLAR_LBRACK;
	v->arr[1687] = 1551;
	v->arr[1688] = 1;
	v->arr[1689] = anon_sym_DOLLAR;
	v->arr[1690] = 1555;
	v->arr[1691] = 1;
	v->arr[1692] = anon_sym_DQUOTE;
	v->arr[1693] = 1557;
	init_small_table113(v);
}

void	init_small_table113(t_small_table *v)
{
	v->arr[1694] = 1;
	v->arr[1695] = aux_sym_number_token1;
	v->arr[1696] = 1559;
	v->arr[1697] = 1;
	v->arr[1698] = aux_sym_number_token2;
	v->arr[1699] = 1561;
	v->arr[1700] = 1;
	v->arr[1701] = anon_sym_DOLLAR_LBRACE;
	v->arr[1702] = 1563;
	v->arr[1703] = 1;
	v->arr[1704] = anon_sym_DOLLAR_LPAREN;
	v->arr[1705] = 1567;
	v->arr[1706] = 1;
	v->arr[1707] = anon_sym_DOLLAR_BQUOTE;
	v->arr[1708] = 1573;
	init_small_table114(v);
}

void	init_small_table114(t_small_table *v)
{
	v->arr[1709] = 1;
	v->arr[1710] = sym__bare_dollar;
	v->arr[1711] = 1575;
	v->arr[1712] = 1;
	v->arr[1713] = sym__brace_start;
	v->arr[1714] = 1690;
	v->arr[1715] = 1;
	v->arr[1716] = anon_sym_LT_LT_LT;
	v->arr[1717] = 1692;
	v->arr[1718] = 1;
	v->arr[1719] = sym__special_character;
	v->arr[1720] = 1694;
	v->arr[1721] = 1;
	v->arr[1722] = sym_test_operator;
	v->arr[1723] = 587;
	init_small_table115(v);
}

// file funcs22.c
