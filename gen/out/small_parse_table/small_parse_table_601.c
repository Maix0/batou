/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_601.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3005(t_small_parse_table_array *v)
{
	v->a[60100] = anon_sym_BQUOTE;
	v->a[60101] = anon_sym_DOLLAR_BQUOTE;
	v->a[60102] = anon_sym_LT_LPAREN;
	v->a[60103] = anon_sym_GT_LPAREN;
	v->a[60104] = aux_sym__simple_variable_name_token1;
	v->a[60105] = sym_word;
	v->a[60106] = 3;
	v->a[60107] = actions(3);
	v->a[60108] = 1;
	v->a[60109] = sym_comment;
	v->a[60110] = actions(1263);
	v->a[60111] = 5;
	v->a[60112] = sym_file_descriptor;
	v->a[60113] = sym_test_operator;
	v->a[60114] = sym__bare_dollar;
	v->a[60115] = sym__brace_start;
	v->a[60116] = aux_sym_heredoc_redirect_token1;
	v->a[60117] = actions(1261);
	v->a[60118] = 41;
	v->a[60119] = anon_sym_LPAREN_LPAREN;
	small_parse_table_3006(v);
}

void	small_parse_table_3006(t_small_parse_table_array *v)
{
	v->a[60120] = anon_sym_SEMI;
	v->a[60121] = anon_sym_PIPE_PIPE;
	v->a[60122] = anon_sym_AMP_AMP;
	v->a[60123] = anon_sym_PIPE;
	v->a[60124] = anon_sym_AMP;
	v->a[60125] = anon_sym_EQ_EQ;
	v->a[60126] = anon_sym_LT;
	v->a[60127] = anon_sym_GT;
	v->a[60128] = anon_sym_LT_LT;
	v->a[60129] = anon_sym_GT_GT;
	v->a[60130] = anon_sym_SEMI_SEMI;
	v->a[60131] = anon_sym_SEMI_AMP;
	v->a[60132] = anon_sym_SEMI_SEMI_AMP;
	v->a[60133] = anon_sym_PIPE_AMP;
	v->a[60134] = anon_sym_EQ_TILDE;
	v->a[60135] = anon_sym_AMP_GT;
	v->a[60136] = anon_sym_AMP_GT_GT;
	v->a[60137] = anon_sym_LT_AMP;
	v->a[60138] = anon_sym_GT_AMP;
	v->a[60139] = anon_sym_GT_PIPE;
	small_parse_table_3007(v);
}

void	small_parse_table_3007(t_small_parse_table_array *v)
{
	v->a[60140] = anon_sym_LT_AMP_DASH;
	v->a[60141] = anon_sym_GT_AMP_DASH;
	v->a[60142] = anon_sym_LT_LT_DASH;
	v->a[60143] = anon_sym_LT_LT_LT;
	v->a[60144] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[60145] = anon_sym_DOLLAR_LBRACK;
	v->a[60146] = anon_sym_DOLLAR;
	v->a[60147] = sym__special_character;
	v->a[60148] = anon_sym_DQUOTE;
	v->a[60149] = sym_raw_string;
	v->a[60150] = sym_ansi_c_string;
	v->a[60151] = aux_sym_number_token1;
	v->a[60152] = aux_sym_number_token2;
	v->a[60153] = anon_sym_DOLLAR_LBRACE;
	v->a[60154] = anon_sym_DOLLAR_LPAREN;
	v->a[60155] = anon_sym_BQUOTE;
	v->a[60156] = anon_sym_DOLLAR_BQUOTE;
	v->a[60157] = anon_sym_LT_LPAREN;
	v->a[60158] = anon_sym_GT_LPAREN;
	v->a[60159] = sym_word;
	small_parse_table_3008(v);
}

void	small_parse_table_3008(t_small_parse_table_array *v)
{
	v->a[60160] = 6;
	v->a[60161] = actions(3);
	v->a[60162] = 1;
	v->a[60163] = sym_comment;
	v->a[60164] = actions(5648);
	v->a[60165] = 1;
	v->a[60166] = aux_sym_concatenation_token1;
	v->a[60167] = actions(5654);
	v->a[60168] = 1;
	v->a[60169] = sym__concat;
	v->a[60170] = state(1357);
	v->a[60171] = 1;
	v->a[60172] = aux_sym_concatenation_repeat1;
	v->a[60173] = actions(4469);
	v->a[60174] = 6;
	v->a[60175] = sym_file_descriptor;
	v->a[60176] = sym_variable_name;
	v->a[60177] = sym_test_operator;
	v->a[60178] = sym__brace_start;
	v->a[60179] = ts_builtin_sym_end;
	small_parse_table_3009(v);
}

void	small_parse_table_3009(t_small_parse_table_array *v)
{
	v->a[60180] = aux_sym_heredoc_redirect_token1;
	v->a[60181] = actions(4467);
	v->a[60182] = 37;
	v->a[60183] = anon_sym_LPAREN_LPAREN;
	v->a[60184] = anon_sym_SEMI;
	v->a[60185] = anon_sym_PIPE_PIPE;
	v->a[60186] = anon_sym_AMP_AMP;
	v->a[60187] = anon_sym_PIPE;
	v->a[60188] = anon_sym_AMP;
	v->a[60189] = anon_sym_LT;
	v->a[60190] = anon_sym_GT;
	v->a[60191] = anon_sym_LT_LT;
	v->a[60192] = anon_sym_GT_GT;
	v->a[60193] = anon_sym_SEMI_SEMI;
	v->a[60194] = anon_sym_PIPE_AMP;
	v->a[60195] = anon_sym_AMP_GT;
	v->a[60196] = anon_sym_AMP_GT_GT;
	v->a[60197] = anon_sym_LT_AMP;
	v->a[60198] = anon_sym_GT_AMP;
	v->a[60199] = anon_sym_GT_PIPE;
	small_parse_table_3010(v);
}

/* EOF small_parse_table_601.c */
