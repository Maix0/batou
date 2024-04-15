/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs25.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table125(t_small_table *v)
{
	v->arr[1874] = sym_raw_string;
	v->arr[1875] = sym_ansi_c_string;
	v->arr[1876] = sym_word;
	v->arr[1877] = 1219;
	v->arr[1878] = 9;
	v->arr[1879] = sym_arithmetic_expansion;
	v->arr[1880] = sym_brace_expression;
	v->arr[1881] = sym_string;
	v->arr[1882] = sym_translated_string;
	v->arr[1883] = sym_number;
	v->arr[1884] = sym_simple_expansion;
	v->arr[1885] = sym_expansion;
	v->arr[1886] = sym_command_substitution;
	v->arr[1887] = sym_process_substitution;
	v->arr[1888] = 1404;
	init_small_table126(v);
}

void	init_small_table126(t_small_table *v)
{
	v->arr[1889] = 19;
	v->arr[1890] = anon_sym_SEMI;
	v->arr[1891] = anon_sym_PIPE_PIPE;
	v->arr[1892] = anon_sym_AMP_AMP;
	v->arr[1893] = anon_sym_PIPE;
	v->arr[1894] = anon_sym_AMP;
	v->arr[1895] = anon_sym_LT;
	v->arr[1896] = anon_sym_GT;
	v->arr[1897] = anon_sym_LT_LT;
	v->arr[1898] = anon_sym_GT_GT;
	v->arr[1899] = anon_sym_SEMI_SEMI;
	v->arr[1900] = anon_sym_PIPE_AMP;
	v->arr[1901] = anon_sym_AMP_GT;
	v->arr[1902] = anon_sym_AMP_GT_GT;
	v->arr[1903] = anon_sym_LT_AMP;
	init_small_table127(v);
}

void	init_small_table127(t_small_table *v)
{
	v->arr[1904] = anon_sym_GT_AMP;
	v->arr[1905] = anon_sym_GT_PIPE;
	v->arr[1906] = anon_sym_LT_AMP_DASH;
	v->arr[1907] = anon_sym_GT_AMP_DASH;
	v->arr[1908] = anon_sym_LT_LT_DASH;
	v->arr[1910] = 28;
	v->arr[1910] = 3;
	v->arr[1911] = 1;
	v->arr[1912] = sym_comment;
	v->arr[1913] = 19;
	v->arr[1914] = 1;
	v->arr[1915] = anon_sym_LPAREN;
	v->arr[1916] = 1549;
	v->arr[1917] = 1;
	v->arr[1918] = anon_sym_DOLLAR_LBRACK;
	init_small_table128(v);
}

void	init_small_table128(t_small_table *v)
{
	v->arr[1919] = 1551;
	v->arr[1920] = 1;
	v->arr[1921] = anon_sym_DOLLAR;
	v->arr[1922] = 1555;
	v->arr[1923] = 1;
	v->arr[1924] = anon_sym_DQUOTE;
	v->arr[1925] = 1557;
	v->arr[1926] = 1;
	v->arr[1927] = aux_sym_number_token1;
	v->arr[1928] = 1559;
	v->arr[1929] = 1;
	v->arr[1930] = aux_sym_number_token2;
	v->arr[1931] = 1561;
	v->arr[1932] = 1;
	v->arr[1933] = anon_sym_DOLLAR_LBRACE;
	init_small_table129(v);
}

void	init_small_table129(t_small_table *v)
{
	v->arr[1934] = 1563;
	v->arr[1935] = 1;
	v->arr[1936] = anon_sym_DOLLAR_LPAREN;
	v->arr[1937] = 1565;
	v->arr[1938] = 1;
	v->arr[1939] = anon_sym_BQUOTE;
	v->arr[1940] = 1567;
	v->arr[1941] = 1;
	v->arr[1942] = anon_sym_DOLLAR_BQUOTE;
	v->arr[1943] = 1573;
	v->arr[1944] = 1;
	v->arr[1945] = sym__bare_dollar;
	v->arr[1946] = 1575;
	v->arr[1947] = 1;
	v->arr[1948] = sym__brace_start;
	init_small_table130(v);
}

// file funcs25.c
