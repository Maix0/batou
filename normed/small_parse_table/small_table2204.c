/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs2204.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table11020(t_small_table *v)
{
	v->arr[165299] = sym_translated_string;
	v->arr[165300] = sym_number;
	v->arr[165301] = sym_simple_expansion;
	v->arr[165302] = sym_expansion;
	v->arr[165303] = sym_command_substitution;
	v->arr[165304] = sym_process_substitution;
	v->arr[165306] = 25;
	v->arr[165306] = 71;
	v->arr[165307] = 1;
	v->arr[165308] = sym_comment;
	v->arr[165309] = 6474;
	v->arr[165310] = 1;
	v->arr[165311] = sym_word;
	v->arr[165312] = 6480;
	v->arr[165313] = 1;
	init_small_table11021(v);
}

void	init_small_table11021(t_small_table *v)
{
	v->arr[165314] = anon_sym_LPAREN;
	v->arr[165315] = 6488;
	v->arr[165316] = 1;
	v->arr[165317] = anon_sym_DOLLAR;
	v->arr[165318] = 6494;
	v->arr[165319] = 1;
	v->arr[165320] = aux_sym_number_token1;
	v->arr[165321] = 6496;
	v->arr[165322] = 1;
	v->arr[165323] = aux_sym_number_token2;
	v->arr[165324] = 6500;
	v->arr[165325] = 1;
	v->arr[165326] = anon_sym_DOLLAR_LPAREN;
	v->arr[165327] = 6508;
	v->arr[165328] = 1;
	init_small_table11022(v);
}

void	init_small_table11022(t_small_table *v)
{
	v->arr[165329] = sym_test_operator;
	v->arr[165330] = 6510;
	v->arr[165331] = 1;
	v->arr[165332] = sym_extglob_pattern;
	v->arr[165333] = 6512;
	v->arr[165334] = 1;
	v->arr[165335] = sym__brace_start;
	v->arr[165336] = 6610;
	v->arr[165337] = 1;
	v->arr[165338] = anon_sym_esac;
	v->arr[165339] = 7226;
	v->arr[165340] = 1;
	v->arr[165341] = anon_sym_DOLLAR_LBRACK;
	v->arr[165342] = 7228;
	v->arr[165343] = 1;
	init_small_table11023(v);
}

void	init_small_table11023(t_small_table *v)
{
	v->arr[165344] = sym__special_character;
	v->arr[165345] = 7230;
	v->arr[165346] = 1;
	v->arr[165347] = anon_sym_DQUOTE;
	v->arr[165348] = 7234;
	v->arr[165349] = 1;
	v->arr[165350] = anon_sym_DOLLAR_LBRACE;
	v->arr[165351] = 7236;
	v->arr[165352] = 1;
	v->arr[165353] = anon_sym_BQUOTE;
	v->arr[165354] = 7238;
	v->arr[165355] = 1;
	v->arr[165356] = anon_sym_DOLLAR_BQUOTE;
	v->arr[165357] = 6426;
	v->arr[165358] = 1;
	init_small_table11024(v);
}

void	init_small_table11024(t_small_table *v)
{
	v->arr[165359] = aux_sym__literal_repeat1;
	v->arr[165360] = 7451;
	v->arr[165361] = 1;
	v->arr[165362] = sym_last_case_item;
	v->arr[165363] = 7224;
	v->arr[165364] = 2;
	v->arr[165365] = anon_sym_LPAREN_LPAREN;
	v->arr[165366] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->arr[165367] = 7232;
	v->arr[165368] = 2;
	v->arr[165369] = sym_raw_string;
	v->arr[165370] = sym_ansi_c_string;
	v->arr[165371] = 7240;
	v->arr[165372] = 2;
	v->arr[165373] = anon_sym_LT_LPAREN;
	init_small_table11025(v);
}

// file funcs2204.c
