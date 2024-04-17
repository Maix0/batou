/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

bool	ts_lex(t_lexer	*lexer, t_state_id	state)
{
	t_lex_state	lex_state;

	lex_state = (t_lex_state){};
	lex_state.lex_ret = LEX_START;
	START_LEXER();
	eof = lexer->eof(lexer);
	while (lex_state.lex_ret != LEX_STOP)
	{
		if (lex_state.lex_ret & LEX_NEXT_STATE)
			lexer->advance(lexer, lex_state.skip);
		lex_state.lex_ret = LEX_STOP;
		lex_state.skip = false;
		lex_state.lookahead = lexer->lookahead;
		lex_state.lex_ret = ts_lex_func_choose(lexer, state, &lex_state);
	}
	return (lex_state.result);
}

enum e_lex_ret	ts_lex_func_0(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->eof)
		return (lex_advance(547, s));
	if (ts_lex_advence_map_0(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(545, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_1(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(401, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_2(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(417, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_3(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(418, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_4(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(419, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_5(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(6, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_6(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_6(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(6, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_7(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(403, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_8(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(421, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_9(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(422, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_10(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(404, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_11(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(406, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_12(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_12(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(12, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(807, s));
	if (('A' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_13(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(880, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_14(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(880, s));
	if (s->lookahead == '\r')
		return (lex_advance(13, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(12, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_15(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(940, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_16(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(940, s));
	if (s->lookahead == '\r')
		return (lex_advance(15, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_17(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(940, s));
	if (s->lookahead == '\r')
		return (lex_advance(15, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '\t' || '\r' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_18(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(918, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_19(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(918, s));
	if (s->lookahead == '\r')
		return (lex_advance(18, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(402, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_20(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(146, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_21(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(425, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_22(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(420, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_23(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(239, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_24(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(242, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_25(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(245, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_26(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(882, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_27(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(882, s));
	if (s->lookahead == '\r')
		return (lex_advance(26, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(219, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_28(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(248, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_29(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(884, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_30(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(884, s));
	if (s->lookahead == '\r')
		return (lex_advance(29, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(238, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_31(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(888, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_32(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(888, s));
	if (s->lookahead == '\r')
		return (lex_advance(31, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(244, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_33(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(251, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_34(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(254, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_35(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(257, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_36(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(898, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_37(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(898, s));
	if (s->lookahead == '\r')
		return (lex_advance(36, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(259, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_38(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(260, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_39(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(461, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_40(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(457, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_41(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(266, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_42(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(902, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_43(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(902, s));
	if (s->lookahead == '\r')
		return (lex_advance(42, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(265, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_44(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(424, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_45(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(904, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_46(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(904, s));
	if (s->lookahead == '\r')
		return (lex_advance(45, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(268, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_47(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(909, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_48(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(909, s));
	if (s->lookahead == '\r')
		return (lex_advance(47, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(276, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_49(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(275, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_50(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(920, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_51(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(920, s));
	if (s->lookahead == '\r')
		return (lex_advance(50, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(410, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_52(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(470, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_53(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(464, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_54(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(922, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_55(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(922, s));
	if (s->lookahead == '\r')
		return (lex_advance(54, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(412, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_56(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(460, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_57(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(913, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_58(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(913, s));
	if (s->lookahead == '\r')
		return (lex_advance(57, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(284, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_59(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(930, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_60(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(930, s));
	if (s->lookahead == '\r')
		return (lex_advance(59, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(430, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_61(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(923, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_62(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(923, s));
	if (s->lookahead == '\r')
		return (lex_advance(61, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(413, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_63(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(929, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_64(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(929, s));
	if (s->lookahead == '\r')
		return (lex_advance(63, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(429, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_65(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(466, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_66(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(927, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_67(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(927, s));
	if (s->lookahead == '\r')
		return (lex_advance(66, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(427, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_68(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(932, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_69(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(932, s));
	if (s->lookahead == '\r')
		return (lex_advance(68, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(432, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_70(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(434, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_71(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(435, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_72(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(423, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_73(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(919, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_74(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(919, s));
	if (s->lookahead == '\r')
		return (lex_advance(73, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(409, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_75(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(440, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_76(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(297, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_77(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(438, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_78(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(443, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_79(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(439, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_80(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(881, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_81(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(881, s));
	if (s->lookahead == '\r')
		return (lex_advance(80, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(200, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_82(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(83, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_83(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_83(lexer, s))
		return (s->lex_ret);
	if (s->lookahead == '\\')
		return (lex_skip(365, s));
	if (s->lookahead == '^')
		return (lex_advance(597, s));
	if (s->lookahead == '|')
		return (lex_advance(594, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(83, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_84(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_84(lexer, s))
		return (s->lex_ret);
	if (s->lookahead == '\\')
		return (lex_skip(378, s));
	if (s->lookahead == '`')
		return (lex_advance(855, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(84, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(811, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('_' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(656, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_85(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_85(lexer, s))
		return (s->lex_ret);
	if (s->lookahead == '\\')
		return (lex_skip(386, s));
	if (s->lookahead == '`')
		return (lex_advance(855, s));
	if (s->lookahead == '|')
		return (lex_advance(516, s));
	if (s->lookahead == '}')
		return (lex_advance(818, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(85, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(810, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('_' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_86(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(690, s));
	if (s->lookahead == '#')
		return (lex_advance(862, s));
	if (s->lookahead == '&')
		return (lex_advance(602, s));
	if (s->lookahead == ';')
		return (lex_advance(554, s));
	if (s->lookahead == '<')
		return (lex_advance(612, s));
	if (s->lookahead == '>')
		return (lex_advance(618, s));
	if (s->lookahead == '\\')
		return (lex_skip(379, s));
	if (s->lookahead == '`')
		return (lex_advance(510, s));
	if (s->lookahead == 'e')
		return (lex_advance(514, s));
	if (s->lookahead == '|')
		return (lex_advance(593, s));
	if (('[' <= s->lookahead && s->lookahead <= ']') || \
	('{' <= s->lookahead && s->lookahead <= '}'))
		return (lex_advance(786, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(86, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_87(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(690, s));
	if (s->lookahead == '#')
		return (lex_advance(862, s));
	if (s->lookahead == '&')
		return (lex_advance(602, s));
	if (s->lookahead == ';')
		return (lex_advance(554, s));
	if (s->lookahead == '<')
		return (lex_advance(613, s));
	if (s->lookahead == '>')
		return (lex_advance(618, s));
	if (s->lookahead == '\\')
		return (lex_skip(380, s));
	if (s->lookahead == '`')
		return (lex_advance(510, s));
	if (s->lookahead == 'e')
		return (lex_advance(514, s));
	if (s->lookahead == '|')
		return (lex_advance(593, s));
	if (('[' <= s->lookahead && s->lookahead <= ']') || \
	('{' <= s->lookahead && s->lookahead <= '}'))
		return (lex_advance(786, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(87, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_88(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(690, s));
	if (s->lookahead == '#')
		return (lex_advance(862, s));
	if (s->lookahead == '&')
		return (lex_advance(489, s));
	if (s->lookahead == '<')
		return (lex_advance(611, s));
	if (s->lookahead == '>')
		return (lex_advance(618, s));
	if (s->lookahead == '\\')
		return (lex_skip(390, s));
	if (s->lookahead == '`')
		return (lex_advance(510, s));
	if (s->lookahead == '|')
		return (lex_advance(516, s));
	if (('[' <= s->lookahead && s->lookahead <= ']') || \
	('{' <= s->lookahead && s->lookahead <= '}'))
		return (lex_advance(786, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(88, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_89(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(690, s));
	if (s->lookahead == '#')
		return (lex_advance(862, s));
	if (s->lookahead == '&')
		return (lex_advance(599, s));
	if (s->lookahead == ';')
		return (lex_advance(555, s));
	if (s->lookahead == '\\')
		return (lex_skip(394, s));
	if (s->lookahead == '`')
		return (lex_advance(510, s));
	if (s->lookahead == 'i')
		return (lex_advance(513, s));
	if (('[' <= s->lookahead && s->lookahead <= ']') || \
	s->lookahead == '{' || \
	s->lookahead == '}')
		return (lex_advance(786, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(89, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_90(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(883, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_91(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(883, s));
	if (s->lookahead == '\r')
		return (lex_advance(90, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(237, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_92(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(472, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_93(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(437, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_94(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(442, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_95(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(889, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_96(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(889, s));
	if (s->lookahead == '\r')
		return (lex_advance(95, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(246, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_97(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(891, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_98(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(891, s));
	if (s->lookahead == '\r')
		return (lex_advance(97, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(249, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_99(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(916, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_100(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(916, s));
	if (s->lookahead == '\r')
		return (lex_advance(99, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(290, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_101(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(299, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_102(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(473, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_103(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(478, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_104(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(482, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_105(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(901, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_106(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(901, s));
	if (s->lookahead == '\r')
		return (lex_advance(105, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(264, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_107(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(933, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_108(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(933, s));
	if (s->lookahead == '\r')
		return (lex_advance(107, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(444, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_109(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(926, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_110(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(926, s));
	if (s->lookahead == '\r')
		return (lex_advance(109, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(416, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_111(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(917, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_112(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(917, s));
	if (s->lookahead == '\r')
		return (lex_advance(111, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(292, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_113(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(934, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_114(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(934, s));
	if (s->lookahead == '\r')
		return (lex_advance(113, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(445, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_115(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(479, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_116(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(451, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_117(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(84, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_118(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(86, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_119(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(454, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_120(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(474, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_121(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(487, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_122(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(483, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_123(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(85, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_124(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(484, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_125(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(486, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_126(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(475, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_127(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(907, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_128(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(907, s));
	if (s->lookahead == '\r')
		return (lex_advance(127, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(273, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_129(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(88, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_130(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(455, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_131(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(937, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_132(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(937, s));
	if (s->lookahead == '\r')
		return (lex_advance(131, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(448, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_133(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(938, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_134(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(938, s));
	if (s->lookahead == '\r')
		return (lex_advance(133, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(450, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_135(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(793, s));
	if (s->lookahead == '\r')
		return (lex_advance(790, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_advance(793, s));
	if (s->lookahead != 0)
		return (lex_advance(798, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_136(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(794, s));
	if (s->lookahead == '\r')
		return (lex_advance(791, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_advance(794, s));
	if (s->lookahead != 0)
		return (lex_advance(798, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_137(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(939, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_138(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(939, s));
	if (s->lookahead == '\r')
		return (lex_advance(137, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(453, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_139(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(485, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_140(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(476, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_141(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(89, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_142(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(477, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_143(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(488, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_144(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(407, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_145(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(405, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_146(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_146(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(146, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_147(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(236, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_148(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(426, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_149(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(277, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_150(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(279, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_151(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(281, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_152(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(886, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_153(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(886, s));
	if (s->lookahead == '\r')
		return (lex_advance(152, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(241, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_154(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(283, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_155(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(890, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_156(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(890, s));
	if (s->lookahead == '\r')
		return (lex_advance(155, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(247, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_157(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(894, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_158(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(894, s));
	if (s->lookahead == '\r')
		return (lex_advance(157, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(253, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_159(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(287, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_160(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(293, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_161(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(285, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_162(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(289, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_163(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(462, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_164(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(294, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_165(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(908, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_166(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(908, s));
	if (s->lookahead == '\r')
		return (lex_advance(165, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(274, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_167(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(912, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_168(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(912, s));
	if (s->lookahead == '\r')
		return (lex_advance(167, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(282, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_169(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(298, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_170(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(921, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_171(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(921, s));
	if (s->lookahead == '\r')
		return (lex_advance(170, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(411, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_172(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(471, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_173(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(465, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_174(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(458, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_175(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(915, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_176(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(915, s));
	if (s->lookahead == '\r')
		return (lex_advance(175, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(288, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_177(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(931, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_178(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(931, s));
	if (s->lookahead == '\r')
		return (lex_advance(177, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(431, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_179(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(468, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_180(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(928, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_181(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(928, s));
	if (s->lookahead == '\r')
		return (lex_advance(180, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(428, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_182(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(885, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_183(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(885, s));
	if (s->lookahead == '\r')
		return (lex_advance(182, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(240, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_184(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(887, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_185(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(887, s));
	if (s->lookahead == '\r')
		return (lex_advance(184, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(243, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_186(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(436, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_187(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(895, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_188(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(895, s));
	if (s->lookahead == '\r')
		return (lex_advance(187, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(255, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_189(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(899, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_190(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(899, s));
	if (s->lookahead == '\r')
		return (lex_advance(189, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(261, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_191(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(300, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_192(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(903, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_193(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(903, s));
	if (s->lookahead == '\r')
		return (lex_advance(192, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(267, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_194(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(935, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_195(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(935, s));
	if (s->lookahead == '\r')
		return (lex_advance(194, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(446, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_196(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(936, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_197(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(936, s));
	if (s->lookahead == '\r')
		return (lex_advance(196, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(447, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_198(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(87, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_199(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(408, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_200(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_200(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(200, s));
	if (('1' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_201(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(892, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_202(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(892, s));
	if (s->lookahead == '\r')
		return (lex_advance(201, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(250, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_203(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(291, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_204(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(295, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_205(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(296, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_206(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(911, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_207(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(911, s));
	if (s->lookahead == '\r')
		return (lex_advance(206, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(280, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_208(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(467, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_209(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(463, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_210(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(893, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_211(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(893, s));
	if (s->lookahead == '\r')
		return (lex_advance(210, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(252, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_212(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(905, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_213(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(905, s));
	if (s->lookahead == '\r')
		return (lex_advance(212, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(270, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_214(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(896, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_215(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(896, s));
	if (s->lookahead == '\r')
		return (lex_advance(214, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(256, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_216(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(459, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_217(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(897, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_218(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(897, s));
	if (s->lookahead == '\r')
		return (lex_advance(217, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(258, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_219(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_219(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(219, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(807, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || '*' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_220(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(263, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_221(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(900, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_222(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(900, s));
	if (s->lookahead == '\r')
		return (lex_advance(221, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(262, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_223(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(269, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_224(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(272, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_225(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(906, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_226(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(906, s));
	if (s->lookahead == '\r')
		return (lex_advance(225, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(271, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_227(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(910, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_228(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(910, s));
	if (s->lookahead == '\r')
		return (lex_advance(227, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(278, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_229(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(469, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_230(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(924, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_231(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(924, s));
	if (s->lookahead == '\r')
		return (lex_advance(230, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(414, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_232(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(914, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_233(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(914, s));
	if (s->lookahead == '\r')
		return (lex_advance(232, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(286, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_234(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(925, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_235(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(925, s));
	if (s->lookahead == '\r')
		return (lex_advance(234, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(415, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_236(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_236(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(236, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_237(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_237(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(237, s));
	if (('1' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_238(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_238(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(238, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(807, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || '*' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_239(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_239(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(239, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || ')' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_240(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_240(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(240, s));
	if (('1' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_241(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_241(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(241, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(807, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || '*' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_242(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_242(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(242, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || ')' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_243(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_243(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(243, s));
	if (('1' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_244(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_244(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(244, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(807, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_245(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_245(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(245, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_246(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_246(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(246, s));
	if (('1' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_247(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_247(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(247, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(807, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || '*' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_248(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_248(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(248, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(806, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('_' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(868, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || ')' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_249(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_249(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(249, s));
	if (('1' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_250(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_250(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(250, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(807, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || '*' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_251(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_251(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(251, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(806, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('_' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(868, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || ')' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_252(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_252(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(252, s));
	if (('1' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_253(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_253(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(253, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(807, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_254(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_254(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(254, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(806, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('_' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(868, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_255(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_255(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(255, s));
	if (('1' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_256(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_256(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(256, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(807, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || '*' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_257(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_257(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(257, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || ')' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_258(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_258(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(258, s));
	if (('1' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_259(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_259(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(259, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(807, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || '*' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_260(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_260(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(260, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || ')' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_261(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_261(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(261, s));
	if (('1' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_262(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_262(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(262, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(807, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || '*' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_263(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_263(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(263, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || ')' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_264(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_264(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(264, s));
	if (('1' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_265(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_265(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(265, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(807, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || '*' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_266(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_266(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(266, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_267(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_267(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(267, s));
	if (('1' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_268(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_268(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(268, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(807, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_269(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_269(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(269, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || ')' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_270(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_270(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(270, s));
	if (('1' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_271(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_271(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(271, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(807, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || '*' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_272(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_272(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(272, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_273(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_273(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(273, s));
	if (('1' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_274(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_274(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(274, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(807, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || '*' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_275(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_275(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(275, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || ')' < s->lookahead) && \
	s->lookahead != ';' && \
	s->lookahead != '<')
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_276(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_276(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(276, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(807, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || '*' < s->lookahead) && \
	(s->lookahead < ';' || ']' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_277(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_277(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(277, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || ')' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_278(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_278(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(278, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(807, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_279(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_279(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(279, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || ')' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_280(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_280(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(280, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(807, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || '*' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_281(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_281(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(281, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_282(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_282(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(282, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(807, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || '*' < s->lookahead) && \
	(s->lookahead < ';' || ']' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_283(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_283(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(283, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(806, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('_' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(868, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || ')' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_284(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_284(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(284, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(807, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || '*' < s->lookahead) && \
	s->lookahead != ';' && \
	s->lookahead != '<')
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_285(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_285(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(285, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || ')' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_286(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_286(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(286, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(807, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || '*' < s->lookahead) && \
	s->lookahead != ';' && \
	s->lookahead != '<')
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_287(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_287(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(287, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(806, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('_' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(868, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || ')' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_288(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_288(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(288, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(807, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || '*' < s->lookahead) && \
	s->lookahead != ';' && \
	s->lookahead != '<')
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_289(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_289(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(289, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || ')' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_290(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_290(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(290, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(807, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || '*' < s->lookahead) && \
	(s->lookahead < '_' || '}' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_291(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_291(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(291, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || ')' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_292(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_292(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(292, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(807, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || '*' < s->lookahead) && \
	s->lookahead != ';' && \
	s->lookahead != '<' && \
	(s->lookahead < '_' || '}' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_293(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_293(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(293, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(806, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('_' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(868, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_294(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_294(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(294, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_295(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_295(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(295, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || ')' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_296(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_296(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(296, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_297(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_297(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(297, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || ')' < s->lookahead) && \
	(s->lookahead < '{' || '}' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_298(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_298(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(298, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || ')' < s->lookahead) && \
	s->lookahead != ';' && \
	s->lookahead != '<')
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_299(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_299(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(299, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || ')' < s->lookahead) && \
	(s->lookahead < '{' || '}' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_300(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_300(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(300, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || ')' < s->lookahead) && \
	(s->lookahead < '{' || '}' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_301(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(1, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(401, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_302(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_advance(789, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_advance(795, s));
	if (s->lookahead != 0)
		return (lex_advance(798, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_303(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_advance(799, s));
	if (s->lookahead != 0)
		return (lex_advance(798, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_304(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(2, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(417, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_305(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(3, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(418, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_306(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(4, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(419, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_307(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(5, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(6, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_308(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(7, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(403, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_309(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(8, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(421, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_310(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(9, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(422, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_311(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(10, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(404, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_312(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(144, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(407, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_313(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(11, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(406, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_314(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(145, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(405, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_315(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(199, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(408, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_316(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(20, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(146, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_317(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(147, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(236, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_318(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(21, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(425, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_319(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(148, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(426, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_320(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(22, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(420, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_321(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(23, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(239, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_322(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(24, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(242, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_323(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(25, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(245, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_324(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(28, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(248, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_325(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(33, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(251, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_326(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(34, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(254, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_327(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(35, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(257, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_328(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(38, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(260, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_329(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(39, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(461, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_330(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(40, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(457, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_331(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(41, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(266, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_332(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(44, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(424, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_333(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(49, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(275, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_334(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(52, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(470, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_335(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(149, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(277, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_336(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(53, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(464, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_337(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(150, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(279, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_338(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(56, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(460, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_339(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(151, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(281, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_340(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(174, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(458, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_341(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(154, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(283, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_342(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(65, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(466, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_343(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(161, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(285, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_344(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(159, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(287, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_345(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(70, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(434, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_346(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(162, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(289, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_347(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(203, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(291, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_348(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(71, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(435, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_349(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(160, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(293, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_350(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(164, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(294, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_351(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(204, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(295, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_352(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(72, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(423, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_353(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(163, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(462, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_354(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(205, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(296, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_355(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(173, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(465, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_356(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(75, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(440, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_357(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(76, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(297, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_358(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(209, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(463, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_359(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(172, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(471, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_360(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(77, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(438, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_361(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(78, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(443, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_362(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(79, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(439, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_363(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(208, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(467, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_364(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(179, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(468, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_365(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(82, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(83, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_366(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(92, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(472, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_367(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(93, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(437, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_368(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(94, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(442, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_369(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(186, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(436, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_370(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(169, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(298, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_371(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(216, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(459, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_372(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(101, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(299, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_373(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(102, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(473, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_374(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(103, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(478, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_375(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(104, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(482, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_376(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(115, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(479, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_377(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(116, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(451, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_378(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(117, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(84, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_379(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(118, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(86, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_380(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(198, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(87, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_381(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(191, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(300, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_382(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(119, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(454, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_383(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(120, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(474, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_384(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(121, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(487, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_385(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(122, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(483, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_386(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(123, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(85, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_387(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(124, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(484, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_388(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(125, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(486, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_389(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(126, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(475, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_390(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(129, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(88, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_391(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(130, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(455, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_392(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(139, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(485, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_393(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(140, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(476, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_394(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(141, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(89, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_395(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(142, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(477, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_396(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(143, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(488, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_397(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(220, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(263, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_398(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(223, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(269, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_399(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(224, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(272, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_400(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(229, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(469, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_401(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_401(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(401, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_402(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_402(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(402, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(807, s));
	if (('A' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if (s->lookahead != 0 && \
	(s->lookahead < ' ' || '+' < s->lookahead) && \
	(s->lookahead < ';' || '}' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_403(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_403(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(403, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if (s->lookahead != 0 && \
	(s->lookahead < ' ' || '+' < s->lookahead) && \
	(s->lookahead < ';' || '?' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_404(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_404(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(404, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if (s->lookahead != 0 && \
	(s->lookahead < ';' || '?' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_405(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_405(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(405, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if (s->lookahead != 0 && \
	(s->lookahead < ';' || '?' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_406(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_406(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(406, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if (s->lookahead != 0 && \
	(s->lookahead < ' ' || '+' < s->lookahead) && \
	(s->lookahead < '/' || '?' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_407(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_407(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(407, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if (s->lookahead != 0 && \
	(s->lookahead < ' ' || '+' < s->lookahead) && \
	(s->lookahead < ';' || '?' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_408(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_408(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(408, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if (s->lookahead != 0 && \
	(s->lookahead < ' ' || '+' < s->lookahead) && \
	(s->lookahead < ';' || '?' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_409(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_409(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(409, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(807, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || '*' < s->lookahead) && \
	s->lookahead != ';' && \
	s->lookahead != '<' && \
	(s->lookahead < '_' || '}' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_410(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_410(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(410, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(807, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || '*' < s->lookahead) && \
	(s->lookahead < ';' || ']' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_411(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_411(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(411, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(807, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || '*' < s->lookahead) && \
	(s->lookahead < ';' || ']' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_412(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_412(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(412, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(807, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || '*' < s->lookahead) && \
	s->lookahead != ';' && \
	s->lookahead != '<')
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_413(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_413(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(413, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(807, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || '*' < s->lookahead) && \
	s->lookahead != ';' && \
	s->lookahead != '<')
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_414(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_414(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(414, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(807, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || '*' < s->lookahead) && \
	s->lookahead != ';' && \
	s->lookahead != '<')
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_415(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_415(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(415, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(807, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || '*' < s->lookahead) && \
	s->lookahead != ';' && \
	s->lookahead != '<')
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_416(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_416(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(416, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(807, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || '*' < s->lookahead) && \
	s->lookahead != ';' && \
	s->lookahead != '<' && \
	(s->lookahead < '_' || '}' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_417(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_417(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(417, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_418(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_418(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(418, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if (s->lookahead != 0 && \
	s->lookahead != ';' && \
	s->lookahead != '<')
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_419(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_419(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(419, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || ')' < s->lookahead) && \
	s->lookahead != ';' && \
	s->lookahead != '<' && \
	(s->lookahead < '{' || '~' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_420(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_420(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(420, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || ')' < s->lookahead) && \
	s->lookahead != ';' && \
	s->lookahead != '<' && \
	(s->lookahead < '{' || '~' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_421(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_421(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(421, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || ')' < s->lookahead) && \
	(s->lookahead < '{' || '}' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_422(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_422(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(422, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || ')' < s->lookahead) && \
	s->lookahead != ';' && \
	s->lookahead != '<' && \
	(s->lookahead < '{' || '}' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_423(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_423(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(423, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || ')' < s->lookahead) && \
	s->lookahead != ';' && \
	s->lookahead != '<' && \
	(s->lookahead < '{' || '~' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_424(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_424(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(424, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(806, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('_' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(868, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || ')' < s->lookahead) && \
	s->lookahead != ';' && \
	s->lookahead != '<' && \
	(s->lookahead < '_' || '~' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_425(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_425(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(425, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if (s->lookahead != 0 && \
	(s->lookahead < ' ' || '+' < s->lookahead) && \
	(s->lookahead < ';' || '?' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_426(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_426(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(426, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if (s->lookahead != 0 && \
	(s->lookahead < ' ' || '+' < s->lookahead) && \
	(s->lookahead < ';' || '?' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_427(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_427(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(427, s));
	if (('1' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_428(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_428(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(428, s));
	if (('1' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_429(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_429(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(429, s));
	if (('1' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_430(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_430(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(430, s));
	if (('1' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_431(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_431(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(431, s));
	if (('1' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_432(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_432(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(432, s));
	if (('1' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_433(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_433(lexer, s))
		return (s->lex_ret);
	if (s->lookahead == '\\')
		return (lex_skip(345, s));
	if (s->lookahead == ']')
		return (lex_advance(509, s));
	if (s->lookahead == '^')
		return (lex_advance(597, s));
	if (s->lookahead == '`')
		return (lex_advance(855, s));
	if (s->lookahead == 'e')
		return (lex_advance(514, s));
	if (s->lookahead == 'i')
		return (lex_advance(513, s));
	if (s->lookahead == '|')
		return (lex_advance(594, s));
	if (s->lookahead == '}')
		return (lex_advance(818, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(434, s));
	if (('0' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(775, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_434(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_434(lexer, s))
		return (s->lex_ret);
	if (s->lookahead == '\\')
		return (lex_skip(345, s));
	if (s->lookahead == ']')
		return (lex_advance(509, s));
	if (s->lookahead == '^')
		return (lex_advance(597, s));
	if (s->lookahead == '`')
		return (lex_advance(855, s));
	if (s->lookahead == 'e')
		return (lex_advance(514, s));
	if (s->lookahead == 'i')
		return (lex_advance(513, s));
	if (s->lookahead == '|')
		return (lex_advance(594, s));
	if (s->lookahead == '}')
		return (lex_advance(818, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(434, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_435(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_435(lexer, s))
		return (s->lex_ret);
	if (s->lookahead == '\\')
		return (lex_skip(348, s));
	if (s->lookahead == ']')
		return (lex_advance(675, s));
	if (s->lookahead == '^')
		return (lex_advance(597, s));
	if (s->lookahead == '`')
		return (lex_advance(855, s));
	if (s->lookahead == '|')
		return (lex_advance(594, s));
	if (s->lookahead == '[' || \
	('{' <= s->lookahead && s->lookahead <= '}'))
		return (lex_advance(786, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(435, s));
	if (('0' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_436(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_436(lexer, s))
		return (s->lex_ret);
	if (s->lookahead == '\\')
		return (lex_skip(369, s));
	if (s->lookahead == '^')
		return (lex_advance(597, s));
	if (s->lookahead == '|')
		return (lex_advance(594, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(436, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_437(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_437(lexer, s))
		return (s->lex_ret);
	if (s->lookahead == '\\')
		return (lex_skip(367, s));
	if (s->lookahead == ']')
		return (lex_advance(675, s));
	if (s->lookahead == '^')
		return (lex_advance(597, s));
	if (s->lookahead == '`')
		return (lex_advance(510, s));
	if (s->lookahead == '|')
		return (lex_advance(594, s));
	if (s->lookahead == '}')
		return (lex_advance(818, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(437, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_438(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_438(lexer, s))
		return (s->lex_ret);
	if (s->lookahead == '\\')
		return (lex_skip(360, s));
	if (s->lookahead == ']')
		return (lex_advance(675, s));
	if (s->lookahead == '^')
		return (lex_advance(597, s));
	if (s->lookahead == '`')
		return (lex_advance(510, s));
	if (s->lookahead == '|')
		return (lex_advance(594, s));
	if (s->lookahead == '[' || \
	('{' <= s->lookahead && s->lookahead <= '}'))
		return (lex_advance(786, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(438, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_439(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_439(lexer, s))
		return (s->lex_ret);
	if (s->lookahead == '\\')
		return (lex_skip(362, s));
	if (s->lookahead == '^')
		return (lex_advance(597, s));
	if (s->lookahead == '`')
		return (lex_advance(510, s));
	if (s->lookahead == '|')
		return (lex_advance(594, s));
	if (('[' <= s->lookahead && s->lookahead <= ']') || \
	('{' <= s->lookahead && s->lookahead <= '}'))
		return (lex_advance(786, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(439, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_440(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_440(lexer, s))
		return (s->lex_ret);
	if (s->lookahead == '\\')
		return (lex_skip(356, s));
	if (s->lookahead == ']')
		return (lex_advance(787, s));
	if (s->lookahead == '^')
		return (lex_advance(597, s));
	if (s->lookahead == '`')
		return (lex_advance(510, s));
	if (s->lookahead == '|')
		return (lex_advance(594, s));
	if (s->lookahead == '[' || \
	('{' <= s->lookahead && s->lookahead <= '}'))
		return (lex_advance(786, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(440, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_441(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_441(lexer, s))
		return (s->lex_ret);
	if (s->lookahead == '\\')
		return (lex_skip(368, s));
	if (s->lookahead == '^')
		return (lex_advance(597, s));
	if (s->lookahead == '|')
		return (lex_advance(594, s));
	if (s->lookahead == '}')
		return (lex_advance(778, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(442, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_442(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_442(lexer, s))
		return (s->lex_ret);
	if (s->lookahead == '\\')
		return (lex_skip(368, s));
	if (s->lookahead == '^')
		return (lex_advance(597, s));
	if (s->lookahead == '|')
		return (lex_advance(594, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(442, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_443(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_443(lexer, s))
		return (s->lex_ret);
	if (s->lookahead == '\\')
		return (lex_skip(361, s));
	if (s->lookahead == '^')
		return (lex_advance(597, s));
	if (s->lookahead == '`')
		return (lex_advance(510, s));
	if (s->lookahead == '|')
		return (lex_advance(594, s));
	if (('[' <= s->lookahead && s->lookahead <= ']') || \
	('{' <= s->lookahead && s->lookahead <= '}'))
		return (lex_advance(786, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(443, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_444(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_444(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(444, s));
	if (('1' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_445(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_445(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(445, s));
	if (('1' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_446(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_446(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(446, s));
	if (('1' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_447(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_447(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(447, s));
	if (('1' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_448(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_448(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(448, s));
	if (('1' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_449(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_449(lexer, s))
		return (s->lex_ret);
	if (s->lookahead == '\n' || \
	s->lookahead == '\r')
		return (lex_skip(449, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_advance(793, s));
	if (('1' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '_' || 'z' < s->lookahead))
		return (lex_advance(798, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_450(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_450(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(450, s));
	if (('1' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_451(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_451(lexer, s))
		return (s->lex_ret);
	if (s->lookahead == '\\')
		return (lex_skip(377, s));
	if (s->lookahead == ']')
		return (lex_advance(675, s));
	if (s->lookahead == '`')
		return (lex_advance(855, s));
	if (s->lookahead == '|')
		return (lex_advance(593, s));
	if (s->lookahead == '~')
		return (lex_advance(772, s));
	if (s->lookahead == '[' || \
	('{' <= s->lookahead && s->lookahead <= '}'))
		return (lex_advance(786, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(451, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(810, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('_' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_452(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_452(lexer, s))
		return (s->lex_ret);
	if (s->lookahead == '\n' || \
	s->lookahead == '\r')
		return (lex_skip(452, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_advance(794, s));
	if (('1' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	if (s->lookahead != 0 && \
	(s->lookahead < ' ' || '$' < s->lookahead) && \
	(s->lookahead < '_' || 'z' < s->lookahead))
		return (lex_advance(798, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_453(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_453(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(453, s));
	if (('1' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_454(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_454(lexer, s))
		return (s->lex_ret);
	if (s->lookahead == '\\')
		return (lex_skip(382, s));
	if (s->lookahead == '_')
		return (lex_advance(948, s));
	if (s->lookahead == '`')
		return (lex_advance(855, s));
	if (s->lookahead == '}')
		return (lex_advance(818, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(454, s));
	if (('1' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_455(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_455(lexer, s))
		return (s->lex_ret);
	if (s->lookahead == '\\')
		return (lex_skip(391, s));
	if (s->lookahead == '_')
		return (lex_advance(948, s));
	if (s->lookahead == '`')
		return (lex_advance(855, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(455, s));
	if (('1' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_456(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_456(lexer, s))
		return (s->lex_ret);
	if (s->lookahead == '\\')
		return (lex_skip(382, s));
	if (s->lookahead == '_')
		return (lex_advance(948, s));
	if (s->lookahead == '`')
		return (lex_advance(855, s));
	if (s->lookahead == '}')
		return (lex_advance(818, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(454, s));
	if (('1' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_457(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_457(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(457, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || ')' < s->lookahead) && \
	s->lookahead != ';' && \
	s->lookahead != '<' && \
	(s->lookahead < '{' || '}' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_458(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_458(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(458, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if (s->lookahead != 0 && \
	s->lookahead != ';' && \
	s->lookahead != '<')
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_459(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_459(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(459, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if (s->lookahead != 0 && \
	s->lookahead != ';' && \
	s->lookahead != '<')
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_460(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_460(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(460, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if (s->lookahead != 0 && \
	s->lookahead != ';' && \
	s->lookahead != '<')
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_461(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_461(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(461, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || ')' < s->lookahead) && \
	(s->lookahead < ';' || '>' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_462(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_462(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(462, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || ')' < s->lookahead) && \
	(s->lookahead < ';' || '>' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_463(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_463(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(463, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if (s->lookahead != 0 && \
	s->lookahead != ';' && \
	s->lookahead != '<')
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_464(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_464(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(464, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || ')' < s->lookahead) && \
	s->lookahead != ';' && \
	s->lookahead != '<')
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_465(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_465(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(465, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || ')' < s->lookahead) && \
	s->lookahead != ';' && \
	s->lookahead != '<')
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_466(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_466(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(466, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || ')' < s->lookahead) && \
	s->lookahead != ';' && \
	s->lookahead != '<')
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_467(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_467(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(467, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || ')' < s->lookahead) && \
	s->lookahead != ';' && \
	s->lookahead != '<')
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_468(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_468(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(468, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || ')' < s->lookahead) && \
	s->lookahead != ';' && \
	s->lookahead != '<')
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_469(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_469(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(469, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || ')' < s->lookahead) && \
	s->lookahead != ';' && \
	s->lookahead != '<')
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_470(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_470(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(470, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(806, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('_' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(868, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || ')' < s->lookahead) && \
	s->lookahead != ';' && \
	s->lookahead != '<')
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_471(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_471(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(471, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(806, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('_' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(868, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || ')' < s->lookahead) && \
	s->lookahead != ';' && \
	s->lookahead != '<')
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_472(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_472(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(472, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || ')' < s->lookahead) && \
	s->lookahead != ';' && \
	s->lookahead != '<' && \
	(s->lookahead < '{' || '}' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_473(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_473(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(473, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || ')' < s->lookahead) && \
	s->lookahead != ';' && \
	s->lookahead != '<' && \
	(s->lookahead < '{' || '}' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_474(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_474(lexer, s))
		return (s->lex_ret);
	if (s->lookahead == '\\')
		return (lex_skip(383, s));
	if (s->lookahead == ']')
		return (lex_advance(675, s));
	if (s->lookahead == '`')
		return (lex_advance(855, s));
	if (s->lookahead == '|')
		return (lex_advance(593, s));
	if (s->lookahead == '[' || \
	('{' <= s->lookahead && s->lookahead <= '}'))
		return (lex_advance(786, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(474, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(811, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('_' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(656, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_475(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_475(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(475, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || ')' < s->lookahead) && \
	(s->lookahead < '[' || ']' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_476(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_476(lexer, s))
		return (s->lex_ret);
	if (s->lookahead == '\\')
		return (lex_skip(393, s));
	if (s->lookahead == '`')
		return (lex_advance(855, s));
	if (s->lookahead == '}')
		return (lex_advance(818, s));
	if (('[' <= s->lookahead && s->lookahead <= ']') || \
	s->lookahead == '{')
		return (lex_advance(786, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(476, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_477(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '"')
		return (lex_advance(788, s));
	if (s->lookahead == '#')
		return (lex_advance(862, s));
	if (s->lookahead == '\'')
		return (lex_advance(491, s));
	if (s->lookahead == ')')
		return (lex_advance(655, s));
	if (s->lookahead == '\\')
		return (lex_skip(395, s));
	if (s->lookahead == '}')
		return (lex_advance(818, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_advance(842, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_478(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_478(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(478, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || ')' < s->lookahead) && \
	s->lookahead != ';' && \
	s->lookahead != '<' && \
	(s->lookahead < '{' || '}' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_479(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_479(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(479, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || ')' < s->lookahead) && \
	s->lookahead != ';' && \
	s->lookahead != '<' && \
	(s->lookahead < '{' || '}' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_480(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '"')
		return (lex_advance(788, s));
	if (s->lookahead == '#')
		return (lex_advance(797, s));
	if (s->lookahead == '$')
		return (lex_advance(783, s));
	if (s->lookahead == '(')
		return (lex_advance(796, s));
	if (s->lookahead == '\\')
		return (lex_advance(302, s));
	if (s->lookahead == '`')
		return (lex_advance(855, s));
	if (s->lookahead == '\n' || \
	s->lookahead == '\r')
		return (lex_skip(480, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_advance(795, s));
	if (s->lookahead != 0)
		return (lex_advance(798, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_481(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_481(lexer, s))
		return (s->lex_ret);
	if (s->lookahead == '\\')
		return (lex_skip(375, s));
	if (s->lookahead == '^')
		return (lex_advance(598, s));
	if (s->lookahead == '}')
		return (lex_advance(818, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(482, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_482(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '#')
		return (lex_advance(816, s));
	if (s->lookahead == '%')
		return (lex_advance(648, s));
	if (s->lookahead == ',')
		return (lex_advance(558, s));
	if (s->lookahead == '/')
		return (lex_advance(643, s));
	if (s->lookahead == ':')
		return (lex_advance(762, s));
	if (s->lookahead == '[')
		return (lex_advance(673, s));
	if (s->lookahead == '\\')
		return (lex_skip(375, s));
	if (s->lookahead == '^')
		return (lex_advance(598, s));
	if (s->lookahead == '}')
		return (lex_advance(818, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(482, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_483(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '#')
		return (lex_advance(862, s));
	if (s->lookahead == '$')
		return (lex_advance(515, s));
	if (s->lookahead == '&')
		return (lex_advance(489, s));
	if (s->lookahead == '-')
		return (lex_advance(504, s));
	if (s->lookahead == '0')
		return (lex_advance(808, s));
	if (s->lookahead == '<')
		return (lex_advance(613, s));
	if (s->lookahead == '>')
		return (lex_advance(618, s));
	if (s->lookahead == '\\')
		return (lex_skip(385, s));
	if (s->lookahead == ']')
		return (lex_advance(675, s));
	if (s->lookahead == '`')
		return (lex_advance(510, s));
	if (s->lookahead == '|')
		return (lex_advance(593, s));
	if (s->lookahead == '[' || \
	('{' <= s->lookahead && s->lookahead <= '}'))
		return (lex_advance(786, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(483, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(810, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('_' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_484(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_484(lexer, s))
		return (s->lex_ret);
	if (s->lookahead == '\\')
		return (lex_skip(387, s));
	if (s->lookahead == '`')
		return (lex_advance(510, s));
	if (s->lookahead == '|')
		return (lex_advance(593, s));
	if (('[' <= s->lookahead && s->lookahead <= ']') || \
	('{' <= s->lookahead && s->lookahead <= '}'))
		return (lex_advance(786, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(484, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_485(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_485(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(485, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '"' || '$' < s->lookahead) && \
	(s->lookahead < '&' || ')' < s->lookahead) && \
	s->lookahead != ';' && \
	s->lookahead != '<' && \
	(s->lookahead < '[' || ']' < s->lookahead) && \
	s->lookahead != '`' && \
	(s->lookahead < '{' || '}' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_486(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '#')
		return (lex_advance(862, s));
	if (s->lookahead == '&')
		return (lex_advance(489, s));
	if (s->lookahead == '<')
		return (lex_advance(612, s));
	if (s->lookahead == '>')
		return (lex_advance(618, s));
	if (s->lookahead == '\\')
		return (lex_skip(388, s));
	if (s->lookahead == '`')
		return (lex_advance(510, s));
	if (s->lookahead == '|')
		return (lex_advance(593, s));
	if (('[' <= s->lookahead && s->lookahead <= ']') || \
	('{' <= s->lookahead && s->lookahead <= '}'))
		return (lex_advance(786, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(486, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_487(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_487(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(487, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '"' || '$' < s->lookahead) && \
	(s->lookahead < '&' || ')' < s->lookahead) && \
	s->lookahead != ';' && \
	s->lookahead != '<')
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_488(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '#')
		return (lex_advance(862, s));
	if (s->lookahead == '+')
		return (lex_advance(507, s));
	if (s->lookahead == '/')
		return (lex_advance(641, s));
	if (s->lookahead == '=')
		return (lex_advance(559, s));
	if (s->lookahead == '[')
		return (lex_advance(673, s));
	if (s->lookahead == '\\')
		return (lex_skip(396, s));
	if (s->lookahead == '`')
		return (lex_advance(510, s));
	if (s->lookahead == '}')
		return (lex_advance(818, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(488, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_489(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '&')
		return (lex_advance(588, s));
	if (s->lookahead == '>')
		return (lex_advance(680, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_490(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '&')
		return (lex_advance(664, s));
	if (s->lookahead == ';')
		return (lex_advance(663, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_491(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\'')
		return (lex_advance(800, s));
	if (s->lookahead != 0)
		return (lex_advance(491, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_492(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\'')
		return (lex_advance(801, s));
	if (s->lookahead == '\\')
		return (lex_advance(493, s));
	if (s->lookahead != 0)
		return (lex_advance(492, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_493(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\'')
		return (lex_advance(802, s));
	if (s->lookahead == '\\')
		return (lex_advance(493, s));
	if (s->lookahead != 0)
		return (lex_advance(492, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_494(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '(')
		return (lex_advance(551, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_495(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '(')
		return (lex_advance(858, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_496(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '(')
		return (lex_advance(859, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_497(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '(')
		return (lex_advance(853, s));
	if (s->lookahead == '`')
		return (lex_advance(857, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_498(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '(')
		return (lex_advance(853, s));
	if (s->lookahead == '`')
		return (lex_advance(857, s));
	if (s->lookahead == '{')
		return (lex_advance(817, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_499(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == ')')
		return (lex_advance(552, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_500(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '+')
		return (lex_advance(564, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_501(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '+')
		return (lex_advance(564, s));
	if (s->lookahead == '=')
		return (lex_advance(568, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_502(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '-')
		return (lex_advance(566, s));
	if (s->lookahead == '0')
		return (lex_advance(809, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(811, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_503(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '.')
		return (lex_advance(776, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_504(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '0')
		return (lex_advance(809, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(811, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_505(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '<')
		return (lex_advance(759, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_506(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '=')
		return (lex_advance(605, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_507(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '=')
		return (lex_advance(568, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_508(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '>')
		return (lex_advance(680, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_509(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == ']')
		return (lex_advance(677, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_510(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '`')
		return (lex_advance(779, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_advance(510, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_511(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'a')
		return (lex_advance(512, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_512(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'c')
		return (lex_advance(657, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_513(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'n')
		return (lex_advance(548, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_514(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 's')
		return (lex_advance(511, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_515(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '{')
		return (lex_advance(817, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_516(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '|')
		return (lex_advance(586, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_517(t_lexer	*lexer, t_lex_state	*s)
{
	if (('0' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(811, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_518(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead != 0 && \
	(s->lookahead < '\t' || '\r' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_519(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->eof)
		return (lex_advance(547, s));
	if (s->lookahead == '\n')
		return (lex_advance(690, s));
	if (s->lookahead == '#')
		return (lex_advance(862, s));
	if (s->lookahead == '&')
		return (lex_advance(602, s));
	if (s->lookahead == ')')
		return (lex_advance(655, s));
	if (s->lookahead == ';')
		return (lex_advance(555, s));
	if (s->lookahead == '<')
		return (lex_advance(612, s));
	if (s->lookahead == '>')
		return (lex_advance(618, s));
	if (s->lookahead == '\\')
		return (lex_skip(542, s));
	if (s->lookahead == '`')
		return (lex_advance(856, s));
	if (s->lookahead == '|')
		return (lex_advance(593, s));
	if (('[' <= s->lookahead && s->lookahead <= ']') || \
	('{' <= s->lookahead && s->lookahead <= '}'))
		return (lex_advance(786, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(519, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_520(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->eof)
		return (lex_advance(547, s));
	if (s->lookahead == '\n')
		return (lex_advance(690, s));
	if (s->lookahead == '#')
		return (lex_advance(862, s));
	if (s->lookahead == '&')
		return (lex_advance(602, s));
	if (s->lookahead == ')')
		return (lex_advance(655, s));
	if (s->lookahead == ';')
		return (lex_advance(555, s));
	if (s->lookahead == '<')
		return (lex_advance(612, s));
	if (s->lookahead == '>')
		return (lex_advance(618, s));
	if (s->lookahead == '\\')
		return (lex_skip(544, s));
	if (s->lookahead == '`')
		return (lex_advance(855, s));
	if (s->lookahead == '|')
		return (lex_advance(593, s));
	if (('[' <= s->lookahead && s->lookahead <= ']') || \
	('{' <= s->lookahead && s->lookahead <= '}'))
		return (lex_advance(786, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(520, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_521(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->eof)
		return (lex_advance(547, s));
	if (s->lookahead == '\n')
		return (lex_advance(690, s));
	if (s->lookahead == '#')
		return (lex_advance(862, s));
	if (s->lookahead == '&')
		return (lex_advance(602, s));
	if (s->lookahead == ')')
		return (lex_advance(655, s));
	if (s->lookahead == ';')
		return (lex_advance(555, s));
	if (s->lookahead == '<')
		return (lex_advance(613, s));
	if (s->lookahead == '>')
		return (lex_advance(618, s));
	if (s->lookahead == '\\')
		return (lex_skip(541, s));
	if (s->lookahead == '`')
		return (lex_advance(856, s));
	if (s->lookahead == '|')
		return (lex_advance(593, s));
	if (('[' <= s->lookahead && s->lookahead <= ']') || \
	('{' <= s->lookahead && s->lookahead <= '}'))
		return (lex_advance(786, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(521, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_522(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->eof)
		return (lex_advance(547, s));
	if (s->lookahead == '\n')
		return (lex_advance(690, s));
	if (s->lookahead == '#')
		return (lex_advance(862, s));
	if (s->lookahead == '&')
		return (lex_advance(602, s));
	if (s->lookahead == ')')
		return (lex_advance(655, s));
	if (s->lookahead == ';')
		return (lex_advance(555, s));
	if (s->lookahead == '<')
		return (lex_advance(613, s));
	if (s->lookahead == '>')
		return (lex_advance(618, s));
	if (s->lookahead == '\\')
		return (lex_skip(543, s));
	if (s->lookahead == '`')
		return (lex_advance(855, s));
	if (s->lookahead == '|')
		return (lex_advance(593, s));
	if (('[' <= s->lookahead && s->lookahead <= ']') || \
	('{' <= s->lookahead && s->lookahead <= '}'))
		return (lex_advance(786, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(522, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_523(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->eof)
		return (lex_advance(547, s));
	if (s->lookahead == '\n')
		return (lex_skip(521, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_524(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->eof)
		return (lex_advance(547, s));
	if (s->lookahead == '\n')
		return (lex_skip(519, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_525(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->eof)
		return (lex_advance(547, s));
	if (s->lookahead == '\n')
		return (lex_skip(522, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_526(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->eof)
		return (lex_advance(547, s));
	if (s->lookahead == '\n')
		return (lex_skip(520, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_527(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->eof)
		return (lex_advance(547, s));
	if (ts_lex_advence_map_527(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(527, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_528(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->eof)
		return (lex_advance(547, s));
	if (ts_lex_advence_map_528(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(528, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(807, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || '*' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_529(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->eof)
		return (lex_advance(547, s));
	if (ts_lex_advence_map_529(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(529, s));
	if (('1' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_530(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->eof)
		return (lex_advance(547, s));
	if (ts_lex_advence_map_530(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(530, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(806, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('_' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(868, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_531(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->eof)
		return (lex_advance(547, s));
	if (ts_lex_advence_map_531(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(531, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(807, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || '*' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_532(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->eof)
		return (lex_advance(547, s));
	if (ts_lex_advence_map_532(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(532, s));
	if (('1' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_533(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->eof)
		return (lex_advance(547, s));
	if (ts_lex_advence_map_533(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(533, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_534(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->eof)
		return (lex_advance(547, s));
	if (ts_lex_advence_map_534(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(534, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_535(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->eof)
		return (lex_advance(547, s));
	if (ts_lex_advence_map_535(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(535, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(807, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || '*' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_536(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->eof)
		return (lex_advance(547, s));
	if (ts_lex_advence_map_536(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(536, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(807, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || '*' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_537(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->eof)
		return (lex_advance(547, s));
	if (ts_lex_advence_map_537(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(537, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_538(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->eof)
		return (lex_advance(547, s));
	if (ts_lex_advence_map_538(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(538, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(806, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('_' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(868, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_539(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->eof)
		return (lex_advance(547, s));
	if (ts_lex_advence_map_539(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(539, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_540(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->eof)
		return (lex_advance(547, s));
	if (ts_lex_advence_map_540(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(540, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_541(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->eof)
		return (lex_advance(547, s));
	if (s->lookahead == '\r')
		return (lex_skip(523, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(521, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_542(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->eof)
		return (lex_advance(547, s));
	if (s->lookahead == '\r')
		return (lex_skip(524, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(519, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_543(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->eof)
		return (lex_advance(547, s));
	if (s->lookahead == '\r')
		return (lex_skip(525, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(522, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_544(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->eof)
		return (lex_advance(547, s));
	if (s->lookahead == '\r')
		return (lex_skip(526, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(520, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_545(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->eof)
		return (lex_advance(547, s));
	if (ts_lex_advence_map_545(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(545, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_546(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->eof)
		return (lex_advance(547, s));
	if (ts_lex_advence_map_546(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(546, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_547(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = ts_builtin_sym_end;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_548(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_in;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_549(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_in;
	lexer->mark_end(lexer);
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_550(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_in;
	lexer->mark_end(lexer);
	if (('0' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	s->lookahead == '_' || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_551(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_LPAREN_LPAREN;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_552(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_RPAREN_RPAREN;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_553(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_SEMI;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_554(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_SEMI;
	lexer->mark_end(lexer);
	if (s->lookahead == '&')
		return (lex_advance(664, s));
	if (s->lookahead == ';')
		return (lex_advance(663, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_555(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_SEMI;
	lexer->mark_end(lexer);
	if (s->lookahead == ';')
		return (lex_advance(662, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_556(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_COMMA;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_557(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_COMMA;
	lexer->mark_end(lexer);
	if (s->lookahead == ',')
		return (lex_advance(850, s));
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_558(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_COMMA;
	lexer->mark_end(lexer);
	if (s->lookahead == ',')
		return (lex_advance(849, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_559(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_EQ;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_560(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_EQ;
	lexer->mark_end(lexer);
	if (s->lookahead == '=')
		return (lex_advance(604, s));
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if (s->lookahead == '~')
		return (lex_advance(679, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_561(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_EQ;
	lexer->mark_end(lexer);
	if (s->lookahead == '=')
		return (lex_advance(603, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_562(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_EQ;
	lexer->mark_end(lexer);
	if (s->lookahead == '=')
		return (lex_advance(603, s));
	if (s->lookahead == '~')
		return (lex_advance(678, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_563(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_EQ;
	lexer->mark_end(lexer);
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_564(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_PLUS_PLUS;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_565(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_PLUS_PLUS;
	lexer->mark_end(lexer);
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_566(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_DASH_DASH;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_567(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_DASH_DASH;
	lexer->mark_end(lexer);
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_568(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_PLUS_EQ;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_569(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_PLUS_EQ;
	lexer->mark_end(lexer);
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_570(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_DASH_EQ;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_571(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_DASH_EQ;
	lexer->mark_end(lexer);
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_572(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_STAR_EQ;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_573(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_STAR_EQ;
	lexer->mark_end(lexer);
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_574(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_SLASH_EQ;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_575(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_SLASH_EQ;
	lexer->mark_end(lexer);
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_576(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_PERCENT_EQ;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_577(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_PERCENT_EQ;
	lexer->mark_end(lexer);
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_578(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_STAR_STAR_EQ;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_579(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_STAR_STAR_EQ;
	lexer->mark_end(lexer);
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_580(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_LT_LT_EQ;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_581(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_GT_GT_EQ;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_582(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_AMP_EQ;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_583(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_CARET_EQ;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_584(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_CARET_EQ;
	lexer->mark_end(lexer);
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_585(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_PIPE_EQ;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_586(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_PIPE_PIPE;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_587(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_DASHo;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_588(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_AMP_AMP;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_589(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_DASHa;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_590(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_PIPE;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_591(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_PIPE;
	lexer->mark_end(lexer);
	if (s->lookahead == '&')
		return (lex_advance(668, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_592(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_PIPE;
	lexer->mark_end(lexer);
	if (s->lookahead == '&')
		return (lex_advance(668, s));
	if (s->lookahead == '=')
		return (lex_advance(585, s));
	if (s->lookahead == '|')
		return (lex_advance(586, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_593(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_PIPE;
	lexer->mark_end(lexer);
	if (s->lookahead == '&')
		return (lex_advance(668, s));
	if (s->lookahead == '|')
		return (lex_advance(586, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_594(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_PIPE;
	lexer->mark_end(lexer);
	if (s->lookahead == '=')
		return (lex_advance(585, s));
	if (s->lookahead == '|')
		return (lex_advance(586, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_595(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_CARET;
	lexer->mark_end(lexer);
	if (s->lookahead == '=')
		return (lex_advance(584, s));
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if (s->lookahead == '^')
		return (lex_advance(852, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_596(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_CARET;
	lexer->mark_end(lexer);
	if (s->lookahead == '=')
		return (lex_advance(584, s));
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_597(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_CARET;
	lexer->mark_end(lexer);
	if (s->lookahead == '=')
		return (lex_advance(583, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_598(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_CARET;
	lexer->mark_end(lexer);
	if (s->lookahead == '^')
		return (lex_advance(851, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_599(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_AMP;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_600(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_AMP;
	lexer->mark_end(lexer);
	if (s->lookahead == '&')
		return (lex_advance(588, s));
	if (s->lookahead == '=')
		return (lex_advance(582, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_601(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_AMP;
	lexer->mark_end(lexer);
	if (s->lookahead == '&')
		return (lex_advance(588, s));
	if (s->lookahead == '=')
		return (lex_advance(582, s));
	if (s->lookahead == '>')
		return (lex_advance(680, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_602(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_AMP;
	lexer->mark_end(lexer);
	if (s->lookahead == '&')
		return (lex_advance(588, s));
	if (s->lookahead == '>')
		return (lex_advance(680, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_603(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_EQ_EQ;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_604(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_EQ_EQ;
	lexer->mark_end(lexer);
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_605(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_BANG_EQ;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_606(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_BANG_EQ;
	lexer->mark_end(lexer);
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_607(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_LT;
	lexer->mark_end(lexer);
	if (s->lookahead == '&')
		return (lex_advance(682, s));
	if (s->lookahead == '(')
		return (lex_advance(858, s));
	if (s->lookahead == '<')
		return (lex_advance(625, s));
	if (s->lookahead == '=')
		return (lex_advance(621, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_608(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_LT;
	lexer->mark_end(lexer);
	if (s->lookahead == '&')
		return (lex_advance(682, s));
	if (s->lookahead == '(')
		return (lex_advance(858, s));
	if (s->lookahead == '<')
		return (lex_advance(505, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_609(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_LT;
	lexer->mark_end(lexer);
	if (s->lookahead == '&')
		return (lex_advance(682, s));
	if (s->lookahead == '(')
		return (lex_advance(858, s));
	if (s->lookahead == '<')
		return (lex_advance(624, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_610(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_LT;
	lexer->mark_end(lexer);
	if (s->lookahead == '&')
		return (lex_advance(682, s));
	if (s->lookahead == '(')
		return (lex_advance(858, s));
	if (s->lookahead == '<')
		return (lex_advance(623, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_611(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_LT;
	lexer->mark_end(lexer);
	if (s->lookahead == '&')
		return (lex_advance(682, s));
	if (s->lookahead == '<')
		return (lex_advance(505, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_612(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_LT;
	lexer->mark_end(lexer);
	if (s->lookahead == '&')
		return (lex_advance(682, s));
	if (s->lookahead == '<')
		return (lex_advance(624, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_613(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_LT;
	lexer->mark_end(lexer);
	if (s->lookahead == '&')
		return (lex_advance(682, s));
	if (s->lookahead == '<')
		return (lex_advance(623, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_614(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_LT;
	lexer->mark_end(lexer);
	if (s->lookahead == '(')
		return (lex_advance(858, s));
	if (s->lookahead == '<')
		return (lex_advance(626, s));
	if (s->lookahead == '=')
		return (lex_advance(621, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_615(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_LT;
	lexer->mark_end(lexer);
	if (s->lookahead == '<')
		return (lex_advance(626, s));
	if (s->lookahead == '=')
		return (lex_advance(621, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_616(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_GT;
	lexer->mark_end(lexer);
	if (s->lookahead == '&')
		return (lex_advance(683, s));
	if (s->lookahead == '(')
		return (lex_advance(859, s));
	if (s->lookahead == '=')
		return (lex_advance(622, s));
	if (s->lookahead == '>')
		return (lex_advance(628, s));
	if (s->lookahead == '|')
		return (lex_advance(684, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_617(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_GT;
	lexer->mark_end(lexer);
	if (s->lookahead == '&')
		return (lex_advance(683, s));
	if (s->lookahead == '(')
		return (lex_advance(859, s));
	if (s->lookahead == '>')
		return (lex_advance(627, s));
	if (s->lookahead == '|')
		return (lex_advance(684, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_618(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_GT;
	lexer->mark_end(lexer);
	if (s->lookahead == '&')
		return (lex_advance(683, s));
	if (s->lookahead == '>')
		return (lex_advance(627, s));
	if (s->lookahead == '|')
		return (lex_advance(684, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_619(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_GT;
	lexer->mark_end(lexer);
	if (s->lookahead == '(')
		return (lex_advance(859, s));
	if (s->lookahead == '=')
		return (lex_advance(622, s));
	if (s->lookahead == '>')
		return (lex_advance(628, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_620(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_GT;
	lexer->mark_end(lexer);
	if (s->lookahead == '=')
		return (lex_advance(622, s));
	if (s->lookahead == '>')
		return (lex_advance(628, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_621(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_LT_EQ;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_622(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_GT_EQ;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_623(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_LT_LT;
	lexer->mark_end(lexer);
	if (s->lookahead == '-')
		return (lex_advance(687, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_624(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_LT_LT;
	lexer->mark_end(lexer);
	if (s->lookahead == '-')
		return (lex_advance(687, s));
	if (s->lookahead == '<')
		return (lex_advance(759, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_625(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_LT_LT;
	lexer->mark_end(lexer);
	if (s->lookahead == '-')
		return (lex_advance(687, s));
	if (s->lookahead == '<')
		return (lex_advance(759, s));
	if (s->lookahead == '=')
		return (lex_advance(580, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_626(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_LT_LT;
	lexer->mark_end(lexer);
	if (s->lookahead == '=')
		return (lex_advance(580, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_627(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_GT_GT;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_628(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_GT_GT;
	lexer->mark_end(lexer);
	if (s->lookahead == '=')
		return (lex_advance(581, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_629(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_PLUS;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_630(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_PLUS;
	lexer->mark_end(lexer);
	if (s->lookahead == '+')
		return (lex_advance(565, s));
	if (s->lookahead == '=')
		return (lex_advance(569, s));
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_631(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_PLUS;
	lexer->mark_end(lexer);
	if (s->lookahead == '+')
		return (lex_advance(564, s));
	if (s->lookahead == '=')
		return (lex_advance(568, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_632(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_DASH;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_633(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_DASH;
	lexer->mark_end(lexer);
	if (s->lookahead == '-')
		return (lex_advance(567, s));
	if (s->lookahead == '0')
		return (lex_advance(803, s));
	if (s->lookahead == '=')
		return (lex_advance(571, s));
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_634(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_DASH;
	lexer->mark_end(lexer);
	if (s->lookahead == '-')
		return (lex_advance(566, s));
	if (s->lookahead == '=')
		return (lex_advance(570, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_635(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_DASH;
	lexer->mark_end(lexer);
	if (s->lookahead == '-')
		return (lex_advance(566, s));
	if (s->lookahead == '=')
		return (lex_advance(570, s));
	if (s->lookahead == 'a')
		return (lex_advance(589, s));
	if (s->lookahead == 'o')
		return (lex_advance(587, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_636(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_DASH;
	lexer->mark_end(lexer);
	if (s->lookahead == '0')
		return (lex_advance(803, s));
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_637(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_STAR;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_638(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_STAR;
	lexer->mark_end(lexer);
	if (s->lookahead == '*')
		return (lex_advance(651, s));
	if (s->lookahead == '=')
		return (lex_advance(573, s));
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_639(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_STAR;
	lexer->mark_end(lexer);
	if (s->lookahead == '*')
		return (lex_advance(652, s));
	if (s->lookahead == '=')
		return (lex_advance(572, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_640(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_STAR;
	lexer->mark_end(lexer);
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_641(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_SLASH;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_642(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_SLASH;
	lexer->mark_end(lexer);
	if (s->lookahead == '#')
		return (lex_advance(846, s));
	if (s->lookahead == '%')
		return (lex_advance(848, s));
	if (s->lookahead == '/')
		return (lex_advance(844, s));
	if (s->lookahead == '=')
		return (lex_advance(575, s));
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if ((!s->eof && set_contains(sym_word_character_set_1, 11, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_643(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_SLASH;
	lexer->mark_end(lexer);
	if (s->lookahead == '#')
		return (lex_advance(845, s));
	if (s->lookahead == '%')
		return (lex_advance(847, s));
	if (s->lookahead == '/')
		return (lex_advance(843, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_644(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_SLASH;
	lexer->mark_end(lexer);
	if (s->lookahead == '=')
		return (lex_advance(575, s));
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_645(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_SLASH;
	lexer->mark_end(lexer);
	if (s->lookahead == '=')
		return (lex_advance(574, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_646(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_PERCENT;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_647(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_PERCENT;
	lexer->mark_end(lexer);
	if (s->lookahead == '%')
		return (lex_advance(841, s));
	if (s->lookahead == '=')
		return (lex_advance(577, s));
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_648(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_PERCENT;
	lexer->mark_end(lexer);
	if (s->lookahead == '%')
		return (lex_advance(840, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_649(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_PERCENT;
	lexer->mark_end(lexer);
	if (s->lookahead == '=')
		return (lex_advance(577, s));
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_650(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_PERCENT;
	lexer->mark_end(lexer);
	if (s->lookahead == '=')
		return (lex_advance(576, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_651(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_STAR_STAR;
	lexer->mark_end(lexer);
	if (s->lookahead == '=')
		return (lex_advance(579, s));
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_652(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_STAR_STAR;
	lexer->mark_end(lexer);
	if (s->lookahead == '=')
		return (lex_advance(578, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_653(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_LPAREN;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_654(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_LPAREN;
	lexer->mark_end(lexer);
	if (s->lookahead == '(')
		return (lex_advance(551, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_655(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_RPAREN;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_656(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__c_word_token1;
	lexer->mark_end(lexer);
	if (('0' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	s->lookahead == '_' || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(656, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_657(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_esac;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_658(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_esac;
	lexer->mark_end(lexer);
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if (('0' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	s->lookahead == '_' || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(868, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_659(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_esac;
	lexer->mark_end(lexer);
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_660(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_esac;
	lexer->mark_end(lexer);
	if (s->lookahead == '\\')
		return (lex_advance(17, s));
	if (('0' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	s->lookahead == '_' || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_661(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_esac;
	lexer->mark_end(lexer);
	if (('0' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	s->lookahead == '_' || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_662(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_SEMI_SEMI;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_663(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_SEMI_SEMI;
	lexer->mark_end(lexer);
	if (s->lookahead == '&')
		return (lex_advance(665, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_664(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_SEMI_AMP;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_665(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_SEMI_SEMI_AMP;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_666(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_LBRACE;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_667(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_RBRACE;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_668(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_PIPE_AMP;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_669(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_BANG;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_670(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_BANG;
	lexer->mark_end(lexer);
	if (s->lookahead == '=')
		return (lex_advance(606, s));
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_671(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_BANG;
	lexer->mark_end(lexer);
	if (s->lookahead == '=')
		return (lex_advance(605, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_672(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_BANG;
	lexer->mark_end(lexer);
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_673(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_LBRACK;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_674(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_LBRACK;
	lexer->mark_end(lexer);
	if (s->lookahead == '[')
		return (lex_advance(676, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_675(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_RBRACK;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_676(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_LBRACK_LBRACK;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_677(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_RBRACK_RBRACK;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_678(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_EQ_TILDE;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_679(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_EQ_TILDE;
	lexer->mark_end(lexer);
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_680(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_AMP_GT;
	lexer->mark_end(lexer);
	if (s->lookahead == '>')
		return (lex_advance(681, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_681(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_AMP_GT_GT;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_682(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_LT_AMP;
	lexer->mark_end(lexer);
	if (s->lookahead == '-')
		return (lex_advance(685, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_683(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_GT_AMP;
	lexer->mark_end(lexer);
	if (s->lookahead == '-')
		return (lex_advance(686, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_684(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_GT_PIPE;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_685(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_LT_AMP_DASH;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_686(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_GT_AMP_DASH;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_687(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_LT_LT_DASH;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_688(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(688, s));
	if (s->lookahead == '+')
		return (lex_advance(771, s));
	if (s->lookahead == '-')
		return (lex_advance(769, s));
	if (s->lookahead == '\\')
		return (lex_advance(307, s));
	if (s->lookahead == '~')
		return (lex_advance(772, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_689(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(689, s));
	if (s->lookahead == '\\')
		return (lex_advance(14, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_690(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(690, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_691(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(691, s));
	if (s->lookahead == '\\')
		return (lex_advance(316, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_692(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(692, s));
	if (s->lookahead == '\\')
		return (lex_advance(81, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_693(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(693, s));
	if (s->lookahead == '\\')
		return (lex_advance(27, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_694(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(694, s));
	if (s->lookahead == '\\')
		return (lex_advance(317, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_695(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(695, s));
	if (s->lookahead == '\\')
		return (lex_advance(91, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_696(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(696, s));
	if (s->lookahead == '\\')
		return (lex_advance(30, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_697(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(697, s));
	if (s->lookahead == '\\')
		return (lex_advance(321, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_698(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(698, s));
	if (s->lookahead == '\\')
		return (lex_advance(183, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_699(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(699, s));
	if (s->lookahead == '\\')
		return (lex_advance(153, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_700(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(700, s));
	if (s->lookahead == '\\')
		return (lex_advance(322, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_701(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(701, s));
	if (s->lookahead == '\\')
		return (lex_advance(185, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_702(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(702, s));
	if (s->lookahead == '\\')
		return (lex_advance(32, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_703(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(703, s));
	if (s->lookahead == '\\')
		return (lex_advance(323, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_704(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(704, s));
	if (s->lookahead == '\\')
		return (lex_advance(96, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_705(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(705, s));
	if (s->lookahead == '\\')
		return (lex_advance(156, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_706(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(706, s));
	if (s->lookahead == '\\')
		return (lex_advance(324, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_707(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(707, s));
	if (s->lookahead == '\\')
		return (lex_advance(98, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_708(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(708, s));
	if (s->lookahead == '\\')
		return (lex_advance(202, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_709(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(709, s));
	if (s->lookahead == '\\')
		return (lex_advance(325, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_710(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(710, s));
	if (s->lookahead == '\\')
		return (lex_advance(211, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_711(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(711, s));
	if (s->lookahead == '\\')
		return (lex_advance(158, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_712(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(712, s));
	if (s->lookahead == '\\')
		return (lex_advance(326, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_713(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(713, s));
	if (s->lookahead == '\\')
		return (lex_advance(188, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_714(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(714, s));
	if (s->lookahead == '\\')
		return (lex_advance(215, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_715(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(715, s));
	if (s->lookahead == '\\')
		return (lex_advance(327, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_716(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(716, s));
	if (s->lookahead == '\\')
		return (lex_advance(218, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_717(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(717, s));
	if (s->lookahead == '\\')
		return (lex_advance(37, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_718(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(718, s));
	if (s->lookahead == '\\')
		return (lex_advance(328, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_719(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(719, s));
	if (s->lookahead == '\\')
		return (lex_advance(190, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_720(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(720, s));
	if (s->lookahead == '\\')
		return (lex_advance(222, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_721(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(721, s));
	if (s->lookahead == '\\')
		return (lex_advance(397, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_722(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(722, s));
	if (s->lookahead == '\\')
		return (lex_advance(106, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_723(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(723, s));
	if (s->lookahead == '\\')
		return (lex_advance(43, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_724(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(724, s));
	if (s->lookahead == '\\')
		return (lex_advance(331, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_725(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(725, s));
	if (s->lookahead == '\\')
		return (lex_advance(193, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_726(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(726, s));
	if (s->lookahead == '\\')
		return (lex_advance(46, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_727(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(727, s));
	if (s->lookahead == '\\')
		return (lex_advance(398, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_728(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(728, s));
	if (s->lookahead == '\\')
		return (lex_advance(213, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_729(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(729, s));
	if (s->lookahead == '\\')
		return (lex_advance(226, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_730(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(730, s));
	if (s->lookahead == '\\')
		return (lex_advance(399, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_731(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(731, s));
	if (s->lookahead == '\\')
		return (lex_advance(128, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_732(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(732, s));
	if (s->lookahead == '\\')
		return (lex_advance(166, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_733(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(733, s));
	if (s->lookahead == '\\')
		return (lex_advance(333, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_734(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(734, s));
	if (s->lookahead == '\\')
		return (lex_advance(48, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_735(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(735, s));
	if (s->lookahead == '\\')
		return (lex_advance(335, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_736(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(736, s));
	if (s->lookahead == '\\')
		return (lex_advance(228, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_737(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(737, s));
	if (s->lookahead == '\\')
		return (lex_advance(337, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_738(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(738, s));
	if (s->lookahead == '\\')
		return (lex_advance(207, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_739(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(739, s));
	if (s->lookahead == '\\')
		return (lex_advance(339, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_740(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(740, s));
	if (s->lookahead == '\\')
		return (lex_advance(168, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_741(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(741, s));
	if (s->lookahead == '\\')
		return (lex_advance(341, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_742(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(742, s));
	if (s->lookahead == '\\')
		return (lex_advance(58, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_743(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(743, s));
	if (s->lookahead == '\\')
		return (lex_advance(343, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_744(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(744, s));
	if (s->lookahead == '\\')
		return (lex_advance(233, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_745(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(745, s));
	if (s->lookahead == '\\')
		return (lex_advance(344, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_746(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(746, s));
	if (s->lookahead == '\\')
		return (lex_advance(176, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_747(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(747, s));
	if (s->lookahead == '\\')
		return (lex_advance(346, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_748(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(748, s));
	if (s->lookahead == '\\')
		return (lex_advance(100, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_749(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(749, s));
	if (s->lookahead == '\\')
		return (lex_advance(347, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_750(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(750, s));
	if (s->lookahead == '\\')
		return (lex_advance(112, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_751(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(751, s));
	if (s->lookahead == '\\')
		return (lex_advance(349, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_752(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(752, s));
	if (s->lookahead == '\\')
		return (lex_advance(350, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_753(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(753, s));
	if (s->lookahead == '\\')
		return (lex_advance(351, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_754(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(754, s));
	if (s->lookahead == '\\')
		return (lex_advance(354, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_755(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(755, s));
	if (s->lookahead == '\\')
		return (lex_advance(357, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_756(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(756, s));
	if (s->lookahead == '\\')
		return (lex_advance(370, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_757(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(757, s));
	if (s->lookahead == '\\')
		return (lex_advance(372, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_758(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(758, s));
	if (s->lookahead == '\\')
		return (lex_advance(381, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_759(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_LT_LT_LT;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_760(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_QMARK;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_761(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_QMARK;
	lexer->mark_end(lexer);
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_762(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_COLON;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_763(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_COLON;
	lexer->mark_end(lexer);
	if (s->lookahead == '+')
		return (lex_advance(835, s));
	if (s->lookahead == '-')
		return (lex_advance(832, s));
	if (s->lookahead == '=')
		return (lex_advance(829, s));
	if (s->lookahead == '?')
		return (lex_advance(839, s));
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_764(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_COLON;
	lexer->mark_end(lexer);
	if (s->lookahead == '+')
		return (lex_advance(834, s));
	if (s->lookahead == '-')
		return (lex_advance(831, s));
	if (s->lookahead == '=')
		return (lex_advance(828, s));
	if (s->lookahead == '?')
		return (lex_advance(838, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_765(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_COLON;
	lexer->mark_end(lexer);
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_766(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_PLUS_PLUS2;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_767(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_DASH_DASH2;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_768(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_DASH2;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_769(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_DASH2;
	lexer->mark_end(lexer);
	if (s->lookahead == '-')
		return (lex_advance(767, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_770(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_PLUS2;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_771(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_PLUS2;
	lexer->mark_end(lexer);
	if (s->lookahead == '+')
		return (lex_advance(766, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_772(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_TILDE;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_773(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_DOLLAR_LPAREN_LPAREN;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_774(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_DOLLAR_LBRACK;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_775(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_brace_expression_token1;
	lexer->mark_end(lexer);
	if (('0' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(775, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_776(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_DOT_DOT;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_777(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_DOT_DOT;
	lexer->mark_end(lexer);
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_778(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_RBRACE2;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_779(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_concatenation_token1;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_780(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_DOLLAR;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_781(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_DOLLAR;
	lexer->mark_end(lexer);
	if (s->lookahead == '\'')
		return (lex_advance(492, s));
	if (s->lookahead == '(')
		return (lex_advance(854, s));
	if (s->lookahead == '[')
		return (lex_advance(774, s));
	if (s->lookahead == '`')
		return (lex_advance(857, s));
	if (s->lookahead == '{')
		return (lex_advance(817, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_782(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_DOLLAR;
	lexer->mark_end(lexer);
	if (s->lookahead == '\'')
		return (lex_advance(492, s));
	if (s->lookahead == '(')
		return (lex_advance(853, s));
	if (s->lookahead == '`')
		return (lex_advance(857, s));
	if (s->lookahead == '{')
		return (lex_advance(817, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_783(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_DOLLAR;
	lexer->mark_end(lexer);
	if (s->lookahead == '(')
		return (lex_advance(854, s));
	if (s->lookahead == '[')
		return (lex_advance(774, s));
	if (s->lookahead == '`')
		return (lex_advance(857, s));
	if (s->lookahead == '{')
		return (lex_advance(817, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_784(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_DOLLAR;
	lexer->mark_end(lexer);
	if (s->lookahead == '(')
		return (lex_advance(853, s));
	if (s->lookahead == '`')
		return (lex_advance(857, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_785(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_DOLLAR;
	lexer->mark_end(lexer);
	if (s->lookahead == '(')
		return (lex_advance(853, s));
	if (s->lookahead == '`')
		return (lex_advance(857, s));
	if (s->lookahead == '{')
		return (lex_advance(817, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_786(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = sym__special_character;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_787(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = sym__special_character;
	lexer->mark_end(lexer);
	if (s->lookahead == ']')
		return (lex_advance(677, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_788(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_DQUOTE;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_789(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = sym_string_content;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(795, s));
	if (s->lookahead == '\\')
		return (lex_advance(303, s));
	if (s->lookahead != 0 && \
	s->lookahead != '\r' && \
	s->lookahead != '"' && \
	s->lookahead != '$' && \
	s->lookahead != '`')
		return (lex_advance(798, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_790(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = sym_string_content;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(793, s));
	if (s->lookahead == '\\')
		return (lex_advance(303, s));
	if (s->lookahead != 0 && \
	s->lookahead != '\r' && \
	s->lookahead != '"' && \
	s->lookahead != '$' && \
	s->lookahead != '`')
		return (lex_advance(798, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_791(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = sym_string_content;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(794, s));
	if (s->lookahead == '\\')
		return (lex_advance(303, s));
	if (s->lookahead != 0 && \
	s->lookahead != '\r' && \
	s->lookahead != '"' && \
	s->lookahead != '$' && \
	s->lookahead != '`')
		return (lex_advance(798, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_792(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = sym_string_content;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(798, s));
	if (s->lookahead == '\\')
		return (lex_advance(860, s));
	if (s->lookahead != 0 && \
	s->lookahead != '\r' && \
	s->lookahead != '"' && \
	s->lookahead != '$' && \
	s->lookahead != '`')
		return (lex_advance(797, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_793(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = sym_string_content;
	lexer->mark_end(lexer);
	if (ts_lex_advence_map_793(lexer, s))
		return (s->lex_ret);
	if (s->lookahead == '\n' || \
	s->lookahead == '\r')
		return (lex_skip(449, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_advance(793, s));
	if (('1' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '_' || 'z' < s->lookahead))
		return (lex_advance(798, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_794(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = sym_string_content;
	lexer->mark_end(lexer);
	if (ts_lex_advence_map_794(lexer, s))
		return (s->lex_ret);
	if (s->lookahead == '\n' || \
	s->lookahead == '\r')
		return (lex_skip(452, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_advance(794, s));
	if (('1' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	if (s->lookahead != 0 && \
	(s->lookahead < ' ' || '$' < s->lookahead) && \
	(s->lookahead < '_' || 'z' < s->lookahead))
		return (lex_advance(798, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_795(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = sym_string_content;
	lexer->mark_end(lexer);
	if (s->lookahead == '"')
		return (lex_advance(788, s));
	if (s->lookahead == '#')
		return (lex_advance(797, s));
	if (s->lookahead == '$')
		return (lex_advance(783, s));
	if (s->lookahead == '(')
		return (lex_advance(796, s));
	if (s->lookahead == '\\')
		return (lex_advance(302, s));
	if (s->lookahead == '`')
		return (lex_advance(855, s));
	if (s->lookahead == '\n' || \
	s->lookahead == '\r')
		return (lex_skip(480, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_advance(795, s));
	if (s->lookahead != 0)
		return (lex_advance(798, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_796(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = sym_string_content;
	lexer->mark_end(lexer);
	if (s->lookahead == '(')
		return (lex_advance(551, s));
	if (s->lookahead == '\\')
		return (lex_advance(303, s));
	if (s->lookahead != 0 && \
	s->lookahead != '\n' && \
	s->lookahead != '\r' && \
	s->lookahead != '"' && \
	s->lookahead != '$' && \
	s->lookahead != '`')
		return (lex_advance(798, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_797(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = sym_string_content;
	lexer->mark_end(lexer);
	if (s->lookahead == '\\')
		return (lex_advance(860, s));
	if (s->lookahead != 0 && \
	s->lookahead != '\n' && \
	s->lookahead != '\r' && \
	s->lookahead != '"' && \
	s->lookahead != '$' && \
	s->lookahead != '`')
		return (lex_advance(797, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_798(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = sym_string_content;
	lexer->mark_end(lexer);
	if (s->lookahead == '\\')
		return (lex_advance(303, s));
	if (s->lookahead != 0 && \
	s->lookahead != '\n' && \
	s->lookahead != '\r' && \
	s->lookahead != '"' && \
	s->lookahead != '$' && \
	s->lookahead != '`')
		return (lex_advance(798, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_799(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = sym_string_content;
	lexer->mark_end(lexer);
	if (s->lookahead == '\\')
		return (lex_advance(303, s));
	if (s->lookahead != 0 && \
	s->lookahead != '\r' && \
	s->lookahead != '"' && \
	s->lookahead != '$' && \
	s->lookahead != '`')
		return (lex_advance(798, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_800(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = sym_raw_string;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_801(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = sym_ansi_c_string;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_802(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = sym_ansi_c_string;
	lexer->mark_end(lexer);
	if (s->lookahead == '\'')
		return (lex_advance(801, s));
	if (s->lookahead == '\\')
		return (lex_advance(493, s));
	if (s->lookahead != 0)
		return (lex_advance(492, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_803(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_number_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '#')
		return (lex_advance(814, s));
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if (s->lookahead == 'x')
		return (lex_advance(957, s));
	if (('0' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if ((!s->eof && set_contains(sym_word_character_set_1, 11, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_804(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_number_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '#')
		return (lex_advance(814, s));
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if (s->lookahead == 'x')
		return (lex_advance(867, s));
	if (('0' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(806, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	s->lookahead == '_' || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(868, s));
	if ((!s->eof && set_contains(sym_word_character_set_1, 11, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_805(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_number_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '#')
		return (lex_advance(814, s));
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if (('0' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if ((!s->eof && set_contains(sym_word_character_set_1, 11, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_806(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_number_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '#')
		return (lex_advance(814, s));
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if (('0' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(806, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	s->lookahead == '_' || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(868, s));
	if ((!s->eof && set_contains(sym_word_character_set_1, 11, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_807(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_number_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '#')
		return (lex_advance(814, s));
	if (s->lookahead == '\\')
		return (lex_advance(17, s));
	if (('0' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(807, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	s->lookahead == '_' || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if ((!s->eof && set_contains(sym_word_character_set_1, 11, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_808(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_number_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '#')
		return (lex_advance(815, s));
	if (s->lookahead == 'x')
		return (lex_advance(878, s));
	if (('0' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(810, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	s->lookahead == '_' || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_809(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_number_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '#')
		return (lex_advance(815, s));
	if (s->lookahead == 'x')
		return (lex_advance(517, s));
	if (('0' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(811, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_810(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_number_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '#')
		return (lex_advance(815, s));
	if (('0' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(810, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	s->lookahead == '_' || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_811(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_number_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '#')
		return (lex_advance(815, s));
	if (('0' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(811, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_812(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_number_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if (('0' <= s->lookahead && s->lookahead <= '9') || \
	('@' <= s->lookahead && s->lookahead <= 'Z') || \
	s->lookahead == '_' || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(812, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_813(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_number_token1;
	lexer->mark_end(lexer);
	if (('0' <= s->lookahead && s->lookahead <= '9') || \
	('@' <= s->lookahead && s->lookahead <= 'Z') || \
	s->lookahead == '_' || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(813, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_814(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_number_token2;
	lexer->mark_end(lexer);
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if (('0' <= s->lookahead && s->lookahead <= '9') || \
	('@' <= s->lookahead && s->lookahead <= 'Z') || \
	s->lookahead == '_' || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(812, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_815(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_number_token2;
	lexer->mark_end(lexer);
	if (('0' <= s->lookahead && s->lookahead <= '9') || \
	('@' <= s->lookahead && s->lookahead <= 'Z') || \
	s->lookahead == '_' || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(813, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_816(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_POUND;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_817(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_DOLLAR_LBRACE;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_818(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_RBRACE3;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_819(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_BANG2;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_820(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_BANG2;
	lexer->mark_end(lexer);
	if (s->lookahead == '=')
		return (lex_advance(606, s));
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_821(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_AT;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_822(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_AT;
	lexer->mark_end(lexer);
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_823(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_STAR2;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_824(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_STAR2;
	lexer->mark_end(lexer);
	if (s->lookahead == '*')
		return (lex_advance(651, s));
	if (s->lookahead == '=')
		return (lex_advance(573, s));
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_825(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_POUND2;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_826(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_EQ2;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_827(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_EQ2;
	lexer->mark_end(lexer);
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_828(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_COLON_EQ;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_829(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_COLON_EQ;
	lexer->mark_end(lexer);
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_830(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_DASH3;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_831(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_COLON_DASH;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_832(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_COLON_DASH;
	lexer->mark_end(lexer);
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_833(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_PLUS3;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_834(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_COLON_PLUS;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_835(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_COLON_PLUS;
	lexer->mark_end(lexer);
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_836(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_QMARK2;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_837(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_QMARK2;
	lexer->mark_end(lexer);
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_838(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_COLON_QMARK;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_839(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_COLON_QMARK;
	lexer->mark_end(lexer);
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_840(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_PERCENT_PERCENT;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_841(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_PERCENT_PERCENT;
	lexer->mark_end(lexer);
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_842(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__expansion_regex_token1;
	lexer->mark_end(lexer);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_advance(842, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_843(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_SLASH_SLASH;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_844(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_SLASH_SLASH;
	lexer->mark_end(lexer);
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_845(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_SLASH_POUND;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_846(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_SLASH_POUND;
	lexer->mark_end(lexer);
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_847(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_SLASH_PERCENT;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_848(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_SLASH_PERCENT;
	lexer->mark_end(lexer);
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_849(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_COMMA_COMMA;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_850(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_COMMA_COMMA;
	lexer->mark_end(lexer);
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_851(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_CARET_CARET;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_852(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_CARET_CARET;
	lexer->mark_end(lexer);
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_853(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_DOLLAR_LPAREN;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_854(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_DOLLAR_LPAREN;
	lexer->mark_end(lexer);
	if (s->lookahead == '(')
		return (lex_advance(773, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_855(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_BQUOTE;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_856(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_BQUOTE;
	lexer->mark_end(lexer);
	if (s->lookahead == '`')
		return (lex_advance(779, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_advance(510, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_857(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_DOLLAR_BQUOTE;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_858(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_LT_LPAREN;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_859(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_GT_LPAREN;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_860(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = sym_comment;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(798, s));
	if (s->lookahead == '\r')
		return (lex_advance(792, s));
	if (s->lookahead != 0)
		return (lex_advance(797, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_861(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = sym_comment;
	lexer->mark_end(lexer);
	if (s->lookahead == '\t' || \
	(0x0b <= s->lookahead && s->lookahead <= '\r'))
		return (lex_advance(862, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '\t' || '\r' < s->lookahead))
		return (lex_advance(863, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_862(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = sym_comment;
	lexer->mark_end(lexer);
	if (s->lookahead != 0 && \
	s->lookahead != '\n')
		return (lex_advance(862, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_863(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = sym__comment_word;
	lexer->mark_end(lexer);
	if (s->lookahead == '\\')
		return (lex_advance(861, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(863, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_864(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__simple_variable_name_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if (s->lookahead == 'a')
		return (lex_advance(865, s));
	if (('0' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	s->lookahead == '_' || \
	('b' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(868, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_865(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__simple_variable_name_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if (s->lookahead == 'c')
		return (lex_advance(658, s));
	if (('0' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	s->lookahead == '_' || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(868, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_866(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__simple_variable_name_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if (s->lookahead == 's')
		return (lex_advance(864, s));
	if (('0' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	s->lookahead == '_' || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(868, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_867(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__simple_variable_name_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if (('0' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(806, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	s->lookahead == '_' || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(868, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_868(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__simple_variable_name_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if (('0' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	s->lookahead == '_' || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(868, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_869(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__simple_variable_name_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\\')
		return (lex_advance(17, s));
	if (s->lookahead == 'a')
		return (lex_advance(870, s));
	if (('0' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	s->lookahead == '_' || \
	('b' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_870(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__simple_variable_name_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\\')
		return (lex_advance(17, s));
	if (s->lookahead == 'c')
		return (lex_advance(660, s));
	if (('0' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	s->lookahead == '_' || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_871(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__simple_variable_name_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\\')
		return (lex_advance(17, s));
	if (s->lookahead == 's')
		return (lex_advance(869, s));
	if (('0' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	s->lookahead == '_' || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_872(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__simple_variable_name_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\\')
		return (lex_advance(17, s));
	if (('0' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(807, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	s->lookahead == '_' || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_873(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__simple_variable_name_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\\')
		return (lex_advance(17, s));
	if (('0' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	s->lookahead == '_' || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_874(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__simple_variable_name_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == 'a')
		return (lex_advance(875, s));
	if (('0' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	s->lookahead == '_' || \
	('b' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_875(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__simple_variable_name_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == 'c')
		return (lex_advance(661, s));
	if (('0' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	s->lookahead == '_' || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_876(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__simple_variable_name_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == 'n')
		return (lex_advance(550, s));
	if (('0' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	s->lookahead == '_' || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_877(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__simple_variable_name_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == 's')
		return (lex_advance(874, s));
	if (('0' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	s->lookahead == '_' || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_878(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__simple_variable_name_token1;
	lexer->mark_end(lexer);
	if (('0' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(810, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	s->lookahead == '_' || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_879(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__simple_variable_name_token1;
	lexer->mark_end(lexer);
	if (('0' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	s->lookahead == '_' || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_880(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__multiline_variable_name_token1;
	lexer->mark_end(lexer);
	if (ts_lex_advence_map_880(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(12, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(807, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if (s->lookahead != 0 && \
	(s->lookahead < ';' || '}' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_881(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__multiline_variable_name_token1;
	lexer->mark_end(lexer);
	if (ts_lex_advence_map_881(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(200, s));
	if (('1' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_882(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__multiline_variable_name_token1;
	lexer->mark_end(lexer);
	if (ts_lex_advence_map_882(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(219, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(807, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || '*' < s->lookahead) && \
	(s->lookahead < ';' || ']' < s->lookahead) && \
	(s->lookahead < '_' || '}' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_883(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__multiline_variable_name_token1;
	lexer->mark_end(lexer);
	if (ts_lex_advence_map_883(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(237, s));
	if (('1' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_884(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__multiline_variable_name_token1;
	lexer->mark_end(lexer);
	if (ts_lex_advence_map_884(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(238, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(807, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || '*' < s->lookahead) && \
	(s->lookahead < ';' || ']' < s->lookahead) && \
	(s->lookahead < '_' || '}' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_885(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__multiline_variable_name_token1;
	lexer->mark_end(lexer);
	if (ts_lex_advence_map_885(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(240, s));
	if (('1' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_886(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__multiline_variable_name_token1;
	lexer->mark_end(lexer);
	if (ts_lex_advence_map_886(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(241, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(807, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || '*' < s->lookahead) && \
	(s->lookahead < ';' || ']' < s->lookahead) && \
	(s->lookahead < '_' || '}' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_887(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__multiline_variable_name_token1;
	lexer->mark_end(lexer);
	if (ts_lex_advence_map_887(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(243, s));
	if (('1' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_888(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__multiline_variable_name_token1;
	lexer->mark_end(lexer);
	if (ts_lex_advence_map_888(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(244, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(807, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if (s->lookahead != 0 && \
	(s->lookahead < ';' || ']' < s->lookahead) && \
	(s->lookahead < '_' || '}' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_889(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__multiline_variable_name_token1;
	lexer->mark_end(lexer);
	if (ts_lex_advence_map_889(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(246, s));
	if (('1' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_890(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__multiline_variable_name_token1;
	lexer->mark_end(lexer);
	if (ts_lex_advence_map_890(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(247, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(807, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || '*' < s->lookahead) && \
	(s->lookahead < ';' || ']' < s->lookahead) && \
	(s->lookahead < '_' || '}' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_891(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__multiline_variable_name_token1;
	lexer->mark_end(lexer);
	if (ts_lex_advence_map_891(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(249, s));
	if (('1' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_892(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__multiline_variable_name_token1;
	lexer->mark_end(lexer);
	if (ts_lex_advence_map_892(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(250, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(807, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || '*' < s->lookahead) && \
	(s->lookahead < ';' || ']' < s->lookahead) && \
	(s->lookahead < '_' || '}' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_893(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__multiline_variable_name_token1;
	lexer->mark_end(lexer);
	if (ts_lex_advence_map_893(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(252, s));
	if (('1' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_894(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__multiline_variable_name_token1;
	lexer->mark_end(lexer);
	if (ts_lex_advence_map_894(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(253, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(807, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if (s->lookahead != 0 && \
	(s->lookahead < ';' || ']' < s->lookahead) && \
	(s->lookahead < '_' || '}' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_895(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__multiline_variable_name_token1;
	lexer->mark_end(lexer);
	if (ts_lex_advence_map_895(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(255, s));
	if (('1' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_896(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__multiline_variable_name_token1;
	lexer->mark_end(lexer);
	if (ts_lex_advence_map_896(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(256, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(807, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || '*' < s->lookahead) && \
	(s->lookahead < ';' || ']' < s->lookahead) && \
	(s->lookahead < '_' || '}' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_897(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__multiline_variable_name_token1;
	lexer->mark_end(lexer);
	if (ts_lex_advence_map_897(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(258, s));
	if (('1' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_898(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__multiline_variable_name_token1;
	lexer->mark_end(lexer);
	if (ts_lex_advence_map_898(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(259, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(807, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || '*' < s->lookahead) && \
	(s->lookahead < '>' || ']' < s->lookahead) && \
	(s->lookahead < '_' || '}' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_899(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__multiline_variable_name_token1;
	lexer->mark_end(lexer);
	if (ts_lex_advence_map_899(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(261, s));
	if (('1' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_900(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__multiline_variable_name_token1;
	lexer->mark_end(lexer);
	if (ts_lex_advence_map_900(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(262, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(807, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || '*' < s->lookahead) && \
	(s->lookahead < '>' || ']' < s->lookahead) && \
	(s->lookahead < '_' || '}' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_901(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__multiline_variable_name_token1;
	lexer->mark_end(lexer);
	if (ts_lex_advence_map_901(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(264, s));
	if (('1' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_902(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__multiline_variable_name_token1;
	lexer->mark_end(lexer);
	if (ts_lex_advence_map_902(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(265, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(807, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || '*' < s->lookahead) && \
	(s->lookahead < '>' || ']' < s->lookahead) && \
	(s->lookahead < '_' || '}' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_903(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__multiline_variable_name_token1;
	lexer->mark_end(lexer);
	if (ts_lex_advence_map_903(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(267, s));
	if (('1' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_904(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__multiline_variable_name_token1;
	lexer->mark_end(lexer);
	if (ts_lex_advence_map_904(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(268, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(807, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '>' || ']' < s->lookahead) && \
	(s->lookahead < '_' || '}' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_905(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__multiline_variable_name_token1;
	lexer->mark_end(lexer);
	if (ts_lex_advence_map_905(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(270, s));
	if (('1' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_906(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__multiline_variable_name_token1;
	lexer->mark_end(lexer);
	if (ts_lex_advence_map_906(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(271, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(807, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || '*' < s->lookahead) && \
	(s->lookahead < '>' || ']' < s->lookahead) && \
	(s->lookahead < '_' || '}' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_907(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__multiline_variable_name_token1;
	lexer->mark_end(lexer);
	if (ts_lex_advence_map_907(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(273, s));
	if (('1' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_908(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__multiline_variable_name_token1;
	lexer->mark_end(lexer);
	if (ts_lex_advence_map_908(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(274, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(807, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || '*' < s->lookahead) && \
	(s->lookahead < '>' || ']' < s->lookahead) && \
	(s->lookahead < '_' || '}' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_909(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__multiline_variable_name_token1;
	lexer->mark_end(lexer);
	if (ts_lex_advence_map_909(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(276, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(807, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || '*' < s->lookahead) && \
	(s->lookahead < ';' || ']' < s->lookahead) && \
	(s->lookahead < '_' || '}' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_910(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__multiline_variable_name_token1;
	lexer->mark_end(lexer);
	if (ts_lex_advence_map_910(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(278, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(807, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '>' || ']' < s->lookahead) && \
	(s->lookahead < '_' || '}' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_911(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__multiline_variable_name_token1;
	lexer->mark_end(lexer);
	if (ts_lex_advence_map_911(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(280, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(807, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || '*' < s->lookahead) && \
	(s->lookahead < '>' || ']' < s->lookahead) && \
	(s->lookahead < '_' || '}' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_912(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__multiline_variable_name_token1;
	lexer->mark_end(lexer);
	if (ts_lex_advence_map_912(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(282, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(807, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || '*' < s->lookahead) && \
	(s->lookahead < ';' || ']' < s->lookahead) && \
	(s->lookahead < '_' || '}' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_913(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__multiline_variable_name_token1;
	lexer->mark_end(lexer);
	if (ts_lex_advence_map_913(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(284, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(807, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || '*' < s->lookahead) && \
	s->lookahead != ';' && \
	s->lookahead != '<' && \
	(s->lookahead < '>' || ']' < s->lookahead) && \
	(s->lookahead < '_' || '}' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_914(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__multiline_variable_name_token1;
	lexer->mark_end(lexer);
	if (ts_lex_advence_map_914(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(286, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(807, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || '*' < s->lookahead) && \
	s->lookahead != ';' && \
	s->lookahead != '<' && \
	(s->lookahead < '>' || ']' < s->lookahead) && \
	(s->lookahead < '_' || '}' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_915(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__multiline_variable_name_token1;
	lexer->mark_end(lexer);
	if (ts_lex_advence_map_915(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(288, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(807, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || '*' < s->lookahead) && \
	s->lookahead != ';' && \
	s->lookahead != '<' && \
	(s->lookahead < '>' || ']' < s->lookahead) && \
	(s->lookahead < '_' || '}' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_916(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__multiline_variable_name_token1;
	lexer->mark_end(lexer);
	if (ts_lex_advence_map_916(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(290, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(807, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || '*' < s->lookahead) && \
	(s->lookahead < '>' || ']' < s->lookahead) && \
	(s->lookahead < '_' || '}' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_917(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__multiline_variable_name_token1;
	lexer->mark_end(lexer);
	if (ts_lex_advence_map_917(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(292, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(807, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || '*' < s->lookahead) && \
	s->lookahead != ';' && \
	s->lookahead != '<' && \
	(s->lookahead < '>' || ']' < s->lookahead) && \
	(s->lookahead < '_' || '}' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_918(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__multiline_variable_name_token1;
	lexer->mark_end(lexer);
	if (ts_lex_advence_map_918(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(402, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(807, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if (s->lookahead != 0 && \
	(s->lookahead < ' ' || '+' < s->lookahead) && \
	(s->lookahead < ';' || '}' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_919(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__multiline_variable_name_token1;
	lexer->mark_end(lexer);
	if (ts_lex_advence_map_919(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(409, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(807, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || '*' < s->lookahead) && \
	s->lookahead != ';' && \
	s->lookahead != '<' && \
	(s->lookahead < '>' || ']' < s->lookahead) && \
	(s->lookahead < '_' || '}' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_920(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__multiline_variable_name_token1;
	lexer->mark_end(lexer);
	if (ts_lex_advence_map_920(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(410, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(807, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || '*' < s->lookahead) && \
	(s->lookahead < ';' || ']' < s->lookahead) && \
	(s->lookahead < '_' || '}' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_921(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__multiline_variable_name_token1;
	lexer->mark_end(lexer);
	if (ts_lex_advence_map_921(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(411, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(807, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || '*' < s->lookahead) && \
	(s->lookahead < ';' || ']' < s->lookahead) && \
	(s->lookahead < '_' || '}' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_922(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__multiline_variable_name_token1;
	lexer->mark_end(lexer);
	if (ts_lex_advence_map_922(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(412, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(807, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || '*' < s->lookahead) && \
	s->lookahead != ';' && \
	s->lookahead != '<' && \
	(s->lookahead < '>' || ']' < s->lookahead) && \
	(s->lookahead < '_' || '}' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_923(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__multiline_variable_name_token1;
	lexer->mark_end(lexer);
	if (ts_lex_advence_map_923(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(413, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(807, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || '*' < s->lookahead) && \
	s->lookahead != ';' && \
	s->lookahead != '<' && \
	(s->lookahead < '>' || ']' < s->lookahead) && \
	(s->lookahead < '_' || '}' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_924(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__multiline_variable_name_token1;
	lexer->mark_end(lexer);
	if (ts_lex_advence_map_924(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(414, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(807, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || '*' < s->lookahead) && \
	s->lookahead != ';' && \
	s->lookahead != '<' && \
	(s->lookahead < '>' || ']' < s->lookahead) && \
	(s->lookahead < '_' || '}' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_925(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__multiline_variable_name_token1;
	lexer->mark_end(lexer);
	if (ts_lex_advence_map_925(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(415, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(807, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || '*' < s->lookahead) && \
	s->lookahead != ';' && \
	s->lookahead != '<' && \
	(s->lookahead < '>' || ']' < s->lookahead) && \
	(s->lookahead < '_' || '}' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_926(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__multiline_variable_name_token1;
	lexer->mark_end(lexer);
	if (ts_lex_advence_map_926(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(416, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(807, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || '*' < s->lookahead) && \
	s->lookahead != ';' && \
	s->lookahead != '<' && \
	(s->lookahead < '>' || ']' < s->lookahead) && \
	(s->lookahead < '_' || '}' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_927(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__multiline_variable_name_token1;
	lexer->mark_end(lexer);
	if (ts_lex_advence_map_927(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(427, s));
	if (('1' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_928(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__multiline_variable_name_token1;
	lexer->mark_end(lexer);
	if (ts_lex_advence_map_928(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(428, s));
	if (('1' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_929(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__multiline_variable_name_token1;
	lexer->mark_end(lexer);
	if (ts_lex_advence_map_929(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(429, s));
	if (('1' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_930(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__multiline_variable_name_token1;
	lexer->mark_end(lexer);
	if (ts_lex_advence_map_930(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(430, s));
	if (('1' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_931(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__multiline_variable_name_token1;
	lexer->mark_end(lexer);
	if (ts_lex_advence_map_931(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(431, s));
	if (('1' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_932(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__multiline_variable_name_token1;
	lexer->mark_end(lexer);
	if (ts_lex_advence_map_932(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(432, s));
	if (('1' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_933(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__multiline_variable_name_token1;
	lexer->mark_end(lexer);
	if (ts_lex_advence_map_933(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(444, s));
	if (('1' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_934(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__multiline_variable_name_token1;
	lexer->mark_end(lexer);
	if (ts_lex_advence_map_934(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(445, s));
	if (('1' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_935(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__multiline_variable_name_token1;
	lexer->mark_end(lexer);
	if (ts_lex_advence_map_935(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(446, s));
	if (('1' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_936(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__multiline_variable_name_token1;
	lexer->mark_end(lexer);
	if (ts_lex_advence_map_936(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(447, s));
	if (('1' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_937(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__multiline_variable_name_token1;
	lexer->mark_end(lexer);
	if (ts_lex_advence_map_937(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(448, s));
	if (('1' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_938(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__multiline_variable_name_token1;
	lexer->mark_end(lexer);
	if (ts_lex_advence_map_938(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(450, s));
	if (('1' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_939(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__multiline_variable_name_token1;
	lexer->mark_end(lexer);
	if (ts_lex_advence_map_939(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(453, s));
	if (('1' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_940(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__multiline_variable_name_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\\')
		return (lex_advance(16, s));
	if (('0' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	s->lookahead == '_' || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(940, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_941(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_AT2;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_942(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_AT2;
	lexer->mark_end(lexer);
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_943(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_0;
	lexer->mark_end(lexer);
	if (s->lookahead == '#')
		return (lex_advance(814, s));
	if (s->lookahead == '\\')
		return (lex_advance(17, s));
	if (s->lookahead == 'x')
		return (lex_advance(872, s));
	if (('0' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(807, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	s->lookahead == '_' || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if ((!s->eof && set_contains(sym_word_character_set_1, 11, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_944(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_0;
	lexer->mark_end(lexer);
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_945(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_0;
	lexer->mark_end(lexer);
	if (('0' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	s->lookahead == '_' || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_946(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym__;
	lexer->mark_end(lexer);
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_947(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym__;
	lexer->mark_end(lexer);
	if (s->lookahead == '\\')
		return (lex_advance(17, s));
	if (('0' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	s->lookahead == '_' || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_948(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym__;
	lexer->mark_end(lexer);
	if (('0' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	s->lookahead == '_' || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_949(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = sym_word;
	lexer->mark_end(lexer);
	if (s->lookahead == '.')
		return (lex_advance(777, s));
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_950(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = sym_word;
	lexer->mark_end(lexer);
	if (s->lookahead == '0')
		return (lex_advance(803, s));
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_951(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = sym_word;
	lexer->mark_end(lexer);
	if (s->lookahead == '=')
		return (lex_advance(606, s));
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_952(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = sym_word;
	lexer->mark_end(lexer);
	if (s->lookahead == '=')
		return (lex_advance(604, s));
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if (s->lookahead == '~')
		return (lex_advance(679, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_953(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = sym_word;
	lexer->mark_end(lexer);
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if (s->lookahead == 'a')
		return (lex_advance(954, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_954(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = sym_word;
	lexer->mark_end(lexer);
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if (s->lookahead == 'c')
		return (lex_advance(659, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_955(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = sym_word;
	lexer->mark_end(lexer);
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if (s->lookahead == 'n')
		return (lex_advance(549, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_956(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = sym_word;
	lexer->mark_end(lexer);
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if (s->lookahead == 's')
		return (lex_advance(953, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_957(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = sym_word;
	lexer->mark_end(lexer);
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if (('0' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_958(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = sym_word;
	lexer->mark_end(lexer);
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_default(t_lexer	*lexer, t_lex_state	*s)
{
	return (LEX_STOP);
}

static inline bool	ts_lex_advence_map_0(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 820, '"', 788, '#', 825, '$', 781, '%', 647, '&', 601, '\'', 491, '(', 654, ')', 655, '*', 824, '+', 770, ',', 557, '-', 768, '.', 949, '/', 642, '0', 944, ':', 763, ';', 554, '<', 607, '=', 827, '>', 616, '?', 837, '@', 822, '[', 674, '\\', 301, ']', 675, '^', 595, '_', 946, '`', 856, 'e', 956, 'i', 955, '{', 666, '|', 592, '}', 778, '~', 772, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_6(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 688, '!', 670, '"', 788, '#', 862, '$', 781, '%', 649, '&', 601, '\'', 491, '(', 654, ')', 655, '*', 638, '+', 771, '-', 769, '/', 644, '0', 803, ';', 555, '<', 607, '=', 560, '>', 616, '?', 761, '\\', 307, '^', 596, '`', 856, '|', 592, '~', 772, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_12(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 689, '!', 670, '"', 788, '#', 816, '$', 781, '%', 649, '&', 601, '\'', 491, '(', 654, ')', 655, '*', 638, '+', 630, '-', 633, '/', 644, '0', 943, ';', 555, '<', 607, '=', 560, '>', 616, '?', 761, '@', 942, '\\', 14, '^', 596, '_', 947, '`', 855, '|', 592, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_83(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 690, '!', 506, '#', 862, '%', 650, '&', 600, '*', 639, '+', 631, ',', 556, '-', 635, '/', 645, ';', 553, '<', 615, '=', 561, '>', 620, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_84(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 690, '"', 788, '#', 862, '$', 785, '&', 599, '(', 653, '+', 500, ',', 556, '-', 502, '0', 809, ';', 553, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_85(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 690, '#', 862, '$', 783, '&', 489, '(', 654, '-', 504, '0', 808, ':', 762, '<', 611, '>', 618, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_146(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 691, '!', 951, '"', 788, '#', 862, '$', 781, '%', 649, '&', 601, '\'', 491, '(', 654, ')', 655, '*', 638, '+', 630, '-', 633, '/', 644, '0', 803, ';', 555, '<', 607, '=', 560, '>', 616, '?', 761, '\\', 316, '^', 596, '`', 856, '|', 592, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_200(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 692, '!', 669, '"', 788, '#', 816, '$', 780, '&', 602, '*', 637, '-', 632, '0', 945, ';', 554, '<', 612, '>', 618, '?', 760, '@', 941, '\\', 81, '_', 948, 'e', 877, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_219(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 693, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602, '\'', 491, '(', 654, '*', 640, '-', 636, '0', 943, ';', 554, '<', 609, '=', 952, '>', 617, '?', 761, '@', 942, '\\', 27, '_', 947, '`', 855, 'e', 871, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_236(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 694, '!', 951, '"', 788, '#', 862, '$', 781, '%', 649, '&', 601, '\'', 491, '(', 654, ')', 655, '*', 638, '+', 630, '-', 633, '/', 644, '0', 803, ';', 555, '<', 607, '=', 560, '>', 616, '?', 761, '\\', 317, '^', 596, '`', 855, '|', 592, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_237(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 695, '!', 669, '"', 788, '#', 816, '$', 780, '&', 602, '*', 637, '-', 632, '0', 945, ';', 554, '<', 612, '>', 618, '?', 760, '@', 941, '\\', 91, '_', 948, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_238(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 696, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602, '\'', 491, '(', 654, '*', 640, '-', 636, '0', 943, ';', 554, '<', 609, '=', 952, '>', 617, '?', 761, '@', 942, '\\', 30, '_', 947, '`', 855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_239(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 697, '"', 788, '#', 862, '$', 781, '&', 602, '\'', 491, '(', 654, '-', 950, '0', 803, ';', 554, '<', 609, '=', 952, '>', 617, '\\', 321, '`', 855, 'e', 956, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_240(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 698, '!', 669, '"', 788, '#', 816, '$', 780, '&', 602, '*', 637, '-', 632, '0', 945, ';', 554, '<', 613, '>', 618, '?', 760, '@', 941, '\\', 183, '_', 948, 'e', 877, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_241(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 699, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602, '\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, ';', 554, '<', 609, '=', 952, '>', 617, '?', 761, '@', 942, '\\', 153, '_', 947, '`', 855, 'e', 871, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_242(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 700, '"', 788, '#', 862, '$', 781, '&', 602, '\'', 491, '(', 654, '-', 950, '0', 803, ';', 554, '<', 609, '=', 952, '>', 617, '\\', 322, '`', 855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_243(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 701, '!', 669, '"', 788, '#', 816, '$', 780, '&', 602, '*', 637, '-', 632, '0', 945, ';', 554, '<', 613, '>', 618, '?', 760, '@', 941, '\\', 185, '_', 948, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_244(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 702, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602, '\'', 491, '(', 654, ')', 655, '*', 640, '-', 636, '0', 943, ';', 555, '<', 609, '=', 952, '>', 617, '?', 761, '@', 942, '\\', 32, '_', 947, '`', 855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_245(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 703, '"', 788, '#', 862, '$', 781, '&', 602, '\'', 491, '(', 654, ')', 655, '-', 950, '0', 803, ';', 555, '<', 609, '=', 952, '>', 617, '\\', 323, '`', 855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_246(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 704, '!', 669, '"', 788, '#', 816, '$', 780, '&', 602, '*', 637, '-', 632, '0', 945, ';', 555, '<', 612, '>', 618, '?', 760, '@', 941, '\\', 96, '_', 948, '`', 855, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_247(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 705, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602, '\'', 491, '(', 654, '*', 640, '-', 636, '0', 943, ';', 555, '<', 609, '=', 952, '>', 617, '?', 761, '@', 942, '\\', 156, '_', 947, '`', 855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_248(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 706, '"', 788, '#', 862, '$', 781, '&', 602, '\'', 491, '(', 494, '-', 950, '0', 804, ';', 554, '<', 610, '>', 617, '\\', 324, '`', 855, 'e', 866, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_249(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 707, '!', 669, '"', 788, '#', 816, '$', 780, '&', 602, ')', 655, '*', 637, '-', 632, '0', 945, ';', 555, '<', 612, '>', 618, '?', 760, '@', 941, '\\', 98, '_', 948, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_250(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 708, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602, '\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, ';', 554, '<', 609, '=', 952, '>', 617, '?', 761, '@', 942, '\\', 202, '_', 947, '`', 855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_251(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 709, '"', 788, '#', 862, '$', 781, '&', 602, '\'', 491, '(', 494, '-', 950, '0', 804, ';', 554, '<', 610, '>', 617, '\\', 325, '`', 855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_252(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 710, '!', 669, '"', 788, '#', 816, '$', 780, '&', 602, '*', 637, '-', 632, '0', 945, ';', 555, '<', 612, '>', 618, '?', 760, '@', 941, '\\', 211, '_', 948, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_253(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 711, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602, '\'', 491, '(', 494, ')', 655, '*', 640, '-', 636, '0', 943, ';', 555, '<', 609, '=', 952, '>', 617, '?', 761, '@', 942, '\\', 158, '_', 947, '`', 855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_254(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 712, '"', 788, '#', 862, '$', 781, '&', 602, '\'', 491, '(', 494, ')', 655, '-', 950, '0', 804, ';', 555, '<', 610, '>', 617, '\\', 326, '`', 855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_255(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 713, '!', 669, '"', 788, '#', 816, '$', 780, '&', 602, '*', 637, '-', 632, '0', 945, ';', 555, '<', 613, '>', 618, '?', 760, '@', 941, '\\', 188, '_', 948, '`', 855, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_256(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 714, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602, '\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, ';', 555, '<', 609, '=', 952, '>', 617, '?', 761, '@', 942, '\\', 215, '_', 947, '`', 855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_257(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 715, '"', 788, '#', 862, '$', 781, '&', 602, '\'', 491, '(', 494, '-', 950, '0', 803, ';', 554, '<', 609, '>', 617, '\\', 327, '`', 855, 'e', 956, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_258(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 716, '!', 669, '"', 788, '#', 816, '$', 780, '&', 602, '*', 637, '-', 632, '0', 945, ';', 555, '<', 613, '>', 618, '?', 760, '@', 941, '\\', 218, '_', 948, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_259(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 717, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602, '\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, ';', 554, '<', 609, '>', 617, '?', 761, '@', 942, '\\', 37, '_', 947, '`', 855, 'e', 871, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_260(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 718, '"', 788, '#', 862, '$', 781, '&', 602, '\'', 491, '(', 494, '-', 950, '0', 803, ';', 554, '<', 609, '>', 617, '\\', 328, '`', 855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_261(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 719, '!', 669, '"', 788, '#', 816, '$', 780, '&', 602, ')', 655, '*', 637, '-', 632, '0', 945, ';', 555, '<', 613, '>', 618, '?', 760, '@', 941, '\\', 190, '_', 948, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_262(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 720, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602, '\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, ';', 554, '<', 610, '>', 617, '?', 761, '@', 942, '\\', 222, '_', 947, '`', 855, 'e', 871, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_263(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 721, '"', 788, '#', 862, '$', 781, '&', 602, '\'', 491, '(', 494, '-', 950, '0', 803, ';', 554, '<', 610, '>', 617, '\\', 397, '`', 855, 'e', 956, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_264(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 722, '!', 669, '"', 788, '#', 816, '$', 780, '&', 489, '*', 637, '-', 632, '0', 945, '<', 612, '>', 618, '?', 760, '@', 941, '\\', 106, '_', 948, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_265(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 723, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602, '\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, ';', 554, '<', 609, '>', 617, '?', 761, '@', 942, '\\', 43, '_', 947, '`', 855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_266(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 724, '"', 788, '#', 862, '$', 781, '&', 602, '\'', 491, '(', 494, ')', 655, '-', 950, '0', 803, ';', 555, '<', 609, '>', 617, '\\', 331, '`', 855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_267(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 725, '!', 669, '"', 788, '#', 816, '$', 780, '&', 489, '*', 637, '-', 632, '0', 945, '<', 613, '>', 618, '?', 760, '@', 941, '\\', 193, '_', 948, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_268(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 726, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602, '\'', 491, '(', 494, ')', 655, '*', 640, '-', 636, '0', 943, ';', 555, '<', 609, '>', 617, '?', 761, '@', 942, '\\', 46, '_', 947, '`', 855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_269(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 727, '"', 788, '#', 862, '$', 781, '&', 602, '\'', 491, '(', 494, '-', 950, '0', 803, ';', 554, '<', 610, '>', 617, '\\', 398, '`', 855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_270(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 728, '!', 669, '"', 788, '#', 816, '$', 780, '&', 489, '*', 637, '-', 632, '0', 945, '<', 611, '>', 618, '?', 760, '@', 941, '\\', 213, '_', 948, '|', 516, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_271(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 729, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602, '\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, ';', 554, '<', 610, '>', 617, '?', 761, '@', 942, '\\', 226, '_', 947, '`', 855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_272(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 730, '"', 788, '#', 862, '$', 781, '&', 602, '\'', 491, '(', 494, ')', 655, '-', 950, '0', 803, ';', 555, '<', 610, '>', 617, '\\', 399, '`', 855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_273(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 731, '!', 669, '"', 788, '#', 816, '$', 780, '&', 599, '*', 637, '-', 632, '0', 945, ';', 555, '?', 760, '@', 941, '\\', 128, '_', 948, 'i', 876, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_274(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 732, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602, '\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, ';', 555, '<', 609, '>', 617, '?', 761, '@', 942, '\\', 166, '_', 947, '`', 855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_275(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 733, '"', 788, '#', 862, '$', 781, '&', 489, '\'', 491, '(', 494, '-', 950, '0', 803, '<', 608, '>', 617, '\\', 333, '`', 855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_276(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 734, '!', 672, '"', 788, '#', 816, '$', 781, '&', 489, '\'', 491, '(', 654, '*', 640, '-', 636, '0', 943, '<', 609, '=', 952, '>', 617, '?', 761, '@', 942, '\\', 48, '_', 947, '`', 855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_277(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 735, '"', 788, '#', 862, '$', 781, '&', 602, '\'', 491, '(', 654, '-', 950, '0', 803, ';', 554, '<', 609, '=', 952, '>', 617, '\\', 335, '`', 856, 'e', 956, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_278(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 736, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602, '\'', 491, '(', 494, ')', 655, '*', 640, '-', 636, '0', 943, ';', 555, '<', 610, '>', 617, '?', 761, '@', 942, '\\', 228, '_', 947, '`', 855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_279(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 737, '"', 788, '#', 862, '$', 781, '&', 602, '\'', 491, '(', 654, '-', 950, '0', 803, ';', 554, '<', 609, '=', 952, '>', 617, '\\', 337, '`', 856, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_280(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 738, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602, '\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, ';', 555, '<', 610, '>', 617, '?', 761, '@', 942, '\\', 207, '_', 947, '`', 855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_281(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 739, '"', 788, '#', 862, '$', 781, '&', 602, '\'', 491, '(', 654, ')', 655, '-', 950, '0', 803, ';', 555, '<', 609, '=', 952, '>', 617, '\\', 339, '`', 856, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_282(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 740, '!', 672, '"', 788, '#', 816, '$', 781, '&', 489, '\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, '<', 609, '=', 952, '>', 617, '?', 761, '@', 942, '\\', 168, '_', 947, '`', 855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_283(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 741, '"', 788, '#', 862, '$', 781, '&', 602, '\'', 491, '(', 494, '-', 950, '0', 804, ';', 554, '<', 610, '>', 617, '\\', 341, '`', 856, 'e', 866, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_284(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 742, '!', 672, '"', 788, '#', 816, '$', 781, '&', 489, '\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, '<', 609, '>', 617, '?', 761, '@', 942, '\\', 58, '_', 947, '`', 855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_285(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 743, '"', 788, '#', 862, '$', 781, '&', 602, '\'', 491, '(', 494, '-', 950, '0', 803, ';', 554, '<', 609, '>', 617, '\\', 343, '`', 856, 'e', 956, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_286(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 744, '!', 672, '"', 788, '#', 816, '$', 781, '&', 489, '\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, '<', 610, '>', 617, '?', 761, '@', 942, '\\', 233, '_', 947, '`', 855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_287(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 745, '"', 788, '#', 862, '$', 781, '&', 602, '\'', 491, '(', 494, '-', 950, '0', 804, ';', 554, '<', 610, '>', 617, '\\', 344, '`', 856, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_288(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 746, '!', 672, '"', 788, '#', 816, '$', 781, '&', 489, '\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, '<', 608, '>', 617, '?', 761, '@', 942, '\\', 176, '_', 947, '`', 855, '|', 516, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_289(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 747, '"', 788, '#', 862, '$', 781, '&', 602, '\'', 491, '(', 494, '-', 950, '0', 803, ';', 554, '<', 609, '>', 617, '\\', 346, '`', 856, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_290(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 748, '!', 672, '"', 788, '#', 816, '$', 781, '&', 599, '\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, ';', 555, '<', 495, '>', 496, '?', 761, '@', 942, '\\', 100, '_', 947, '`', 855, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_291(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 749, '"', 788, '#', 862, '$', 781, '&', 602, '\'', 491, '(', 494, '-', 950, '0', 803, ';', 554, '<', 610, '>', 617, '\\', 347, '`', 856, 'e', 956, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_292(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 750, '!', 672, '"', 788, '#', 816, '$', 781, '\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, '<', 495, '>', 496, '?', 761, '@', 942, '\\', 112, '_', 947, '`', 855, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_293(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 751, '"', 788, '#', 862, '$', 781, '&', 602, '\'', 491, '(', 494, ')', 655, '-', 950, '0', 804, ';', 555, '<', 610, '>', 617, '\\', 349, '`', 856, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_294(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 752, '"', 788, '#', 862, '$', 781, '&', 602, '\'', 491, '(', 494, ')', 655, '-', 950, '0', 803, ';', 555, '<', 609, '>', 617, '\\', 350, '`', 856, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_295(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 753, '"', 788, '#', 862, '$', 781, '&', 602, '\'', 491, '(', 494, '-', 950, '0', 803, ';', 554, '<', 610, '>', 617, '\\', 351, '`', 856, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_296(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 754, '"', 788, '#', 862, '$', 781, '&', 602, '\'', 491, '(', 494, ')', 655, '-', 950, '0', 803, ';', 555, '<', 610, '>', 617, '\\', 354, '`', 856, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_297(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 755, '"', 788, '#', 862, '$', 781, '&', 599, '\'', 491, '(', 654, '-', 950, '0', 803, ';', 555, '<', 495, '>', 496, '\\', 357, '`', 855, 'e', 956, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_298(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 756, '"', 788, '#', 862, '$', 781, '&', 489, '\'', 491, '(', 494, '-', 950, '0', 803, '<', 608, '>', 617, '\\', 370, '`', 856, '|', 516, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_299(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 757, '"', 788, '#', 862, '$', 781, '&', 599, '\'', 491, '(', 494, '-', 950, '0', 803, ';', 555, '<', 495, '>', 496, '\\', 372, '`', 855, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_300(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 758, '"', 788, '#', 862, '$', 781, '&', 599, '\'', 491, '(', 494, '-', 950, '0', 803, ';', 555, '<', 495, '>', 496, '\\', 381, '`', 856, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_401(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 670, '"', 788, '#', 816, '$', 781, '%', 647, '&', 601, '\'', 491, '(', 654, ')', 655, '*', 638, '+', 770, ',', 557, '-', 768, '/', 642, '0', 944, ':', 765, ';', 554, '<', 607, '=', 563, '>', 616, '?', 761, '@', 942, '[', 674, '\\', 301, ']', 675, '^', 595, '_', 946, '`', 856, 'e', 956, 'i', 955, '{', 666, '|', 592, '}', 818, '~', 772, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_402(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 670, '"', 788, '#', 816, '$', 781, '%', 649, '&', 601, '\'', 491, '(', 654, '*', 638, '+', 630, '-', 633, '/', 644, '0', 943, '<', 607, '=', 560, '>', 616, '?', 761, '@', 942, '\\', 19, ']', 675, '^', 596, '_', 947, '`', 855, '|', 592, '[', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_403(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 670, '"', 788, '#', 862, '$', 781, '%', 649, '&', 601, '\'', 491, '(', 654, '*', 638, '+', 771, '-', 769, '/', 644, '0', 803, '<', 607, '=', 560, '>', 616, '?', 761, '\\', 308, ']', 675, '^', 596, '`', 856, '|', 592, '~', 772, '[', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_404(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 670, '"', 788, '#', 862, '$', 781, '%', 649, '&', 600, '\'', 491, '(', 654, ')', 655, '*', 638, '+', 771, '-', 769, '/', 644, '0', 803, '<', 614, '=', 560, '>', 619, '?', 761, '\\', 311, '^', 596, '`', 856, '|', 594, '~', 772, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_405(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 670, '"', 788, '#', 862, '$', 781, '%', 649, '&', 600, '\'', 491, '(', 654, ')', 499, '*', 638, '+', 771, '-', 769, '/', 644, '0', 803, '<', 614, '=', 560, '>', 619, '?', 761, '\\', 314, '^', 596, '`', 856, '|', 594, '~', 772, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_406(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 670, '"', 788, '#', 862, '$', 781, '%', 649, '&', 600, '\'', 491, '(', 654, '*', 638, '+', 771, '-', 769, '/', 644, '0', 803, ':', 765, '<', 614, '=', 560, '>', 619, '?', 761, '\\', 313, '^', 596, '`', 856, '|', 594, '~', 772, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_407(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 670, '"', 788, '#', 862, '$', 781, '%', 649, '&', 600, '\'', 491, '(', 654, '*', 638, '+', 771, '-', 769, '/', 644, '0', 803, '<', 614, '=', 560, '>', 619, '?', 761, '\\', 312, ']', 675, '^', 596, '`', 856, '|', 594, '~', 772, '[', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_408(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 670, '"', 788, '#', 862, '$', 781, '%', 649, '&', 600, '\'', 491, '(', 654, '*', 638, '+', 771, '-', 769, '/', 644, '0', 803, '<', 614, '=', 560, '>', 619, '?', 761, '\\', 315, ']', 787, '^', 596, '`', 856, '|', 594, '~', 772, '[', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_409(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 672, '"', 788, '#', 816, '$', 781, '&', 508, '\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, '<', 608, '>', 617, '?', 761, '@', 942, '\\', 74, '_', 947, '`', 855, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_410(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 672, '"', 788, '#', 816, '$', 781, '&', 489, '\'', 491, '(', 654, '*', 640, '-', 636, '0', 943, '<', 609, '=', 952, '>', 617, '?', 761, '@', 942, '\\', 51, '_', 947, '`', 855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_411(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 672, '"', 788, '#', 816, '$', 781, '&', 489, '\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, '<', 609, '=', 952, '>', 617, '?', 761, '@', 942, '\\', 171, '_', 947, '`', 855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_412(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 672, '"', 788, '#', 816, '$', 781, '&', 489, '\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, '<', 609, '>', 617, '?', 761, '@', 942, '\\', 55, ']', 675, '_', 947, '`', 855, '|', 593, '[', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_413(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 672, '"', 788, '#', 816, '$', 781, '&', 489, '\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, '<', 609, '>', 617, '?', 761, '@', 942, '\\', 62, '_', 947, '`', 855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_414(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 672, '"', 788, '#', 816, '$', 781, '&', 489, '\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, '<', 610, '>', 617, '?', 761, '@', 942, '\\', 231, ']', 675, '_', 947, '`', 855, '|', 593, '[', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_415(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 672, '"', 788, '#', 816, '$', 781, '&', 489, '\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, '<', 610, '>', 617, '?', 761, '@', 942, '\\', 235, '_', 947, '`', 855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_416(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 672, '"', 788, '#', 816, '$', 781, '\'', 491, '(', 494, ')', 655, '*', 640, '-', 636, '0', 943, '<', 495, '>', 496, '?', 761, '@', 942, '\\', 110, '_', 947, '`', 855, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_417(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 672, '"', 788, '#', 862, '$', 781, '&', 508, '\'', 491, '(', 654, ')', 655, '-', 950, '0', 803, ';', 490, '<', 608, '>', 617, '[', 674, '\\', 304, '`', 855, '{', 666, '|', 590, ']', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_418(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 672, '"', 788, '#', 862, '$', 781, '&', 508, '\'', 491, '(', 654, ')', 499, '+', 771, '-', 769, '0', 803, '<', 608, '>', 617, '[', 674, '\\', 305, '`', 855, '{', 666, '|', 591, '~', 772, ']', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_419(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 672, '"', 788, '#', 862, '$', 781, '&', 508, '\'', 491, '(', 654, '+', 771, '-', 769, '0', 803, '<', 608, '>', 617, '[', 674, '\\', 306, ']', 675, '`', 855, '{', 666, '}', 786, '~', 772, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_420(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 672, '"', 788, '#', 862, '$', 781, '&', 508, '\'', 491, '(', 654, '+', 771, '-', 769, '0', 803, '<', 608, '>', 617, '[', 674, '\\', 320, '`', 855, '~', 772, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_421(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 672, '"', 788, '#', 862, '$', 781, '&', 508, '\'', 491, '(', 654, '-', 950, '0', 803, ';', 490, '<', 608, '>', 617, '[', 674, '\\', 309, '`', 855, 'e', 956, '{', 666, ']', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_422(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 672, '"', 788, '#', 862, '$', 781, '&', 508, '\'', 491, '(', 654, '-', 950, '0', 803, '<', 608, '>', 617, '[', 674, '\\', 310, ']', 786, '`', 855, '{', 666, '}', 667, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_423(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 672, '"', 788, '#', 862, '$', 781, '\'', 491, '(', 654, ')', 499, '+', 771, '-', 769, '0', 803, '<', 495, '>', 496, '\\', 352, '`', 855, '~', 772, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_424(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 672, '"', 788, '#', 862, '$', 781, '\'', 491, '(', 654, ')', 499, '+', 771, '-', 769, '0', 804, '<', 495, '>', 496, '\\', 332, '`', 855, '~', 772, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_425(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 951, '"', 788, '#', 862, '$', 781, '%', 649, '&', 601, '\'', 491, '(', 654, '*', 638, '+', 630, '-', 633, '/', 644, '0', 803, '<', 607, '=', 560, '>', 616, '?', 761, '\\', 318, ']', 675, '^', 596, '`', 856, '|', 592, '[', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_426(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 951, '"', 788, '#', 862, '$', 781, '%', 649, '&', 601, '\'', 491, '(', 654, '*', 638, '+', 630, '-', 633, '/', 644, '0', 803, '<', 607, '=', 560, '>', 616, '?', 761, '\\', 319, ']', 675, '^', 596, '`', 855, '|', 592, '[', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_427(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 671, '"', 788, '#', 816, '$', 780, '%', 650, '&', 600, ')', 655, '*', 639, '+', 631, '-', 634, '/', 645, '0', 945, '<', 615, '=', 562, '>', 620, '?', 760, '@', 941, '\\', 67, '^', 597, '_', 948, '|', 594, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_428(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 671, '"', 788, '#', 816, '$', 780, '%', 650, '&', 600, ')', 499, '*', 639, '+', 631, '-', 634, '/', 645, '0', 945, '<', 615, '=', 562, '>', 620, '?', 760, '@', 941, '\\', 181, '^', 597, '_', 948, '|', 594, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_429(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 671, '"', 788, '#', 816, '$', 780, '%', 650, '&', 600, '*', 639, '+', 631, '-', 634, '/', 645, '0', 945, ':', 762, '<', 615, '=', 562, '>', 620, '?', 760, '@', 941, '\\', 64, '^', 597, '_', 948, '|', 594, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_430(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 671, '"', 788, '#', 816, '$', 780, '%', 650, '&', 600, '*', 639, '+', 631, '-', 634, '/', 645, '0', 945, '<', 615, '=', 562, '>', 620, '?', 760, '@', 941, '\\', 60, ']', 675, '^', 597, '_', 948, '|', 594, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_431(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 671, '"', 788, '#', 816, '$', 780, '%', 650, '&', 600, '*', 639, '+', 631, '-', 634, '/', 645, '0', 945, '<', 615, '=', 562, '>', 620, '?', 760, '@', 941, '\\', 178, ']', 509, '^', 597, '_', 948, '|', 594, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_432(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 671, '"', 788, '#', 816, '$', 780, '%', 650, '&', 600, '*', 639, '+', 631, '-', 634, '/', 645, '0', 945, '<', 615, '=', 562, '>', 620, '?', 760, '@', 941, '\\', 69, '^', 597, '_', 948, '|', 594, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_433(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 506, '"', 788, '#', 862, '$', 785, '%', 650, '&', 600, ')', 499, '*', 639, '+', 631, ',', 556, '-', 634, '.', 503, '/', 645, ':', 762, ';', 490, '<', 615, '=', 562, '>', 620, '?', 760, '[', 673, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_434(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 506, '"', 788, '#', 862, '$', 785, '%', 650, '&', 600, ')', 499, '*', 639, '+', 631, ',', 556, '-', 634, '/', 645, ':', 762, ';', 490, '<', 615, '=', 562, '>', 620, '?', 760, '[', 673, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_435(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 506, '"', 788, '#', 862, '$', 498, '%', 650, '&', 600, '(', 494, ')', 655, '*', 639, '+', 631, ',', 556, '-', 634, '/', 645, '<', 615, '=', 562, '>', 620, '?', 760, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_436(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 506, '#', 862, '%', 650, '&', 600, ')', 655, '*', 639, '+', 631, ',', 556, '-', 635, '/', 645, '<', 615, '=', 561, '>', 620, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_437(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 506, '#', 862, '%', 650, '&', 600, ')', 655, '*', 639, '+', 631, '-', 634, '/', 645, '<', 615, '=', 562, '>', 620, '?', 760, '[', 673, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_438(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 506, '#', 862, '%', 650, '&', 600, ')', 655, '*', 639, '+', 631, '-', 634, '/', 645, '<', 615, '=', 562, '>', 620, '?', 760, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_439(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 506, '#', 862, '%', 650, '&', 600, ')', 655, '*', 639, '+', 631, '-', 634, '/', 645, '<', 615, '=', 562, '>', 620, '?', 760, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_440(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 506, '#', 862, '%', 650, '&', 600, ')', 499, '*', 639, '+', 631, ',', 556, '-', 634, '/', 645, ':', 762, '<', 615, '=', 562, '>', 620, '?', 760, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_441(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 506, '#', 862, '%', 650, '&', 600, ')', 499, '*', 639, '+', 631, ',', 556, '-', 635, '/', 645, '<', 615, '=', 561, '>', 620, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_442(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 506, '#', 862, '%', 650, '&', 600, ')', 499, '*', 639, '+', 631, ',', 556, '-', 635, '/', 645, '<', 615, '=', 561, '>', 620, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_443(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 506, '#', 862, '%', 650, '&', 600, ')', 499, '*', 639, '+', 631, '-', 634, '/', 645, ':', 762, '<', 615, '=', 562, '>', 620, '?', 760, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_444(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 669, '"', 788, '#', 816, '$', 780, '&', 489, '*', 637, '-', 632, '0', 945, '<', 612, '>', 618, '?', 760, '@', 941, '\\', 108, ']', 675, '_', 948, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_445(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 669, '"', 788, '#', 816, '$', 780, '&', 489, '*', 637, '-', 632, '0', 945, '<', 612, '>', 618, '?', 760, '@', 941, '\\', 114, '_', 948, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_446(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 669, '"', 788, '#', 816, '$', 780, '&', 489, '*', 637, '-', 632, '0', 945, '<', 613, '>', 618, '?', 760, '@', 941, '\\', 195, ']', 675, '_', 948, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_447(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 669, '"', 788, '#', 816, '$', 780, '&', 489, '*', 637, '-', 632, '0', 945, '<', 613, '>', 618, '?', 760, '@', 941, '\\', 197, '_', 948, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_448(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 669, '"', 788, '#', 816, '$', 780, ')', 655, '*', 637, '-', 632, '0', 945, '?', 760, '@', 941, '\\', 132, '_', 948, '|', 590, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_449(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 669, '"', 788, '#', 816, '$', 780, '*', 637, '-', 632, '0', 945, '?', 760, '@', 941, '\\', 135, '_', 948, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_450(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 669, '"', 788, '#', 816, '$', 780, '*', 637, '-', 632, '0', 945, '?', 760, '@', 941, '\\', 134, '_', 948, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_451(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 669, '"', 788, '#', 862, '$', 785, '&', 489, '(', 653, '+', 771, '-', 769, '0', 808, '<', 612, '>', 618, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_452(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 669, '#', 816, '$', 780, '*', 637, '-', 632, '0', 945, '?', 760, '@', 941, '\\', 136, '_', 948, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_453(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 669, '#', 816, '$', 780, '*', 637, '-', 632, '0', 945, '?', 760, '@', 941, '\\', 138, '_', 948, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_454(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 669, '#', 816, '$', 784, '*', 637, '-', 632, '0', 945, '?', 760, '@', 941, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_455(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 669, '#', 816, '$', 784, '*', 637, '-', 632, '0', 945, '?', 760, '@', 941, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_456(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 819, '#', 825, '$', 784, '*', 637, '-', 632, '0', 945, '=', 826, '?', 760, '@', 941, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_457(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'"', 788, '#', 862, '$', 781, '&', 508, '\'', 491, '(', 654, '-', 950, '0', 803, '<', 608, '>', 617, '[', 674, '\\', 330, '`', 855, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_458(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'"', 788, '#', 862, '$', 781, '&', 508, '\'', 491, '(', 494, ')', 655, '-', 950, '0', 803, '<', 608, '>', 617, '\\', 340, '`', 855, '|', 590, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_459(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'"', 788, '#', 862, '$', 781, '&', 508, '\'', 491, '(', 494, ')', 655, '-', 950, '0', 803, '<', 608, '>', 617, '\\', 371, '`', 856, '|', 590, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_460(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'"', 788, '#', 862, '$', 781, '&', 489, '\'', 491, '(', 654, ')', 655, '-', 950, '0', 803, '<', 609, '>', 617, '\\', 338, '`', 855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_461(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'"', 788, '#', 862, '$', 781, '&', 489, '\'', 491, '(', 654, '-', 950, '0', 803, '<', 609, '=', 952, '>', 617, '\\', 329, '`', 855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_462(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'"', 788, '#', 862, '$', 781, '&', 489, '\'', 491, '(', 654, '-', 950, '0', 803, '<', 609, '=', 952, '>', 617, '\\', 353, '`', 856, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_463(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'"', 788, '#', 862, '$', 781, '&', 489, '\'', 491, '(', 494, ')', 655, '-', 950, '0', 803, '<', 609, '>', 617, '\\', 358, '`', 856, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_464(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'"', 788, '#', 862, '$', 781, '&', 489, '\'', 491, '(', 494, '-', 950, '0', 803, '<', 609, '>', 617, '\\', 336, ']', 675, '`', 855, '|', 593, '[', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_465(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'"', 788, '#', 862, '$', 781, '&', 489, '\'', 491, '(', 494, '-', 950, '0', 803, '<', 609, '>', 617, '\\', 355, ']', 675, '`', 856, '|', 593, '[', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_466(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'"', 788, '#', 862, '$', 781, '&', 489, '\'', 491, '(', 494, '-', 950, '0', 803, '<', 610, '>', 617, '\\', 342, '`', 855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_467(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'"', 788, '#', 862, '$', 781, '&', 489, '\'', 491, '(', 494, '-', 950, '0', 803, '<', 610, '>', 617, '\\', 363, ']', 675, '`', 856, '|', 593, '[', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_468(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'"', 788, '#', 862, '$', 781, '&', 489, '\'', 491, '(', 494, '-', 950, '0', 803, '<', 610, '>', 617, '\\', 364, '`', 856, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_469(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'"', 788, '#', 862, '$', 781, '&', 489, '\'', 491, '(', 494, '-', 950, '0', 803, '<', 610, '>', 617, '\\', 400, ']', 675, '`', 855, '|', 593, '[', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_470(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'"', 788, '#', 862, '$', 781, '&', 489, '\'', 491, '(', 494, '-', 950, '0', 804, '<', 610, '>', 617, '\\', 334, '`', 855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_471(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'"', 788, '#', 862, '$', 781, '&', 489, '\'', 491, '(', 494, '-', 950, '0', 804, '<', 610, '>', 617, '\\', 359, '`', 856, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_472(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'"', 788, '#', 862, '$', 781, '\'', 491, '(', 654, '-', 950, '0', 803, '<', 495, '>', 496, '\\', 366, '`', 855, 'e', 956, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_473(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'"', 788, '#', 862, '$', 781, '\'', 491, '(', 654, '-', 950, '0', 803, '<', 495, '>', 496, '\\', 373, '`', 855, '}', 818, '[', 786, ']', 786, '{', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_474(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'"', 788, '#', 862, '$', 785, '&', 489, '(', 653, ')', 499, '+', 501, '-', 502, '0', 809, '<', 613, '=', 559, '>', 618, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_475(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'"', 788, '#', 862, '$', 782, '\'', 491, '(', 653, ')', 655, ';', 553, '<', 495, '>', 496, '\\', 389, '`', 855, '{', 666, '|', 590, '}', 818, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_476(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'"', 788, '#', 862, '$', 497, '%', 646, '*', 637, '+', 629, '-', 632, '/', 641, ':', 762, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_478(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'"', 788, '#', 863, '$', 781, '\'', 491, '(', 654, '-', 950, '0', 803, '<', 495, '>', 496, '\\', 374, '`', 855, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_479(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'"', 788, '#', 863, '$', 781, '\'', 491, '(', 494, '-', 950, '0', 803, '<', 495, '>', 496, '\\', 376, ']', 675, '`', 855, '[', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_481(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'#', 816, '%', 648, '*', 823, '+', 833, ',', 558, '-', 830, '/', 643, ':', 764, '=', 826, '?', 836, '@', 821, '[', 673, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_484(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'#', 862, '%', 646, '&', 489, '*', 637, '+', 629, '-', 632, '/', 641, '<', 613, '>', 618, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_485(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'#', 862, '&', 508, '(', 654, '<', 611, '>', 618, '[', 674, '\\', 392, '{', 666, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_487(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'#', 862, '&', 489, '<', 612, '>', 618, '\\', 384, ']', 675, '`', 510, '|', 593, '[', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_527(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 703, '"', 788, '#', 862, '$', 781, '&', 602, '\'', 491, '(', 654, ')', 655, '-', 950, '0', 803, ';', 555, '<', 609, '=', 952, '>', 617, '\\', 323, '`', 855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_528(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 705, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602, '\'', 491, '(', 654, '*', 640, '-', 636, '0', 943, ';', 555, '<', 609, '=', 952, '>', 617, '?', 761, '@', 942, '\\', 156, '_', 947, '`', 855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_529(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 710, '!', 669, '"', 788, '#', 816, '$', 780, '&', 602, '*', 637, '-', 632, '0', 945, ';', 555, '<', 612, '>', 618, '?', 760, '@', 941, '\\', 211, '_', 948, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_530(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 712, '"', 788, '#', 862, '$', 781, '&', 602, '\'', 491, '(', 494, ')', 655, '-', 950, '0', 804, ';', 555, '<', 610, '>', 617, '\\', 326, '`', 855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_531(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 714, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602, '\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, ';', 555, '<', 609, '=', 952, '>', 617, '?', 761, '@', 942, '\\', 215, '_', 947, '`', 855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_532(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 716, '!', 669, '"', 788, '#', 816, '$', 780, '&', 602, '*', 637, '-', 632, '0', 945, ';', 555, '<', 613, '>', 618, '?', 760, '@', 941, '\\', 218, '_', 948, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_533(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 724, '"', 788, '#', 862, '$', 781, '&', 602, '\'', 491, '(', 494, ')', 655, '-', 950, '0', 803, ';', 555, '<', 609, '>', 617, '\\', 331, '`', 855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_534(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 730, '"', 788, '#', 862, '$', 781, '&', 602, '\'', 491, '(', 494, ')', 655, '-', 950, '0', 803, ';', 555, '<', 610, '>', 617, '\\', 399, '`', 855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_535(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 732, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602, '\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, ';', 555, '<', 609, '>', 617, '?', 761, '@', 942, '\\', 166, '_', 947, '`', 855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_536(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 738, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602, '\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, ';', 555, '<', 610, '>', 617, '?', 761, '@', 942, '\\', 207, '_', 947, '`', 855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_537(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 739, '"', 788, '#', 862, '$', 781, '&', 602, '\'', 491, '(', 654, ')', 655, '-', 950, '0', 803, ';', 555, '<', 609, '=', 952, '>', 617, '\\', 339, '`', 856, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_538(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 751, '"', 788, '#', 862, '$', 781, '&', 602, '\'', 491, '(', 494, ')', 655, '-', 950, '0', 804, ';', 555, '<', 610, '>', 617, '\\', 349, '`', 856, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_539(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 752, '"', 788, '#', 862, '$', 781, '&', 602, '\'', 491, '(', 494, ')', 655, '-', 950, '0', 803, ';', 555, '<', 609, '>', 617, '\\', 350, '`', 856, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_540(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 754, '"', 788, '#', 862, '$', 781, '&', 602, '\'', 491, '(', 494, ')', 655, '-', 950, '0', 803, ';', 555, '<', 610, '>', 617, '\\', 354, '`', 856, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_545(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 670, '"', 788, '#', 816, '$', 781, '%', 647, '&', 601, '\'', 491, '(', 654, ')', 655, '*', 638, '+', 770, ',', 557, '-', 768, '/', 642, '0', 944, ':', 765, ';', 554, '<', 607, '=', 563, '>', 616, '?', 761, '@', 942, '[', 674, '\\', 301, ']', 675, '^', 595, '_', 946, '`', 856, 'e', 956, 'i', 955, '{', 666, '|', 592, '}', 818, '~', 772, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_546(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 672, '"', 788, '#', 862, '$', 781, '&', 508, '\'', 491, '(', 654, ')', 655, '-', 950, '0', 803, ';', 490, '<', 608, '>', 617, '[', 674, '\\', 304, '`', 855, '{', 666, '|', 590, ']', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_793(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 669, '"', 788, '#', 816, '$', 780, '*', 637, '-', 632, '0', 945, '?', 760, '@', 941, '\\', 135, '_', 948, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_794(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 669, '#', 816, '$', 780, '*', 637, '-', 632, '0', 945, '?', 760, '@', 941, '\\', 136, '_', 948, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_880(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 689, '!', 670, '"', 788, '#', 816, '$', 781, '%', 649, '&', 601, '\'', 491, '(', 654, ')', 655, '*', 638, '+', 630, '-', 633, '/', 644, '0', 943, ';', 555, '<', 607, '=', 560, '>', 616, '?', 761, '@', 942, '\\', 14, '^', 596, '_', 947, '`', 855, '|', 592, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_881(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 692, '!', 669, '"', 788, '#', 816, '$', 780, '&', 602, '*', 637, '-', 632, '0', 945, ';', 554, '<', 612, '>', 618, '?', 760, '@', 941, '\\', 81, '_', 948, 'e', 877, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_882(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 693, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602, '\'', 491, '(', 654, '*', 640, '-', 636, '0', 943, ';', 554, '<', 609, '=', 952, '>', 617, '?', 761, '@', 942, '\\', 27, '_', 947, '`', 855, 'e', 871, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_883(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 695, '!', 669, '"', 788, '#', 816, '$', 780, '&', 602, '*', 637, '-', 632, '0', 945, ';', 554, '<', 612, '>', 618, '?', 760, '@', 941, '\\', 91, '_', 948, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_884(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 696, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602, '\'', 491, '(', 654, '*', 640, '-', 636, '0', 943, ';', 554, '<', 609, '=', 952, '>', 617, '?', 761, '@', 942, '\\', 30, '_', 947, '`', 855, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_885(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 698, '!', 669, '"', 788, '#', 816, '$', 780, '&', 602, '*', 637, '-', 632, '0', 945, ';', 554, '<', 613, '>', 618, '?', 760, '@', 941, '\\', 183, '_', 948, 'e', 877, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_886(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 699, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602, '\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, ';', 554, '<', 609, '=', 952, '>', 617, '?', 761, '@', 942, '\\', 153, '_', 947, '`', 855, 'e', 871, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_887(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 701, '!', 669, '"', 788, '#', 816, '$', 780, '&', 602, '*', 637, '-', 632, '0', 945, ';', 554, '<', 613, '>', 618, '?', 760, '@', 941, '\\', 185, '_', 948, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_888(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 702, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602, '\'', 491, '(', 654, ')', 655, '*', 640, '-', 636, '0', 943, ';', 555, '<', 609, '=', 952, '>', 617, '?', 761, '@', 942, '\\', 32, '_', 947, '`', 855, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_889(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 704, '!', 669, '"', 788, '#', 816, '$', 780, '&', 602, '*', 637, '-', 632, '0', 945, ';', 555, '<', 612, '>', 618, '?', 760, '@', 941, '\\', 96, '_', 948, '`', 855, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_890(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 705, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602, '\'', 491, '(', 654, '*', 640, '-', 636, '0', 943, ';', 555, '<', 609, '=', 952, '>', 617, '?', 761, '@', 942, '\\', 156, '_', 947, '`', 855, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_891(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 707, '!', 669, '"', 788, '#', 816, '$', 780, '&', 602, ')', 655, '*', 637, '-', 632, '0', 945, ';', 555, '<', 612, '>', 618, '?', 760, '@', 941, '\\', 98, '_', 948, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_892(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 708, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602, '\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, ';', 554, '<', 609, '=', 952, '>', 617, '?', 761, '@', 942, '\\', 202, '_', 947, '`', 855, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_893(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 710, '!', 669, '"', 788, '#', 816, '$', 780, '&', 602, '*', 637, '-', 632, '0', 945, ';', 555, '<', 612, '>', 618, '?', 760, '@', 941, '\\', 211, '_', 948, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_894(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 711, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602, '\'', 491, '(', 494, ')', 655, '*', 640, '-', 636, '0', 943, ';', 555, '<', 609, '=', 952, '>', 617, '?', 761, '@', 942, '\\', 158, '_', 947, '`', 855, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_895(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 713, '!', 669, '"', 788, '#', 816, '$', 780, '&', 602, '*', 637, '-', 632, '0', 945, ';', 555, '<', 613, '>', 618, '?', 760, '@', 941, '\\', 188, '_', 948, '`', 855, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_896(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 714, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602, '\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, ';', 555, '<', 609, '=', 952, '>', 617, '?', 761, '@', 942, '\\', 215, '_', 947, '`', 855, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_897(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 716, '!', 669, '"', 788, '#', 816, '$', 780, '&', 602, '*', 637, '-', 632, '0', 945, ';', 555, '<', 613, '>', 618, '?', 760, '@', 941, '\\', 218, '_', 948, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_898(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 717, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602, '\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, ';', 554, '<', 609, '>', 617, '?', 761, '@', 942, '\\', 37, '_', 947, '`', 855, 'e', 871, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_899(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 719, '!', 669, '"', 788, '#', 816, '$', 780, '&', 602, ')', 655, '*', 637, '-', 632, '0', 945, ';', 555, '<', 613, '>', 618, '?', 760, '@', 941, '\\', 190, '_', 948, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_900(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 720, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602, '\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, ';', 554, '<', 610, '>', 617, '?', 761, '@', 942, '\\', 222, '_', 947, '`', 855, 'e', 871, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_901(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 722, '!', 669, '"', 788, '#', 816, '$', 780, '&', 489, '*', 637, '-', 632, '0', 945, '<', 612, '>', 618, '?', 760, '@', 941, '\\', 106, '_', 948, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_902(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 723, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602, '\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, ';', 554, '<', 609, '>', 617, '?', 761, '@', 942, '\\', 43, '_', 947, '`', 855, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_903(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 725, '!', 669, '"', 788, '#', 816, '$', 780, '&', 489, '*', 637, '-', 632, '0', 945, '<', 613, '>', 618, '?', 760, '@', 941, '\\', 193, '_', 948, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_904(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 726, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602, '\'', 491, '(', 494, ')', 655, '*', 640, '-', 636, '0', 943, ';', 555, '<', 609, '>', 617, '?', 761, '@', 942, '\\', 46, '_', 947, '`', 855, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_905(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 728, '!', 669, '"', 788, '#', 816, '$', 780, '&', 489, '*', 637, '-', 632, '0', 945, '<', 611, '>', 618, '?', 760, '@', 941, '\\', 213, '_', 948, '|', 516, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_906(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 729, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602, '\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, ';', 554, '<', 610, '>', 617, '?', 761, '@', 942, '\\', 226, '_', 947, '`', 855, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_907(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 731, '!', 669, '"', 788, '#', 816, '$', 780, '&', 599, '*', 637, '-', 632, '0', 945, ';', 555, '?', 760, '@', 941, '\\', 128, '_', 948, 'i', 876, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_908(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 732, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602, '\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, ';', 555, '<', 609, '>', 617, '?', 761, '@', 942, '\\', 166, '_', 947, '`', 855, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_909(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 734, '!', 672, '"', 788, '#', 816, '$', 781, '&', 489, '\'', 491, '(', 654, '*', 640, '-', 636, '0', 943, '<', 609, '=', 952, '>', 617, '?', 761, '@', 942, '\\', 48, '_', 947, '`', 855, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_910(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 736, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602, '\'', 491, '(', 494, ')', 655, '*', 640, '-', 636, '0', 943, ';', 555, '<', 610, '>', 617, '?', 761, '@', 942, '\\', 228, '_', 947, '`', 855, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_911(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 738, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602, '\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, ';', 555, '<', 610, '>', 617, '?', 761, '@', 942, '\\', 207, '_', 947, '`', 855, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_912(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 740, '!', 672, '"', 788, '#', 816, '$', 781, '&', 489, '\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, '<', 609, '=', 952, '>', 617, '?', 761, '@', 942, '\\', 168, '_', 947, '`', 855, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_913(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 742, '!', 672, '"', 788, '#', 816, '$', 781, '&', 489, '\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, '<', 609, '>', 617, '?', 761, '@', 942, '\\', 58, '_', 947, '`', 855, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_914(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 744, '!', 672, '"', 788, '#', 816, '$', 781, '&', 489, '\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, '<', 610, '>', 617, '?', 761, '@', 942, '\\', 233, '_', 947, '`', 855, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_915(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 746, '!', 672, '"', 788, '#', 816, '$', 781, '&', 489, '\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, '<', 608, '>', 617, '?', 761, '@', 942, '\\', 176, '_', 947, '`', 855, '|', 516, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_916(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 748, '!', 672, '"', 788, '#', 816, '$', 781, '&', 599, '\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, ';', 555, '<', 495, '>', 496, '?', 761, '@', 942, '\\', 100, '_', 947, '`', 855, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_917(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 750, '!', 672, '"', 788, '#', 816, '$', 781, '\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, '<', 495, '>', 496, '?', 761, '@', 942, '\\', 112, '_', 947, '`', 855, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_918(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 670, '"', 788, '#', 816, '$', 781, '%', 649, '&', 601, '\'', 491, '(', 654, '*', 638, '+', 630, '-', 633, '/', 644, '0', 943, '<', 607, '=', 560, '>', 616, '?', 761, '@', 942, '\\', 19, ']', 675, '^', 596, '_', 947, '`', 855, '|', 592, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_919(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 672, '"', 788, '#', 816, '$', 781, '&', 508, '\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, '<', 608, '>', 617, '?', 761, '@', 942, '\\', 74, '_', 947, '`', 855, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_920(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 672, '"', 788, '#', 816, '$', 781, '&', 489, '\'', 491, '(', 654, '*', 640, '-', 636, '0', 943, '<', 609, '=', 952, '>', 617, '?', 761, '@', 942, '\\', 51, '_', 947, '`', 855, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_921(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 672, '"', 788, '#', 816, '$', 781, '&', 489, '\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, '<', 609, '=', 952, '>', 617, '?', 761, '@', 942, '\\', 171, '_', 947, '`', 855, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_922(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 672, '"', 788, '#', 816, '$', 781, '&', 489, '\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, '<', 609, '>', 617, '?', 761, '@', 942, '\\', 55, ']', 675, '_', 947, '`', 855, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_923(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 672, '"', 788, '#', 816, '$', 781, '&', 489, '\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, '<', 609, '>', 617, '?', 761, '@', 942, '\\', 62, '_', 947, '`', 855, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_924(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 672, '"', 788, '#', 816, '$', 781, '&', 489, '\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, '<', 610, '>', 617, '?', 761, '@', 942, '\\', 231, ']', 675, '_', 947, '`', 855, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_925(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 672, '"', 788, '#', 816, '$', 781, '&', 489, '\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, '<', 610, '>', 617, '?', 761, '@', 942, '\\', 235, '_', 947, '`', 855, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_926(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 672, '"', 788, '#', 816, '$', 781, '\'', 491, '(', 494, ')', 655, '*', 640, '-', 636, '0', 943, '<', 495, '>', 496, '?', 761, '@', 942, '\\', 110, '_', 947, '`', 855, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_927(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 671, '"', 788, '#', 816, '$', 780, '%', 650, '&', 600, ')', 655, '*', 639, '+', 631, '-', 634, '/', 645, '0', 945, '<', 615, '=', 562, '>', 620, '?', 760, '@', 941, '\\', 67, '^', 597, '_', 948, '|', 594, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_928(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 671, '"', 788, '#', 816, '$', 780, '%', 650, '&', 600, ')', 499, '*', 639, '+', 631, '-', 634, '/', 645, '0', 945, '<', 615, '=', 562, '>', 620, '?', 760, '@', 941, '\\', 181, '^', 597, '_', 948, '|', 594, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_929(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 671, '"', 788, '#', 816, '$', 780, '%', 650, '&', 600, '*', 639, '+', 631, '-', 634, '/', 645, '0', 945, ':', 762, '<', 615, '=', 562, '>', 620, '?', 760, '@', 941, '\\', 64, '^', 597, '_', 948, '|', 594, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_930(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 671, '"', 788, '#', 816, '$', 780, '%', 650, '&', 600, '*', 639, '+', 631, '-', 634, '/', 645, '0', 945, '<', 615, '=', 562, '>', 620, '?', 760, '@', 941, '\\', 60, ']', 675, '^', 597, '_', 948, '|', 594, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_931(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 671, '"', 788, '#', 816, '$', 780, '%', 650, '&', 600, '*', 639, '+', 631, '-', 634, '/', 645, '0', 945, '<', 615, '=', 562, '>', 620, '?', 760, '@', 941, '\\', 178, ']', 509, '^', 597, '_', 948, '|', 594, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_932(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 671, '"', 788, '#', 816, '$', 780, '%', 650, '&', 600, '*', 639, '+', 631, '-', 634, '/', 645, '0', 945, '<', 615, '=', 562, '>', 620, '?', 760, '@', 941, '\\', 69, '^', 597, '_', 948, '|', 594, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_933(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 669, '"', 788, '#', 816, '$', 780, '&', 489, '*', 637, '-', 632, '0', 945, '<', 612, '>', 618, '?', 760, '@', 941, '\\', 108, ']', 675, '_', 948, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_934(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 669, '"', 788, '#', 816, '$', 780, '&', 489, '*', 637, '-', 632, '0', 945, '<', 612, '>', 618, '?', 760, '@', 941, '\\', 114, '_', 948, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_935(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 669, '"', 788, '#', 816, '$', 780, '&', 489, '*', 637, '-', 632, '0', 945, '<', 613, '>', 618, '?', 760, '@', 941, '\\', 195, ']', 675, '_', 948, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_936(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 669, '"', 788, '#', 816, '$', 780, '&', 489, '*', 637, '-', 632, '0', 945, '<', 613, '>', 618, '?', 760, '@', 941, '\\', 197, '_', 948, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_937(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 669, '"', 788, '#', 816, '$', 780, ')', 655, '*', 637, '-', 632, '0', 945, '?', 760, '@', 941, '\\', 132, '_', 948, '|', 590, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_938(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 669, '"', 788, '#', 816, '$', 780, '*', 637, '-', 632, '0', 945, '?', 760, '@', 941, '\\', 134, '_', 948, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_939(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 669, '#', 816, '$', 780, '*', 637, '-', 632, '0', 945, '?', 760, '@', 941, '\\', 138, '_', 948, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

bool	ts_lex_keywords(t_lexer	*lexer, t_state_id	state)
{
	t_lex_state	lex_state;

	lex_state = (t_lex_state){};
	lex_state.lex_ret = LEX_START;
	START_LEXER();
	eof = lexer->eof(lexer);
	while (lex_state.lex_ret != LEX_STOP)
	{
		if (lex_state.lex_ret & LEX_NEXT_STATE)
			lexer->advance(lexer, lex_state.skip);
		lex_state.lex_ret = LEX_STOP;
		lex_state.skip = false;
		lex_state.lookahead = lexer->lookahead;
		lex_state.lex_ret = ts_lex_keywords_func_choose(lexer, state, &lex_state);
	}
	return (lex_state.result);
}

enum e_lex_ret	ts_lex_keywords_func_0(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'A')
		return (lex_advance(1, s));
	if (s->lookahead == 'E')
		return (lex_advance(2, s));
	if (s->lookahead == 'K')
		return (lex_advance(3, s));
	if (s->lookahead == 'L')
		return (lex_advance(4, s));
	if (s->lookahead == 'P')
		return (lex_advance(5, s));
	if (s->lookahead == 'Q')
		return (lex_advance(6, s));
	if (s->lookahead == 'U')
		return (lex_advance(7, s));
	if (s->lookahead == '\\')
		return (lex_skip(8, s));
	if (s->lookahead == 'a')
		return (lex_advance(9, s));
	if (s->lookahead == 'c')
		return (lex_advance(10, s));
	if (s->lookahead == 'd')
		return (lex_advance(11, s));
	if (s->lookahead == 'e')
		return (lex_advance(12, s));
	if (s->lookahead == 'f')
		return (lex_advance(13, s));
	if (s->lookahead == 'i')
		return (lex_advance(14, s));
	if (s->lookahead == 'k')
		return (lex_advance(15, s));
	if (s->lookahead == 'l')
		return (lex_advance(16, s));
	if (s->lookahead == 'r')
		return (lex_advance(17, s));
	if (s->lookahead == 's')
		return (lex_advance(18, s));
	if (s->lookahead == 't')
		return (lex_advance(19, s));
	if (s->lookahead == 'u')
		return (lex_advance(20, s));
	if (s->lookahead == 'w')
		return (lex_advance(21, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(22, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_1(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_A;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_2(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_E;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_3(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_K;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_4(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_L;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_5(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_P;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_6(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_Q;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_7(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_U;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_8(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(23, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(22, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_9(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_a;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_10(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'a')
		return (lex_advance(24, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_11(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'e')
		return (lex_advance(25, s));
	if (s->lookahead == 'o')
		return (lex_advance(26, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_12(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'l')
		return (lex_advance(27, s));
	if (s->lookahead == 'x')
		return (lex_advance(28, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_13(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'i')
		return (lex_advance(29, s));
	if (s->lookahead == 'o')
		return (lex_advance(30, s));
	if (s->lookahead == 'u')
		return (lex_advance(31, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_14(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'f')
		return (lex_advance(32, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_15(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_k;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_16(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'o')
		return (lex_advance(33, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_17(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'e')
		return (lex_advance(34, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_18(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'e')
		return (lex_advance(35, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_19(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'h')
		return (lex_advance(36, s));
	if (s->lookahead == 'y')
		return (lex_advance(37, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_20(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_u;
	lexer->mark_end(lexer);
	if (s->lookahead == 'n')
		return (lex_advance(38, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_21(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'h')
		return (lex_advance(39, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_22(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\\')
		return (lex_skip(8, s));
	if (s->lookahead == 'c')
		return (lex_advance(10, s));
	if (s->lookahead == 'd')
		return (lex_advance(11, s));
	if (s->lookahead == 'e')
		return (lex_advance(12, s));
	if (s->lookahead == 'f')
		return (lex_advance(13, s));
	if (s->lookahead == 'i')
		return (lex_advance(14, s));
	if (s->lookahead == 'l')
		return (lex_advance(16, s));
	if (s->lookahead == 'r')
		return (lex_advance(17, s));
	if (s->lookahead == 's')
		return (lex_advance(18, s));
	if (s->lookahead == 't')
		return (lex_advance(19, s));
	if (s->lookahead == 'u')
		return (lex_advance(40, s));
	if (s->lookahead == 'w')
		return (lex_advance(21, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(22, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_23(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(22, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_24(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 's')
		return (lex_advance(41, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_25(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'c')
		return (lex_advance(42, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_26(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_do;
	lexer->mark_end(lexer);
	if (s->lookahead == 'n')
		return (lex_advance(43, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_27(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'i')
		return (lex_advance(44, s));
	if (s->lookahead == 's')
		return (lex_advance(45, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_28(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'p')
		return (lex_advance(46, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_29(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_fi;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_30(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'r')
		return (lex_advance(47, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_31(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'n')
		return (lex_advance(48, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_32(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_if;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_33(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'c')
		return (lex_advance(49, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_34(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'a')
		return (lex_advance(50, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_35(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'l')
		return (lex_advance(51, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_36(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'e')
		return (lex_advance(52, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_37(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'p')
		return (lex_advance(53, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_38(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 's')
		return (lex_advance(54, s));
	if (s->lookahead == 't')
		return (lex_advance(55, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_39(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'i')
		return (lex_advance(56, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_40(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'n')
		return (lex_advance(38, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_41(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'e')
		return (lex_advance(57, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_42(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'l')
		return (lex_advance(58, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_43(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'e')
		return (lex_advance(59, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_44(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'f')
		return (lex_advance(60, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_45(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'e')
		return (lex_advance(61, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_46(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'o')
		return (lex_advance(62, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_47(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_for;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_48(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'c')
		return (lex_advance(63, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_49(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'a')
		return (lex_advance(64, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_50(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'd')
		return (lex_advance(65, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_51(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'e')
		return (lex_advance(66, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_52(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'n')
		return (lex_advance(67, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_53(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'e')
		return (lex_advance(68, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_54(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'e')
		return (lex_advance(69, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_55(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'i')
		return (lex_advance(70, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_56(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'l')
		return (lex_advance(71, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_57(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_case;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_58(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'a')
		return (lex_advance(72, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_59(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_done;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_60(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_elif;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_61(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_else;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_62(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'r')
		return (lex_advance(73, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_63(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 't')
		return (lex_advance(74, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_64(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'l')
		return (lex_advance(75, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_65(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'o')
		return (lex_advance(76, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_66(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'c')
		return (lex_advance(77, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_67(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_then;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_68(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 's')
		return (lex_advance(78, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_69(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 't')
		return (lex_advance(79, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_70(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'l')
		return (lex_advance(80, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_71(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'e')
		return (lex_advance(81, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_72(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'r')
		return (lex_advance(82, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_73(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 't')
		return (lex_advance(83, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_74(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'i')
		return (lex_advance(84, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_75(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_local;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_76(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'n')
		return (lex_advance(85, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_77(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 't')
		return (lex_advance(86, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_78(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'e')
		return (lex_advance(87, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_79(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_unset;
	lexer->mark_end(lexer);
	if (s->lookahead == 'e')
		return (lex_advance(88, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_80(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_until;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_81(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_while;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_82(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'e')
		return (lex_advance(89, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_83(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_export;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_84(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'o')
		return (lex_advance(90, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_85(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'l')
		return (lex_advance(91, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_86(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_select;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_87(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 't')
		return (lex_advance(92, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_88(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'n')
		return (lex_advance(93, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_89(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_declare;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_90(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'n')
		return (lex_advance(94, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_91(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'y')
		return (lex_advance(95, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_92(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_typeset;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_93(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'v')
		return (lex_advance(96, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_94(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_function;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_95(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_readonly;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_96(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_unsetenv;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_default(t_lexer	*lexer, t_lex_state	*s)
{
	return (LEX_STOP);
}
