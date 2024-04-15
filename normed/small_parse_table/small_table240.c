/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs240.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table1200(t_small_table *v)
{
	v->arr[17999] = sym_word;
	v->arr[18001] = 22;
	v->arr[18001] = 3;
	v->arr[18002] = 1;
	v->arr[18003] = sym_comment;
	v->arr[18004] = 3183;
	v->arr[18005] = 1;
	v->arr[18006] = anon_sym_DOLLAR_LBRACK;
	v->arr[18007] = 3185;
	v->arr[18008] = 1;
	v->arr[18009] = anon_sym_DOLLAR;
	v->arr[18010] = 3189;
	v->arr[18011] = 1;
	v->arr[18012] = anon_sym_DQUOTE;
	v->arr[18013] = 3191;
	init_small_table1201(v);
}

void	init_small_table1201(t_small_table *v)
{
	v->arr[18014] = 1;
	v->arr[18015] = aux_sym_number_token1;
	v->arr[18016] = 3193;
	v->arr[18017] = 1;
	v->arr[18018] = aux_sym_number_token2;
	v->arr[18019] = 3195;
	v->arr[18020] = 1;
	v->arr[18021] = anon_sym_DOLLAR_LBRACE;
	v->arr[18022] = 3197;
	v->arr[18023] = 1;
	v->arr[18024] = anon_sym_DOLLAR_LPAREN;
	v->arr[18025] = 3199;
	v->arr[18026] = 1;
	v->arr[18027] = anon_sym_BQUOTE;
	v->arr[18028] = 3201;
	init_small_table1202(v);
}

void	init_small_table1202(t_small_table *v)
{
	v->arr[18029] = 1;
	v->arr[18030] = anon_sym_DOLLAR_BQUOTE;
	v->arr[18031] = 3209;
	v->arr[18032] = 1;
	v->arr[18033] = sym__brace_start;
	v->arr[18034] = 3657;
	v->arr[18035] = 1;
	v->arr[18036] = sym__special_character;
	v->arr[18037] = 3659;
	v->arr[18038] = 1;
	v->arr[18039] = aux_sym__simple_variable_name_token1;
	v->arr[18040] = 3661;
	v->arr[18041] = 1;
	v->arr[18042] = sym_test_operator;
	v->arr[18043] = 1966;
	init_small_table1203(v);
}

void	init_small_table1203(t_small_table *v)
{
	v->arr[18044] = 1;
	v->arr[18045] = aux_sym__literal_repeat1;
	v->arr[18046] = 2299;
	v->arr[18047] = 2;
	v->arr[18048] = sym_file_descriptor;
	v->arr[18049] = aux_sym_heredoc_redirect_token1;
	v->arr[18050] = 3181;
	v->arr[18051] = 2;
	v->arr[18052] = anon_sym_LPAREN_LPAREN;
	v->arr[18053] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->arr[18054] = 3203;
	v->arr[18055] = 2;
	v->arr[18056] = anon_sym_LT_LPAREN;
	v->arr[18057] = anon_sym_GT_LPAREN;
	v->arr[18058] = 743;
	init_small_table1204(v);
}

void	init_small_table1204(t_small_table *v)
{
	v->arr[18059] = 2;
	v->arr[18060] = sym_concatenation;
	v->arr[18061] = aux_sym_unset_command_repeat1;
	v->arr[18062] = 3655;
	v->arr[18063] = 3;
	v->arr[18064] = sym_raw_string;
	v->arr[18065] = sym_ansi_c_string;
	v->arr[18066] = sym_word;
	v->arr[18067] = 1902;
	v->arr[18068] = 9;
	v->arr[18069] = sym_arithmetic_expansion;
	v->arr[18070] = sym_brace_expression;
	v->arr[18071] = sym_string;
	v->arr[18072] = sym_translated_string;
	v->arr[18073] = sym_number;
	init_small_table1205(v);
}

// file funcs240.c
