/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs16.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table80(t_small_table *v)
{
	v->arr[1199] = sym_test_operator;
	v->arr[1200] = sym__bare_dollar;
	v->arr[1201] = sym__brace_start;
	v->arr[1202] = 1617;
	v->arr[1203] = 9;
	v->arr[1204] = anon_sym_DASH;
	v->arr[1205] = anon_sym_STAR;
	v->arr[1206] = anon_sym_BANG;
	v->arr[1207] = anon_sym_QMARK;
	v->arr[1208] = anon_sym_DOLLAR;
	v->arr[1209] = anon_sym_POUND;
	v->arr[1210] = anon_sym_AT2;
	v->arr[1211] = anon_sym_0;
	v->arr[1212] = anon_sym__;
	v->arr[1213] = 1239;
	init_small_table81(v);
}

void	init_small_table81(t_small_table *v)
{
	v->arr[1214] = 42;
	v->arr[1215] = anon_sym_LPAREN_LPAREN;
	v->arr[1216] = anon_sym_SEMI;
	v->arr[1217] = anon_sym_PIPE_PIPE;
	v->arr[1218] = anon_sym_AMP_AMP;
	v->arr[1219] = anon_sym_PIPE;
	v->arr[1220] = anon_sym_AMP;
	v->arr[1221] = anon_sym_EQ_EQ;
	v->arr[1222] = anon_sym_LT;
	v->arr[1223] = anon_sym_GT;
	v->arr[1224] = anon_sym_LT_LT;
	v->arr[1225] = anon_sym_GT_GT;
	v->arr[1226] = anon_sym_LPAREN;
	v->arr[1227] = anon_sym_esac;
	v->arr[1228] = anon_sym_SEMI_SEMI;
	init_small_table82(v);
}

void	init_small_table82(t_small_table *v)
{
	v->arr[1229] = anon_sym_SEMI_AMP;
	v->arr[1230] = anon_sym_SEMI_SEMI_AMP;
	v->arr[1231] = anon_sym_PIPE_AMP;
	v->arr[1232] = anon_sym_EQ_TILDE;
	v->arr[1233] = anon_sym_AMP_GT;
	v->arr[1234] = anon_sym_AMP_GT_GT;
	v->arr[1235] = anon_sym_LT_AMP;
	v->arr[1236] = anon_sym_GT_AMP;
	v->arr[1237] = anon_sym_GT_PIPE;
	v->arr[1238] = anon_sym_LT_AMP_DASH;
	v->arr[1239] = anon_sym_GT_AMP_DASH;
	v->arr[1240] = anon_sym_LT_LT_DASH;
	v->arr[1241] = aux_sym_heredoc_redirect_token1;
	v->arr[1242] = anon_sym_LT_LT_LT;
	v->arr[1243] = anon_sym_DOLLAR_LPAREN_LPAREN;
	init_small_table83(v);
}

void	init_small_table83(t_small_table *v)
{
	v->arr[1244] = anon_sym_DOLLAR_LBRACK;
	v->arr[1245] = sym__special_character;
	v->arr[1246] = sym_raw_string;
	v->arr[1247] = sym_ansi_c_string;
	v->arr[1248] = aux_sym_number_token1;
	v->arr[1249] = aux_sym_number_token2;
	v->arr[1250] = anon_sym_DOLLAR_LBRACE;
	v->arr[1251] = anon_sym_DOLLAR_LPAREN;
	v->arr[1252] = anon_sym_BQUOTE;
	v->arr[1253] = anon_sym_DOLLAR_BQUOTE;
	v->arr[1254] = anon_sym_LT_LPAREN;
	v->arr[1255] = anon_sym_GT_LPAREN;
	v->arr[1256] = sym_word;
	v->arr[1258] = 8;
	v->arr[1258] = 3;
	init_small_table84(v);
}

void	init_small_table84(t_small_table *v)
{
	v->arr[1259] = 1;
	v->arr[1260] = sym_comment;
	v->arr[1261] = 1619;
	v->arr[1262] = 1;
	v->arr[1263] = anon_sym_DQUOTE;
	v->arr[1264] = 1623;
	v->arr[1265] = 1;
	v->arr[1266] = sym_variable_name;
	v->arr[1267] = 868;
	v->arr[1268] = 1;
	v->arr[1269] = sym_string;
	v->arr[1270] = 1621;
	v->arr[1271] = 2;
	v->arr[1272] = aux_sym__simple_variable_name_token1;
	v->arr[1273] = aux_sym__multiline_variable_name_token1;
	init_small_table85(v);
}

// file funcs16.c
