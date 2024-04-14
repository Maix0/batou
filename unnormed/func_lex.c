#include <stdbool.h>

static bool	ts_lex(TSLexer *lexer, TSStateId state)
{
	bool	result;
	bool	skip;
	bool	eof;
	int32_t	lookahead;

	result = false;
	skip = false;
	eof = false;
	goto start;
next_state:
	lexer->advance(lexer, skip);
start:
	skip = false;
	lookahead = lexer->lookahead;
	;
	eof = lexer->eof(lexer);
	switch (state)
	{
	case 0:
		if (eof)
		{
			state = 547;
			goto next_state;
		};
		{
			static const uint16_t map[] = {
				'!', 820, '"', 788, '#', 825, '$', 781, '%', 647, '&', 601,
					'\'', 491, '(', 654, ')', 655, '*', 824, '+', 770, ',', 557,
					'-', 768, '.', 949, '/', 642, '0', 944, ':', 763, ';', 554,
					'<', 607, '=', 827, '>', 616, '?', 837, '@', 822, '[', 674,
					'\\', 301, ']', 675, '^', 595, '_', 946, '`', 856, 'e', 956,
					'i', 955, '{', 666, '|', 592, '}', 778, '~', 772,
			};
			for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
			{
				if (map[i] == lookahead)
				{
					state = map[i + 1];
					goto next_state;
				}
			}
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 545;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return (result);
		;
	case 1:
		if (lookahead == '\n')
		{
			skip = true;
			state = 401;
			goto next_state;
		};
		return (result);
		;
	case 2:
		if (lookahead == '\n')
		{
			skip = true;
			state = 417;
			goto next_state;
		};
		return (result);
		;
	case 3:
		if (lookahead == '\n')
		{
			skip = true;
			state = 418;
			goto next_state;
		};
		return (result);
		;
	case 4:
		if (lookahead == '\n')
		{
			skip = true;
			state = 419;
			goto next_state;
		};
		return (result);
		;
	case 5:
		if (lookahead == '\n')
		{
			skip = true;
			state = 6;
			goto next_state;
		};
		return (result);
		;
	case 6:
	{
		static const uint16_t map[] = {
			'\n', 688, '!', 670, '"', 788, '#', 862, '$', 781, '%', 649, '&',
				601, '\'', 491, '(', 654, ')', 655, '*', 638, '+', 771, '-',
				769, '/', 644, '0', 803, ';', 555, '<', 607, '=', 560, '>', 616,
				'?', 761, '\\', 307, '^', 596, '`', 856, '|', 592, '~', 772,
				'[', 786, ']', 786, '{', 786, '}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 6;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 805;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return (result);
		;
	case 7:
		if (lookahead == '\n')
		{
			skip = true;
			state = 403;
			goto next_state;
		};
		return (result);
		;
	case 8:
		if (lookahead == '\n')
		{
			skip = true;
			state = 421;
			goto next_state;
		};
		return (result);
		;
	case 9:
		if (lookahead == '\n')
		{
			skip = true;
			state = 422;
			goto next_state;
		};
		return (result);
		;
	case 10:
		if (lookahead == '\n')
		{
			skip = true;
			state = 404;
			goto next_state;
		};
		return (result);
		;
	case 11:
		if (lookahead == '\n')
		{
			skip = true;
			state = 406;
			goto next_state;
		};
		return (result);
		;
	case 12:
	{
		static const uint16_t map[] = {
			'\n', 689, '!', 670, '"', 788, '#', 816, '$', 781, '%', 649, '&',
				601, '\'', 491, '(', 654, ')', 655, '*', 638, '+', 630, '-',
				633, '/', 644, '0', 943, ';', 555, '<', 607, '=', 560, '>', 616,
				'?', 761, '@', 942, '\\', 14, '^', 596, '_', 947, '`', 855, '|',
				592, '[', 786, ']', 786, '{', 786, '}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 12;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 807;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'z'))
		{
			state = 873;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return (result);
		;
	case 13:
		if (lookahead == '\n')
		{
			state = 880;
			goto next_state;
		};
		return (result);
		;
	case 14:
		if (lookahead == '\n')
		{
			state = 880;
			goto next_state;
		};
		if (lookahead == '\r')
		{
			state = 13;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 12;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return (result);
		;
	case 15:
		if (lookahead == '\n')
		{
			state = 940;
			goto next_state;
		};
		return (result);
		;
	case 16:
		if (lookahead == '\n')
		{
			state = 940;
			goto next_state;
		};
		if (lookahead == '\r')
		{
			state = 15;
			goto next_state;
		};
		return result;
		;
	case 17:
		if (lookahead == '\n')
		{
			state = 940;
			goto next_state;
		};
		if (lookahead == '\r')
		{
			state = 15;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '\t' || '\r' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 18:
		if (lookahead == '\n')
		{
			state = 918;
			goto next_state;
		};
		return result;
		;
	case 19:
		if (lookahead == '\n')
		{
			state = 918;
			goto next_state;
		};
		if (lookahead == '\r')
		{
			state = 18;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 402;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 20:
		if (lookahead == '\n')
		{
			skip = true;
			state = 146;
			goto next_state;
		};
		return result;
		;
	case 21:
		if (lookahead == '\n')
		{
			skip = true;
			state = 425;
			goto next_state;
		};
		return result;
		;
	case 22:
		if (lookahead == '\n')
		{
			skip = true;
			state = 420;
			goto next_state;
		};
		return result;
		;
	case 23:
		if (lookahead == '\n')
		{
			skip = true;
			state = 239;
			goto next_state;
		};
		return result;
		;
	case 24:
		if (lookahead == '\n')
		{
			skip = true;
			state = 242;
			goto next_state;
		};
		return result;
		;
	case 25:
		if (lookahead == '\n')
		{
			skip = true;
			state = 245;
			goto next_state;
		};
		return result;
		;
	case 26:
		if (lookahead == '\n')
		{
			state = 882;
			goto next_state;
		};
		return result;
		;
	case 27:
		if (lookahead == '\n')
		{
			state = 882;
			goto next_state;
		};
		if (lookahead == '\r')
		{
			state = 26;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 219;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 28:
		if (lookahead == '\n')
		{
			skip = true;
			state = 248;
			goto next_state;
		};
		return result;
		;
	case 29:
		if (lookahead == '\n')
		{
			state = 884;
			goto next_state;
		};
		return result;
		;
	case 30:
		if (lookahead == '\n')
		{
			state = 884;
			goto next_state;
		};
		if (lookahead == '\r')
		{
			state = 29;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 238;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 31:
		if (lookahead == '\n')
		{
			state = 888;
			goto next_state;
		};
		return result;
		;
	case 32:
		if (lookahead == '\n')
		{
			state = 888;
			goto next_state;
		};
		if (lookahead == '\r')
		{
			state = 31;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 244;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 33:
		if (lookahead == '\n')
		{
			skip = true;
			state = 251;
			goto next_state;
		};
		return result;
		;
	case 34:
		if (lookahead == '\n')
		{
			skip = true;
			state = 254;
			goto next_state;
		};
		return result;
		;
	case 35:
		if (lookahead == '\n')
		{
			skip = true;
			state = 257;
			goto next_state;
		};
		return result;
		;
	case 36:
		if (lookahead == '\n')
		{
			state = 898;
			goto next_state;
		};
		return result;
		;
	case 37:
		if (lookahead == '\n')
		{
			state = 898;
			goto next_state;
		};
		if (lookahead == '\r')
		{
			state = 36;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 259;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 38:
		if (lookahead == '\n')
		{
			skip = true;
			state = 260;
			goto next_state;
		};
		return result;
		;
	case 39:
		if (lookahead == '\n')
		{
			skip = true;
			state = 461;
			goto next_state;
		};
		return result;
		;
	case 40:
		if (lookahead == '\n')
		{
			skip = true;
			state = 457;
			goto next_state;
		};
		return result;
		;
	case 41:
		if (lookahead == '\n')
		{
			skip = true;
			state = 266;
			goto next_state;
		};
		return result;
		;
	case 42:
		if (lookahead == '\n')
		{
			state = 902;
			goto next_state;
		};
		return result;
		;
	case 43:
		if (lookahead == '\n')
		{
			state = 902;
			goto next_state;
		};
		if (lookahead == '\r')
		{
			state = 42;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 265;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 44:
		if (lookahead == '\n')
		{
			skip = true;
			state = 424;
			goto next_state;
		};
		return result;
		;
	case 45:
		if (lookahead == '\n')
		{
			state = 904;
			goto next_state;
		};
		return result;
		;
	case 46:
		if (lookahead == '\n')
		{
			state = 904;
			goto next_state;
		};
		if (lookahead == '\r')
		{
			state = 45;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 268;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 47:
		if (lookahead == '\n')
		{
			state = 909;
			goto next_state;
		};
		return result;
		;
	case 48:
		if (lookahead == '\n')
		{
			state = 909;
			goto next_state;
		};
		if (lookahead == '\r')
		{
			state = 47;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 276;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 49:
		if (lookahead == '\n')
		{
			skip = true;
			state = 275;
			goto next_state;
		};
		return result;
		;
	case 50:
		if (lookahead == '\n')
		{
			state = 920;
			goto next_state;
		};
		return result;
		;
	case 51:
		if (lookahead == '\n')
		{
			state = 920;
			goto next_state;
		};
		if (lookahead == '\r')
		{
			state = 50;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 410;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 52:
		if (lookahead == '\n')
		{
			skip = true;
			state = 470;
			goto next_state;
		};
		return result;
		;
	case 53:
		if (lookahead == '\n')
		{
			skip = true;
			state = 464;
			goto next_state;
		};
		return result;
		;
	case 54:
		if (lookahead == '\n')
		{
			state = 922;
			goto next_state;
		};
		return result;
		;
	case 55:
		if (lookahead == '\n')
		{
			state = 922;
			goto next_state;
		};
		if (lookahead == '\r')
		{
			state = 54;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 412;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 56:
		if (lookahead == '\n')
		{
			skip = true;
			state = 460;
			goto next_state;
		};
		return result;
		;
	case 57:
		if (lookahead == '\n')
		{
			state = 913;
			goto next_state;
		};
		return result;
		;
	case 58:
		if (lookahead == '\n')
		{
			state = 913;
			goto next_state;
		};
		if (lookahead == '\r')
		{
			state = 57;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 284;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 59:
		if (lookahead == '\n')
		{
			state = 930;
			goto next_state;
		};
		return result;
		;
	case 60:
		if (lookahead == '\n')
		{
			state = 930;
			goto next_state;
		};
		if (lookahead == '\r')
		{
			state = 59;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 430;
			goto next_state;
		};
		return result;
		;
	case 61:
		if (lookahead == '\n')
		{
			state = 923;
			goto next_state;
		};
		return result;
		;
	case 62:
		if (lookahead == '\n')
		{
			state = 923;
			goto next_state;
		};
		if (lookahead == '\r')
		{
			state = 61;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 413;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 63:
		if (lookahead == '\n')
		{
			state = 929;
			goto next_state;
		};
		return result;
		;
	case 64:
		if (lookahead == '\n')
		{
			state = 929;
			goto next_state;
		};
		if (lookahead == '\r')
		{
			state = 63;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 429;
			goto next_state;
		};
		return result;
		;
	case 65:
		if (lookahead == '\n')
		{
			skip = true;
			state = 466;
			goto next_state;
		};
		return result;
		;
	case 66:
		if (lookahead == '\n')
		{
			state = 927;
			goto next_state;
		};
		return result;
		;
	case 67:
		if (lookahead == '\n')
		{
			state = 927;
			goto next_state;
		};
		if (lookahead == '\r')
		{
			state = 66;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 427;
			goto next_state;
		};
		return result;
		;
	case 68:
		if (lookahead == '\n')
		{
			state = 932;
			goto next_state;
		};
		return result;
		;
	case 69:
		if (lookahead == '\n')
		{
			state = 932;
			goto next_state;
		};
		if (lookahead == '\r')
		{
			state = 68;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 432;
			goto next_state;
		};
		return result;
		;
	case 70:
		if (lookahead == '\n')
		{
			skip = true;
			state = 434;
			goto next_state;
		};
		return result;
		;
	case 71:
		if (lookahead == '\n')
		{
			skip = true;
			state = 435;
			goto next_state;
		};
		return result;
		;
	case 72:
		if (lookahead == '\n')
		{
			skip = true;
			state = 423;
			goto next_state;
		};
		return result;
		;
	case 73:
		if (lookahead == '\n')
		{
			state = 919;
			goto next_state;
		};
		return result;
		;
	case 74:
		if (lookahead == '\n')
		{
			state = 919;
			goto next_state;
		};
		if (lookahead == '\r')
		{
			state = 73;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 409;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 75:
		if (lookahead == '\n')
		{
			skip = true;
			state = 440;
			goto next_state;
		};
		return result;
		;
	case 76:
		if (lookahead == '\n')
		{
			skip = true;
			state = 297;
			goto next_state;
		};
		return result;
		;
	case 77:
		if (lookahead == '\n')
		{
			skip = true;
			state = 438;
			goto next_state;
		};
		return result;
		;
	case 78:
		if (lookahead == '\n')
		{
			skip = true;
			state = 443;
			goto next_state;
		};
		return result;
		;
	case 79:
		if (lookahead == '\n')
		{
			skip = true;
			state = 439;
			goto next_state;
		};
		return result;
		;
	case 80:
		if (lookahead == '\n')
		{
			state = 881;
			goto next_state;
		};
		return result;
		;
	case 81:
		if (lookahead == '\n')
		{
			state = 881;
			goto next_state;
		};
		if (lookahead == '\r')
		{
			state = 80;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 200;
			goto next_state;
		};
		return result;
		;
	case 82:
		if (lookahead == '\n')
		{
			skip = true;
			state = 83;
			goto next_state;
		};
		return result;
		;
	case 83:
	{
		static const uint16_t map[] = {
			'\n', 690, '!', 506, '#', 862, '%', 650, '&', 600, '*', 639, '+',
				631, ',', 556, '-', 635, '/', 645, ';', 553, '<', 615, '=', 561,
				'>', 620,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (lookahead == '\\')
		{
			skip = true;
			state = 365;
			goto next_state;
		};
		if (lookahead == '^')
		{
			state = 597;
			goto next_state;
		};
		if (lookahead == '|')
		{
			state = 594;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 83;
			goto next_state;
		};
		return result;
		;
	case 84:
	{
		static const uint16_t map[] = {
			'\n', 690, '"', 788, '#', 862, '$', 785, '&', 599, '(', 653, '+',
				500, ',', 556, '-', 502, '0', 809, ';', 553,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (lookahead == '\\')
		{
			skip = true;
			state = 378;
			goto next_state;
		};
		if (lookahead == '`')
		{
			state = 855;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 84;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 811;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('_' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 656;
			goto next_state;
		};
		return result;
		;
	case 85:
	{
		static const uint16_t map[] = {
			'\n', 690, '#', 862, '$', 783, '&', 489, '(', 654, '-', 504, '0',
				808, ':', 762, '<', 611, '>', 618,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (lookahead == '\\')
		{
			skip = true;
			state = 386;
			goto next_state;
		};
		if (lookahead == '`')
		{
			state = 855;
			goto next_state;
		};
		if (lookahead == '|')
		{
			state = 516;
			goto next_state;
		};
		if (lookahead == '}')
		{
			state = 818;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 85;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 810;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('_' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 879;
			goto next_state;
		};
		return result;
		;
	case 86:
		if (lookahead == '\n')
		{
			state = 690;
			goto next_state;
		};
		if (lookahead == '#')
		{
			state = 862;
			goto next_state;
		};
		if (lookahead == '&')
		{
			state = 602;
			goto next_state;
		};
		if (lookahead == ';')
		{
			state = 554;
			goto next_state;
		};
		if (lookahead == '<')
		{
			state = 612;
			goto next_state;
		};
		if (lookahead == '>')
		{
			state = 618;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			skip = true;
			state = 379;
			goto next_state;
		};
		if (lookahead == '`')
		{
			state = 510;
			goto next_state;
		};
		if (lookahead == 'e')
		{
			state = 514;
			goto next_state;
		};
		if (lookahead == '|')
		{
			state = 593;
			goto next_state;
		};
		if (('[' <= lookahead && lookahead <= ']') || ('{' <= lookahead
				&& lookahead <= '}'))
		{
			state = 786;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 86;
			goto next_state;
		};
		return result;
		;
	case 87:
		if (lookahead == '\n')
		{
			state = 690;
			goto next_state;
		};
		if (lookahead == '#')
		{
			state = 862;
			goto next_state;
		};
		if (lookahead == '&')
		{
			state = 602;
			goto next_state;
		};
		if (lookahead == ';')
		{
			state = 554;
			goto next_state;
		};
		if (lookahead == '<')
		{
			state = 613;
			goto next_state;
		};
		if (lookahead == '>')
		{
			state = 618;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			skip = true;
			state = 380;
			goto next_state;
		};
		if (lookahead == '`')
		{
			state = 510;
			goto next_state;
		};
		if (lookahead == 'e')
		{
			state = 514;
			goto next_state;
		};
		if (lookahead == '|')
		{
			state = 593;
			goto next_state;
		};
		if (('[' <= lookahead && lookahead <= ']') || ('{' <= lookahead
				&& lookahead <= '}'))
		{
			state = 786;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 87;
			goto next_state;
		};
		return result;
		;
	case 88:
		if (lookahead == '\n')
		{
			state = 690;
			goto next_state;
		};
		if (lookahead == '#')
		{
			state = 862;
			goto next_state;
		};
		if (lookahead == '&')
		{
			state = 489;
			goto next_state;
		};
		if (lookahead == '<')
		{
			state = 611;
			goto next_state;
		};
		if (lookahead == '>')
		{
			state = 618;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			skip = true;
			state = 390;
			goto next_state;
		};
		if (lookahead == '`')
		{
			state = 510;
			goto next_state;
		};
		if (lookahead == '|')
		{
			state = 516;
			goto next_state;
		};
		if (('[' <= lookahead && lookahead <= ']') || ('{' <= lookahead
				&& lookahead <= '}'))
		{
			state = 786;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 88;
			goto next_state;
		};
		return result;
		;
	case 89:
		if (lookahead == '\n')
		{
			state = 690;
			goto next_state;
		};
		if (lookahead == '#')
		{
			state = 862;
			goto next_state;
		};
		if (lookahead == '&')
		{
			state = 599;
			goto next_state;
		};
		if (lookahead == ';')
		{
			state = 555;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			skip = true;
			state = 394;
			goto next_state;
		};
		if (lookahead == '`')
		{
			state = 510;
			goto next_state;
		};
		if (lookahead == 'i')
		{
			state = 513;
			goto next_state;
		};
		if (('[' <= lookahead && lookahead <= ']') || lookahead == '{'
			|| lookahead == '}')
		{
			state = 786;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 89;
			goto next_state;
		};
		return result;
		;
	case 90:
		if (lookahead == '\n')
		{
			state = 883;
			goto next_state;
		};
		return result;
		;
	case 91:
		if (lookahead == '\n')
		{
			state = 883;
			goto next_state;
		};
		if (lookahead == '\r')
		{
			state = 90;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 237;
			goto next_state;
		};
		return result;
		;
	case 92:
		if (lookahead == '\n')
		{
			skip = true;
			state = 472;
			goto next_state;
		};
		return result;
		;
	case 93:
		if (lookahead == '\n')
		{
			skip = true;
			state = 437;
			goto next_state;
		};
		return result;
		;
	case 94:
		if (lookahead == '\n')
		{
			skip = true;
			state = 442;
			goto next_state;
		};
		return result;
		;
	case 95:
		if (lookahead == '\n')
		{
			state = 889;
			goto next_state;
		};
		return result;
		;
	case 96:
		if (lookahead == '\n')
		{
			state = 889;
			goto next_state;
		};
		if (lookahead == '\r')
		{
			state = 95;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 246;
			goto next_state;
		};
		return result;
		;
	case 97:
		if (lookahead == '\n')
		{
			state = 891;
			goto next_state;
		};
		return result;
		;
	case 98:
		if (lookahead == '\n')
		{
			state = 891;
			goto next_state;
		};
		if (lookahead == '\r')
		{
			state = 97;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 249;
			goto next_state;
		};
		return result;
		;
	case 99:
		if (lookahead == '\n')
		{
			state = 916;
			goto next_state;
		};
		return result;
		;
	case 100:
		if (lookahead == '\n')
		{
			state = 916;
			goto next_state;
		};
		if (lookahead == '\r')
		{
			state = 99;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 290;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 101:
		if (lookahead == '\n')
		{
			skip = true;
			state = 299;
			goto next_state;
		};
		return result;
		;
	case 102:
		if (lookahead == '\n')
		{
			skip = true;
			state = 473;
			goto next_state;
		};
		return result;
		;
	case 103:
		if (lookahead == '\n')
		{
			skip = true;
			state = 478;
			goto next_state;
		};
		return result;
		;
	case 104:
		if (lookahead == '\n')
		{
			skip = true;
			state = 482;
			goto next_state;
		};
		return result;
		;
	case 105:
		if (lookahead == '\n')
		{
			state = 901;
			goto next_state;
		};
		return result;
		;
	case 106:
		if (lookahead == '\n')
		{
			state = 901;
			goto next_state;
		};
		if (lookahead == '\r')
		{
			state = 105;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 264;
			goto next_state;
		};
		return result;
		;
	case 107:
		if (lookahead == '\n')
		{
			state = 933;
			goto next_state;
		};
		return result;
		;
	case 108:
		if (lookahead == '\n')
		{
			state = 933;
			goto next_state;
		};
		if (lookahead == '\r')
		{
			state = 107;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 444;
			goto next_state;
		};
		return result;
		;
	case 109:
		if (lookahead == '\n')
		{
			state = 926;
			goto next_state;
		};
		return result;
		;
	case 110:
		if (lookahead == '\n')
		{
			state = 926;
			goto next_state;
		};
		if (lookahead == '\r')
		{
			state = 109;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 416;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 111:
		if (lookahead == '\n')
		{
			state = 917;
			goto next_state;
		};
		return result;
		;
	case 112:
		if (lookahead == '\n')
		{
			state = 917;
			goto next_state;
		};
		if (lookahead == '\r')
		{
			state = 111;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 292;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 113:
		if (lookahead == '\n')
		{
			state = 934;
			goto next_state;
		};
		return result;
		;
	case 114:
		if (lookahead == '\n')
		{
			state = 934;
			goto next_state;
		};
		if (lookahead == '\r')
		{
			state = 113;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 445;
			goto next_state;
		};
		return result;
		;
	case 115:
		if (lookahead == '\n')
		{
			skip = true;
			state = 479;
			goto next_state;
		};
		return result;
		;
	case 116:
		if (lookahead == '\n')
		{
			skip = true;
			state = 451;
			goto next_state;
		};
		return result;
		;
	case 117:
		if (lookahead == '\n')
		{
			skip = true;
			state = 84;
			goto next_state;
		};
		return result;
		;
	case 118:
		if (lookahead == '\n')
		{
			skip = true;
			state = 86;
			goto next_state;
		};
		return result;
		;
	case 119:
		if (lookahead == '\n')
		{
			skip = true;
			state = 454;
			goto next_state;
		};
		return result;
		;
	case 120:
		if (lookahead == '\n')
		{
			skip = true;
			state = 474;
			goto next_state;
		};
		return result;
		;
	case 121:
		if (lookahead == '\n')
		{
			skip = true;
			state = 487;
			goto next_state;
		};
		return result;
		;
	case 122:
		if (lookahead == '\n')
		{
			skip = true;
			state = 483;
			goto next_state;
		};
		return result;
		;
	case 123:
		if (lookahead == '\n')
		{
			skip = true;
			state = 85;
			goto next_state;
		};
		return result;
		;
	case 124:
		if (lookahead == '\n')
		{
			skip = true;
			state = 484;
			goto next_state;
		};
		return result;
		;
	case 125:
		if (lookahead == '\n')
		{
			skip = true;
			state = 486;
			goto next_state;
		};
		return result;
		;
	case 126:
		if (lookahead == '\n')
		{
			skip = true;
			state = 475;
			goto next_state;
		};
		return result;
		;
	case 127:
		if (lookahead == '\n')
		{
			state = 907;
			goto next_state;
		};
		return result;
		;
	case 128:
		if (lookahead == '\n')
		{
			state = 907;
			goto next_state;
		};
		if (lookahead == '\r')
		{
			state = 127;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 273;
			goto next_state;
		};
		return result;
		;
	case 129:
		if (lookahead == '\n')
		{
			skip = true;
			state = 88;
			goto next_state;
		};
		return result;
		;
	case 130:
		if (lookahead == '\n')
		{
			skip = true;
			state = 455;
			goto next_state;
		};
		return result;
		;
	case 131:
		if (lookahead == '\n')
		{
			state = 937;
			goto next_state;
		};
		return result;
		;
	case 132:
		if (lookahead == '\n')
		{
			state = 937;
			goto next_state;
		};
		if (lookahead == '\r')
		{
			state = 131;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 448;
			goto next_state;
		};
		return result;
		;
	case 133:
		if (lookahead == '\n')
		{
			state = 938;
			goto next_state;
		};
		return result;
		;
	case 134:
		if (lookahead == '\n')
		{
			state = 938;
			goto next_state;
		};
		if (lookahead == '\r')
		{
			state = 133;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 450;
			goto next_state;
		};
		return result;
		;
	case 135:
		if (lookahead == '\n')
		{
			state = 793;
			goto next_state;
		};
		if (lookahead == '\r')
		{
			state = 790;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			state = 793;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 798;
			goto next_state;
		};
		return result;
		;
	case 136:
		if (lookahead == '\n')
		{
			state = 794;
			goto next_state;
		};
		if (lookahead == '\r')
		{
			state = 791;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			state = 794;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 798;
			goto next_state;
		};
		return result;
		;
	case 137:
		if (lookahead == '\n')
		{
			state = 939;
			goto next_state;
		};
		return result;
		;
	case 138:
		if (lookahead == '\n')
		{
			state = 939;
			goto next_state;
		};
		if (lookahead == '\r')
		{
			state = 137;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 453;
			goto next_state;
		};
		return result;
		;
	case 139:
		if (lookahead == '\n')
		{
			skip = true;
			state = 485;
			goto next_state;
		};
		return result;
		;
	case 140:
		if (lookahead == '\n')
		{
			skip = true;
			state = 476;
			goto next_state;
		};
		return result;
		;
	case 141:
		if (lookahead == '\n')
		{
			skip = true;
			state = 89;
			goto next_state;
		};
		return result;
		;
	case 142:
		if (lookahead == '\n')
		{
			skip = true;
			state = 477;
			goto next_state;
		};
		return result;
		;
	case 143:
		if (lookahead == '\n')
		{
			skip = true;
			state = 488;
			goto next_state;
		};
		return result;
		;
	case 144:
		if (lookahead == '\n')
		{
			skip = true;
			state = 407;
			goto next_state;
		};
		return result;
		;
	case 145:
		if (lookahead == '\n')
		{
			skip = true;
			state = 405;
			goto next_state;
		};
		return result;
		;
	case 146:
	{
		static const uint16_t map[] = {
			'\n', 691, '!', 951, '"', 788, '#', 862, '$', 781, '%', 649, '&',
				601, '\'', 491, '(', 654, ')', 655, '*', 638, '+', 630, '-',
				633, '/', 644, '0', 803, ';', 555, '<', 607, '=', 560, '>', 616,
				'?', 761, '\\', 316, '^', 596, '`', 856, '|', 592, '[', 786,
				']', 786, '{', 786, '}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 146;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 805;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 147:
		if (lookahead == '\n')
		{
			skip = true;
			state = 236;
			goto next_state;
		};
		return result;
		;
	case 148:
		if (lookahead == '\n')
		{
			skip = true;
			state = 426;
			goto next_state;
		};
		return result;
		;
	case 149:
		if (lookahead == '\n')
		{
			skip = true;
			state = 277;
			goto next_state;
		};
		return result;
		;
	case 150:
		if (lookahead == '\n')
		{
			skip = true;
			state = 279;
			goto next_state;
		};
		return result;
		;
	case 151:
		if (lookahead == '\n')
		{
			skip = true;
			state = 281;
			goto next_state;
		};
		return result;
		;
	case 152:
		if (lookahead == '\n')
		{
			state = 886;
			goto next_state;
		};
		return result;
		;
	case 153:
		if (lookahead == '\n')
		{
			state = 886;
			goto next_state;
		};
		if (lookahead == '\r')
		{
			state = 152;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 241;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 154:
		if (lookahead == '\n')
		{
			skip = true;
			state = 283;
			goto next_state;
		};
		return result;
		;
	case 155:
		if (lookahead == '\n')
		{
			state = 890;
			goto next_state;
		};
		return result;
		;
	case 156:
		if (lookahead == '\n')
		{
			state = 890;
			goto next_state;
		};
		if (lookahead == '\r')
		{
			state = 155;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 247;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 157:
		if (lookahead == '\n')
		{
			state = 894;
			goto next_state;
		};
		return result;
		;
	case 158:
		if (lookahead == '\n')
		{
			state = 894;
			goto next_state;
		};
		if (lookahead == '\r')
		{
			state = 157;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 253;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 159:
		if (lookahead == '\n')
		{
			skip = true;
			state = 287;
			goto next_state;
		};
		return result;
		;
	case 160:
		if (lookahead == '\n')
		{
			skip = true;
			state = 293;
			goto next_state;
		};
		return result;
		;
	case 161:
		if (lookahead == '\n')
		{
			skip = true;
			state = 285;
			goto next_state;
		};
		return result;
		;
	case 162:
		if (lookahead == '\n')
		{
			skip = true;
			state = 289;
			goto next_state;
		};
		return result;
		;
	case 163:
		if (lookahead == '\n')
		{
			skip = true;
			state = 462;
			goto next_state;
		};
		return result;
		;
	case 164:
		if (lookahead == '\n')
		{
			skip = true;
			state = 294;
			goto next_state;
		};
		return result;
		;
	case 165:
		if (lookahead == '\n')
		{
			state = 908;
			goto next_state;
		};
		return result;
		;
	case 166:
		if (lookahead == '\n')
		{
			state = 908;
			goto next_state;
		};
		if (lookahead == '\r')
		{
			state = 165;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 274;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 167:
		if (lookahead == '\n')
		{
			state = 912;
			goto next_state;
		};
		return result;
		;
	case 168:
		if (lookahead == '\n')
		{
			state = 912;
			goto next_state;
		};
		if (lookahead == '\r')
		{
			state = 167;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 282;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 169:
		if (lookahead == '\n')
		{
			skip = true;
			state = 298;
			goto next_state;
		};
		return result;
		;
	case 170:
		if (lookahead == '\n')
		{
			state = 921;
			goto next_state;
		};
		return result;
		;
	case 171:
		if (lookahead == '\n')
		{
			state = 921;
			goto next_state;
		};
		if (lookahead == '\r')
		{
			state = 170;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 411;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 172:
		if (lookahead == '\n')
		{
			skip = true;
			state = 471;
			goto next_state;
		};
		return result;
		;
	case 173:
		if (lookahead == '\n')
		{
			skip = true;
			state = 465;
			goto next_state;
		};
		return result;
		;
	case 174:
		if (lookahead == '\n')
		{
			skip = true;
			state = 458;
			goto next_state;
		};
		return result;
		;
	case 175:
		if (lookahead == '\n')
		{
			state = 915;
			goto next_state;
		};
		return result;
		;
	case 176:
		if (lookahead == '\n')
		{
			state = 915;
			goto next_state;
		};
		if (lookahead == '\r')
		{
			state = 175;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 288;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 177:
		if (lookahead == '\n')
		{
			state = 931;
			goto next_state;
		};
		return result;
		;
	case 178:
		if (lookahead == '\n')
		{
			state = 931;
			goto next_state;
		};
		if (lookahead == '\r')
		{
			state = 177;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 431;
			goto next_state;
		};
		return result;
		;
	case 179:
		if (lookahead == '\n')
		{
			skip = true;
			state = 468;
			goto next_state;
		};
		return result;
		;
	case 180:
		if (lookahead == '\n')
		{
			state = 928;
			goto next_state;
		};
		return result;
		;
	case 181:
		if (lookahead == '\n')
		{
			state = 928;
			goto next_state;
		};
		if (lookahead == '\r')
		{
			state = 180;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 428;
			goto next_state;
		};
		return result;
		;
	case 182:
		if (lookahead == '\n')
		{
			state = 885;
			goto next_state;
		};
		return result;
		;
	case 183:
		if (lookahead == '\n')
		{
			state = 885;
			goto next_state;
		};
		if (lookahead == '\r')
		{
			state = 182;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 240;
			goto next_state;
		};
		return result;
		;
	case 184:
		if (lookahead == '\n')
		{
			state = 887;
			goto next_state;
		};
		return result;
		;
	case 185:
		if (lookahead == '\n')
		{
			state = 887;
			goto next_state;
		};
		if (lookahead == '\r')
		{
			state = 184;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 243;
			goto next_state;
		};
		return result;
		;
	case 186:
		if (lookahead == '\n')
		{
			skip = true;
			state = 436;
			goto next_state;
		};
		return result;
		;
	case 187:
		if (lookahead == '\n')
		{
			state = 895;
			goto next_state;
		};
		return result;
		;
	case 188:
		if (lookahead == '\n')
		{
			state = 895;
			goto next_state;
		};
		if (lookahead == '\r')
		{
			state = 187;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 255;
			goto next_state;
		};
		return result;
		;
	case 189:
		if (lookahead == '\n')
		{
			state = 899;
			goto next_state;
		};
		return result;
		;
	case 190:
		if (lookahead == '\n')
		{
			state = 899;
			goto next_state;
		};
		if (lookahead == '\r')
		{
			state = 189;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 261;
			goto next_state;
		};
		return result;
		;
	case 191:
		if (lookahead == '\n')
		{
			skip = true;
			state = 300;
			goto next_state;
		};
		return result;
		;
	case 192:
		if (lookahead == '\n')
		{
			state = 903;
			goto next_state;
		};
		return result;
		;
	case 193:
		if (lookahead == '\n')
		{
			state = 903;
			goto next_state;
		};
		if (lookahead == '\r')
		{
			state = 192;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 267;
			goto next_state;
		};
		return result;
		;
	case 194:
		if (lookahead == '\n')
		{
			state = 935;
			goto next_state;
		};
		return result;
		;
	case 195:
		if (lookahead == '\n')
		{
			state = 935;
			goto next_state;
		};
		if (lookahead == '\r')
		{
			state = 194;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 446;
			goto next_state;
		};
		return result;
		;
	case 196:
		if (lookahead == '\n')
		{
			state = 936;
			goto next_state;
		};
		return result;
		;
	case 197:
		if (lookahead == '\n')
		{
			state = 936;
			goto next_state;
		};
		if (lookahead == '\r')
		{
			state = 196;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 447;
			goto next_state;
		};
		return result;
		;
	case 198:
		if (lookahead == '\n')
		{
			skip = true;
			state = 87;
			goto next_state;
		};
		return result;
		;
	case 199:
		if (lookahead == '\n')
		{
			skip = true;
			state = 408;
			goto next_state;
		};
		return result;
		;
	case 200:
	{
		static const uint16_t map[] = {
			'\n', 692, '!', 669, '"', 788, '#', 816, '$', 780, '&', 602, '*',
				637, '-', 632, '0', 945, ';', 554, '<', 612, '>', 618, '?', 760,
				'@', 941, '\\', 81, '_', 948, 'e', 877, '|', 593,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 200;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
		{
			state = 879;
			goto next_state;
		};
		return result;
		;
	case 201:
		if (lookahead == '\n')
		{
			state = 892;
			goto next_state;
		};
		return result;
		;
	case 202:
		if (lookahead == '\n')
		{
			state = 892;
			goto next_state;
		};
		if (lookahead == '\r')
		{
			state = 201;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 250;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 203:
		if (lookahead == '\n')
		{
			skip = true;
			state = 291;
			goto next_state;
		};
		return result;
		;
	case 204:
		if (lookahead == '\n')
		{
			skip = true;
			state = 295;
			goto next_state;
		};
		return result;
		;
	case 205:
		if (lookahead == '\n')
		{
			skip = true;
			state = 296;
			goto next_state;
		};
		return result;
		;
	case 206:
		if (lookahead == '\n')
		{
			state = 911;
			goto next_state;
		};
		return result;
		;
	case 207:
		if (lookahead == '\n')
		{
			state = 911;
			goto next_state;
		};
		if (lookahead == '\r')
		{
			state = 206;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 280;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 208:
		if (lookahead == '\n')
		{
			skip = true;
			state = 467;
			goto next_state;
		};
		return result;
		;
	case 209:
		if (lookahead == '\n')
		{
			skip = true;
			state = 463;
			goto next_state;
		};
		return result;
		;
	case 210:
		if (lookahead == '\n')
		{
			state = 893;
			goto next_state;
		};
		return result;
		;
	case 211:
		if (lookahead == '\n')
		{
			state = 893;
			goto next_state;
		};
		if (lookahead == '\r')
		{
			state = 210;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 252;
			goto next_state;
		};
		return result;
		;
	case 212:
		if (lookahead == '\n')
		{
			state = 905;
			goto next_state;
		};
		return result;
		;
	case 213:
		if (lookahead == '\n')
		{
			state = 905;
			goto next_state;
		};
		if (lookahead == '\r')
		{
			state = 212;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 270;
			goto next_state;
		};
		return result;
		;
	case 214:
		if (lookahead == '\n')
		{
			state = 896;
			goto next_state;
		};
		return result;
		;
	case 215:
		if (lookahead == '\n')
		{
			state = 896;
			goto next_state;
		};
		if (lookahead == '\r')
		{
			state = 214;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 256;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 216:
		if (lookahead == '\n')
		{
			skip = true;
			state = 459;
			goto next_state;
		};
		return result;
		;
	case 217:
		if (lookahead == '\n')
		{
			state = 897;
			goto next_state;
		};
		return result;
		;
	case 218:
		if (lookahead == '\n')
		{
			state = 897;
			goto next_state;
		};
		if (lookahead == '\r')
		{
			state = 217;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 258;
			goto next_state;
		};
		return result;
		;
	case 219:
	{
		static const uint16_t map[] = {
			'\n', 693, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602, '\'',
				491, '(', 654, '*', 640, '-', 636, '0', 943, ';', 554, '<', 609,
				'=', 952, '>', 617, '?', 761, '@', 942, '\\', 27, '_', 947, '`',
				855, 'e', 871, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 219;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 807;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 873;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 220:
		if (lookahead == '\n')
		{
			skip = true;
			state = 263;
			goto next_state;
		};
		return result;
		;
	case 221:
		if (lookahead == '\n')
		{
			state = 900;
			goto next_state;
		};
		return result;
		;
	case 222:
		if (lookahead == '\n')
		{
			state = 900;
			goto next_state;
		};
		if (lookahead == '\r')
		{
			state = 221;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 262;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 223:
		if (lookahead == '\n')
		{
			skip = true;
			state = 269;
			goto next_state;
		};
		return result;
		;
	case 224:
		if (lookahead == '\n')
		{
			skip = true;
			state = 272;
			goto next_state;
		};
		return result;
		;
	case 225:
		if (lookahead == '\n')
		{
			state = 906;
			goto next_state;
		};
		return result;
		;
	case 226:
		if (lookahead == '\n')
		{
			state = 906;
			goto next_state;
		};
		if (lookahead == '\r')
		{
			state = 225;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 271;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 227:
		if (lookahead == '\n')
		{
			state = 910;
			goto next_state;
		};
		return result;
		;
	case 228:
		if (lookahead == '\n')
		{
			state = 910;
			goto next_state;
		};
		if (lookahead == '\r')
		{
			state = 227;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 278;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 229:
		if (lookahead == '\n')
		{
			skip = true;
			state = 469;
			goto next_state;
		};
		return result;
		;
	case 230:
		if (lookahead == '\n')
		{
			state = 924;
			goto next_state;
		};
		return result;
		;
	case 231:
		if (lookahead == '\n')
		{
			state = 924;
			goto next_state;
		};
		if (lookahead == '\r')
		{
			state = 230;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 414;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 232:
		if (lookahead == '\n')
		{
			state = 914;
			goto next_state;
		};
		return result;
		;
	case 233:
		if (lookahead == '\n')
		{
			state = 914;
			goto next_state;
		};
		if (lookahead == '\r')
		{
			state = 232;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 286;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 234:
		if (lookahead == '\n')
		{
			state = 925;
			goto next_state;
		};
		return result;
		;
	case 235:
		if (lookahead == '\n')
		{
			state = 925;
			goto next_state;
		};
		if (lookahead == '\r')
		{
			state = 234;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 415;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 236:
	{
		static const uint16_t map[] = {
			'\n', 694, '!', 951, '"', 788, '#', 862, '$', 781, '%', 649, '&',
				601, '\'', 491, '(', 654, ')', 655, '*', 638, '+', 630, '-',
				633, '/', 644, '0', 803, ';', 555, '<', 607, '=', 560, '>', 616,
				'?', 761, '\\', 317, '^', 596, '`', 855, '|', 592, '[', 786,
				']', 786, '{', 786, '}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 236;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 805;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 237:
	{
		static const uint16_t map[] = {
			'\n', 695, '!', 669, '"', 788, '#', 816, '$', 780, '&', 602, '*',
				637, '-', 632, '0', 945, ';', 554, '<', 612, '>', 618, '?', 760,
				'@', 941, '\\', 91, '_', 948, '|', 593,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 237;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
		{
			state = 879;
			goto next_state;
		};
		return result;
		;
	case 238:
	{
		static const uint16_t map[] = {
			'\n', 696, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602, '\'',
				491, '(', 654, '*', 640, '-', 636, '0', 943, ';', 554, '<', 609,
				'=', 952, '>', 617, '?', 761, '@', 942, '\\', 30, '_', 947, '`',
				855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 238;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 807;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 873;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 239:
	{
		static const uint16_t map[] = {
			'\n', 697, '"', 788, '#', 862, '$', 781, '&', 602, '\'', 491, '(',
				654, '-', 950, '0', 803, ';', 554, '<', 609, '=', 952, '>', 617,
				'\\', 321, '`', 855, 'e', 956, '|', 593, '[', 786, ']', 786,
				'{', 786, '}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 239;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 805;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 240:
	{
		static const uint16_t map[] = {
			'\n', 698, '!', 669, '"', 788, '#', 816, '$', 780, '&', 602, '*',
				637, '-', 632, '0', 945, ';', 554, '<', 613, '>', 618, '?', 760,
				'@', 941, '\\', 183, '_', 948, 'e', 877, '|', 593,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 240;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
		{
			state = 879;
			goto next_state;
		};
		return result;
		;
	case 241:
	{
		static const uint16_t map[] = {
			'\n', 699, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602, '\'',
				491, '(', 494, '*', 640, '-', 636, '0', 943, ';', 554, '<', 609,
				'=', 952, '>', 617, '?', 761, '@', 942, '\\', 153, '_', 947,
				'`', 855, 'e', 871, '|', 593, '[', 786, ']', 786, '{', 786, '}',
				786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 241;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 807;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 873;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 242:
	{
		static const uint16_t map[] = {
			'\n', 700, '"', 788, '#', 862, '$', 781, '&', 602, '\'', 491, '(',
				654, '-', 950, '0', 803, ';', 554, '<', 609, '=', 952, '>', 617,
				'\\', 322, '`', 855, '|', 593, '[', 786, ']', 786, '{', 786,
				'}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 242;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 805;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 243:
	{
		static const uint16_t map[] = {
			'\n', 701, '!', 669, '"', 788, '#', 816, '$', 780, '&', 602, '*',
				637, '-', 632, '0', 945, ';', 554, '<', 613, '>', 618, '?', 760,
				'@', 941, '\\', 185, '_', 948, '|', 593,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 243;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
		{
			state = 879;
			goto next_state;
		};
		return result;
		;
	case 244:
	{
		static const uint16_t map[] = {
			'\n', 702, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602, '\'',
				491, '(', 654, ')', 655, '*', 640, '-', 636, '0', 943, ';', 555,
				'<', 609, '=', 952, '>', 617, '?', 761, '@', 942, '\\', 32, '_',
				947, '`', 855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 244;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 807;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 873;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 245:
	{
		static const uint16_t map[] = {
			'\n', 703, '"', 788, '#', 862, '$', 781, '&', 602, '\'', 491, '(',
				654, ')', 655, '-', 950, '0', 803, ';', 555, '<', 609, '=', 952,
				'>', 617, '\\', 323, '`', 855, '|', 593, '[', 786, ']', 786,
				'{', 786, '}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 245;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 805;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 246:
	{
		static const uint16_t map[] = {
			'\n', 704, '!', 669, '"', 788, '#', 816, '$', 780, '&', 602, '*',
				637, '-', 632, '0', 945, ';', 555, '<', 612, '>', 618, '?', 760,
				'@', 941, '\\', 96, '_', 948, '`', 855, '|', 593,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 246;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
		{
			state = 879;
			goto next_state;
		};
		return result;
		;
	case 247:
	{
		static const uint16_t map[] = {
			'\n', 705, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602, '\'',
				491, '(', 654, '*', 640, '-', 636, '0', 943, ';', 555, '<', 609,
				'=', 952, '>', 617, '?', 761, '@', 942, '\\', 156, '_', 947,
				'`', 855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 247;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 807;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 873;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 248:
	{
		static const uint16_t map[] = {
			'\n', 706, '"', 788, '#', 862, '$', 781, '&', 602, '\'', 491, '(',
				494, '-', 950, '0', 804, ';', 554, '<', 610, '>', 617, '\\',
				324, '`', 855, 'e', 866, '|', 593, '[', 786, ']', 786, '{', 786,
				'}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 248;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 806;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('_' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 868;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 249:
	{
		static const uint16_t map[] = {
			'\n', 707, '!', 669, '"', 788, '#', 816, '$', 780, '&', 602, ')',
				655, '*', 637, '-', 632, '0', 945, ';', 555, '<', 612, '>', 618,
				'?', 760, '@', 941, '\\', 98, '_', 948, '|', 593,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 249;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
		{
			state = 879;
			goto next_state;
		};
		return result;
		;
	case 250:
	{
		static const uint16_t map[] = {
			'\n', 708, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602, '\'',
				491, '(', 494, '*', 640, '-', 636, '0', 943, ';', 554, '<', 609,
				'=', 952, '>', 617, '?', 761, '@', 942, '\\', 202, '_', 947,
				'`', 855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 250;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 807;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 873;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 251:
	{
		static const uint16_t map[] = {
			'\n', 709, '"', 788, '#', 862, '$', 781, '&', 602, '\'', 491, '(',
				494, '-', 950, '0', 804, ';', 554, '<', 610, '>', 617, '\\',
				325, '`', 855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 251;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 806;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('_' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 868;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 252:
	{
		static const uint16_t map[] = {
			'\n', 710, '!', 669, '"', 788, '#', 816, '$', 780, '&', 602, '*',
				637, '-', 632, '0', 945, ';', 555, '<', 612, '>', 618, '?', 760,
				'@', 941, '\\', 211, '_', 948, '|', 593,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 252;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
		{
			state = 879;
			goto next_state;
		};
		return result;
		;
	case 253:
	{
		static const uint16_t map[] = {
			'\n', 711, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602, '\'',
				491, '(', 494, ')', 655, '*', 640, '-', 636, '0', 943, ';', 555,
				'<', 609, '=', 952, '>', 617, '?', 761, '@', 942, '\\', 158,
				'_', 947, '`', 855, '|', 593, '[', 786, ']', 786, '{', 786, '}',
				786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 253;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 807;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 873;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 254:
	{
		static const uint16_t map[] = {
			'\n', 712, '"', 788, '#', 862, '$', 781, '&', 602, '\'', 491, '(',
				494, ')', 655, '-', 950, '0', 804, ';', 555, '<', 610, '>', 617,
				'\\', 326, '`', 855, '|', 593, '[', 786, ']', 786, '{', 786,
				'}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 254;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 806;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('_' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 868;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 255:
	{
		static const uint16_t map[] = {
			'\n', 713, '!', 669, '"', 788, '#', 816, '$', 780, '&', 602, '*',
				637, '-', 632, '0', 945, ';', 555, '<', 613, '>', 618, '?', 760,
				'@', 941, '\\', 188, '_', 948, '`', 855, '|', 593,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 255;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
		{
			state = 879;
			goto next_state;
		};
		return result;
		;
	case 256:
	{
		static const uint16_t map[] = {
			'\n', 714, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602, '\'',
				491, '(', 494, '*', 640, '-', 636, '0', 943, ';', 555, '<', 609,
				'=', 952, '>', 617, '?', 761, '@', 942, '\\', 215, '_', 947,
				'`', 855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 256;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 807;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 873;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 257:
	{
		static const uint16_t map[] = {
			'\n', 715, '"', 788, '#', 862, '$', 781, '&', 602, '\'', 491, '(',
				494, '-', 950, '0', 803, ';', 554, '<', 609, '>', 617, '\\',
				327, '`', 855, 'e', 956, '|', 593, '[', 786, ']', 786, '{', 786,
				'}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 257;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 805;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 258:
	{
		static const uint16_t map[] = {
			'\n', 716, '!', 669, '"', 788, '#', 816, '$', 780, '&', 602, '*',
				637, '-', 632, '0', 945, ';', 555, '<', 613, '>', 618, '?', 760,
				'@', 941, '\\', 218, '_', 948, '|', 593,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 258;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
		{
			state = 879;
			goto next_state;
		};
		return result;
		;
	case 259:
	{
		static const uint16_t map[] = {
			'\n', 717, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602, '\'',
				491, '(', 494, '*', 640, '-', 636, '0', 943, ';', 554, '<', 609,
				'>', 617, '?', 761, '@', 942, '\\', 37, '_', 947, '`', 855, 'e',
				871, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 259;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 807;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 873;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 260:
	{
		static const uint16_t map[] = {
			'\n', 718, '"', 788, '#', 862, '$', 781, '&', 602, '\'', 491, '(',
				494, '-', 950, '0', 803, ';', 554, '<', 609, '>', 617, '\\',
				328, '`', 855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 260;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 805;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 261:
	{
		static const uint16_t map[] = {
			'\n', 719, '!', 669, '"', 788, '#', 816, '$', 780, '&', 602, ')',
				655, '*', 637, '-', 632, '0', 945, ';', 555, '<', 613, '>', 618,
				'?', 760, '@', 941, '\\', 190, '_', 948, '|', 593,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 261;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
		{
			state = 879;
			goto next_state;
		};
		return result;
		;
	case 262:
	{
		static const uint16_t map[] = {
			'\n', 720, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602, '\'',
				491, '(', 494, '*', 640, '-', 636, '0', 943, ';', 554, '<', 610,
				'>', 617, '?', 761, '@', 942, '\\', 222, '_', 947, '`', 855,
				'e', 871, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 262;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 807;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 873;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 263:
	{
		static const uint16_t map[] = {
			'\n', 721, '"', 788, '#', 862, '$', 781, '&', 602, '\'', 491, '(',
				494, '-', 950, '0', 803, ';', 554, '<', 610, '>', 617, '\\',
				397, '`', 855, 'e', 956, '|', 593, '[', 786, ']', 786, '{', 786,
				'}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 263;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 805;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 264:
	{
		static const uint16_t map[] = {
			'\n', 722, '!', 669, '"', 788, '#', 816, '$', 780, '&', 489, '*',
				637, '-', 632, '0', 945, '<', 612, '>', 618, '?', 760, '@', 941,
				'\\', 106, '_', 948, '|', 593,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 264;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
		{
			state = 879;
			goto next_state;
		};
		return result;
		;
	case 265:
	{
		static const uint16_t map[] = {
			'\n', 723, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602, '\'',
				491, '(', 494, '*', 640, '-', 636, '0', 943, ';', 554, '<', 609,
				'>', 617, '?', 761, '@', 942, '\\', 43, '_', 947, '`', 855, '|',
				593, '[', 786, ']', 786, '{', 786, '}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 265;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 807;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 873;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 266:
	{
		static const uint16_t map[] = {
			'\n', 724, '"', 788, '#', 862, '$', 781, '&', 602, '\'', 491, '(',
				494, ')', 655, '-', 950, '0', 803, ';', 555, '<', 609, '>', 617,
				'\\', 331, '`', 855, '|', 593, '[', 786, ']', 786, '{', 786,
				'}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 266;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 805;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 267:
	{
		static const uint16_t map[] = {
			'\n', 725, '!', 669, '"', 788, '#', 816, '$', 780, '&', 489, '*',
				637, '-', 632, '0', 945, '<', 613, '>', 618, '?', 760, '@', 941,
				'\\', 193, '_', 948, '|', 593,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 267;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
		{
			state = 879;
			goto next_state;
		};
		return result;
		;
	case 268:
	{
		static const uint16_t map[] = {
			'\n', 726, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602, '\'',
				491, '(', 494, ')', 655, '*', 640, '-', 636, '0', 943, ';', 555,
				'<', 609, '>', 617, '?', 761, '@', 942, '\\', 46, '_', 947, '`',
				855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 268;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 807;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 873;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 269:
	{
		static const uint16_t map[] = {
			'\n', 727, '"', 788, '#', 862, '$', 781, '&', 602, '\'', 491, '(',
				494, '-', 950, '0', 803, ';', 554, '<', 610, '>', 617, '\\',
				398, '`', 855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 269;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 805;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 270:
	{
		static const uint16_t map[] = {
			'\n', 728, '!', 669, '"', 788, '#', 816, '$', 780, '&', 489, '*',
				637, '-', 632, '0', 945, '<', 611, '>', 618, '?', 760, '@', 941,
				'\\', 213, '_', 948, '|', 516,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 270;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
		{
			state = 879;
			goto next_state;
		};
		return result;
		;
	case 271:
	{
		static const uint16_t map[] = {
			'\n', 729, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602, '\'',
				491, '(', 494, '*', 640, '-', 636, '0', 943, ';', 554, '<', 610,
				'>', 617, '?', 761, '@', 942, '\\', 226, '_', 947, '`', 855,
				'|', 593, '[', 786, ']', 786, '{', 786, '}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 271;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 807;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 873;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 272:
	{
		static const uint16_t map[] = {
			'\n', 730, '"', 788, '#', 862, '$', 781, '&', 602, '\'', 491, '(',
				494, ')', 655, '-', 950, '0', 803, ';', 555, '<', 610, '>', 617,
				'\\', 399, '`', 855, '|', 593, '[', 786, ']', 786, '{', 786,
				'}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 272;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 805;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 273:
	{
		static const uint16_t map[] = {
			'\n', 731, '!', 669, '"', 788, '#', 816, '$', 780, '&', 599, '*',
				637, '-', 632, '0', 945, ';', 555, '?', 760, '@', 941, '\\',
				128, '_', 948, 'i', 876,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 273;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
		{
			state = 879;
			goto next_state;
		};
		return result;
		;
	case 274:
	{
		static const uint16_t map[] = {
			'\n', 732, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602, '\'',
				491, '(', 494, '*', 640, '-', 636, '0', 943, ';', 555, '<', 609,
				'>', 617, '?', 761, '@', 942, '\\', 166, '_', 947, '`', 855,
				'|', 593, '[', 786, ']', 786, '{', 786, '}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 274;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 807;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 873;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 275:
	{
		static const uint16_t map[] = {
			'\n', 733, '"', 788, '#', 862, '$', 781, '&', 489, '\'', 491, '(',
				494, '-', 950, '0', 803, '<', 608, '>', 617, '\\', 333, '`',
				855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 275;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 805;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead)
			&& lookahead != ';' && lookahead != '<')
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 276:
	{
		static const uint16_t map[] = {
			'\n', 734, '!', 672, '"', 788, '#', 816, '$', 781, '&', 489, '\'',
				491, '(', 654, '*', 640, '-', 636, '0', 943, '<', 609, '=', 952,
				'>', 617, '?', 761, '@', 942, '\\', 48, '_', 947, '`', 855, '|',
				593, '[', 786, ']', 786, '{', 786, '}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 276;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 807;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 873;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead)
			&& (lookahead < ';' || ']' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 277:
	{
		static const uint16_t map[] = {
			'\n', 735, '"', 788, '#', 862, '$', 781, '&', 602, '\'', 491, '(',
				654, '-', 950, '0', 803, ';', 554, '<', 609, '=', 952, '>', 617,
				'\\', 335, '`', 856, 'e', 956, '|', 593, '[', 786, ']', 786,
				'{', 786, '}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 277;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 805;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 278:
	{
		static const uint16_t map[] = {
			'\n', 736, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602, '\'',
				491, '(', 494, ')', 655, '*', 640, '-', 636, '0', 943, ';', 555,
				'<', 610, '>', 617, '?', 761, '@', 942, '\\', 228, '_', 947,
				'`', 855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 278;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 807;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 873;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 279:
	{
		static const uint16_t map[] = {
			'\n', 737, '"', 788, '#', 862, '$', 781, '&', 602, '\'', 491, '(',
				654, '-', 950, '0', 803, ';', 554, '<', 609, '=', 952, '>', 617,
				'\\', 337, '`', 856, '|', 593, '[', 786, ']', 786, '{', 786,
				'}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 279;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 805;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 280:
	{
		static const uint16_t map[] = {
			'\n', 738, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602, '\'',
				491, '(', 494, '*', 640, '-', 636, '0', 943, ';', 555, '<', 610,
				'>', 617, '?', 761, '@', 942, '\\', 207, '_', 947, '`', 855,
				'|', 593, '[', 786, ']', 786, '{', 786, '}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 280;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 807;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 873;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 281:
	{
		static const uint16_t map[] = {
			'\n', 739, '"', 788, '#', 862, '$', 781, '&', 602, '\'', 491, '(',
				654, ')', 655, '-', 950, '0', 803, ';', 555, '<', 609, '=', 952,
				'>', 617, '\\', 339, '`', 856, '|', 593, '[', 786, ']', 786,
				'{', 786, '}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 281;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 805;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 282:
	{
		static const uint16_t map[] = {
			'\n', 740, '!', 672, '"', 788, '#', 816, '$', 781, '&', 489, '\'',
				491, '(', 494, '*', 640, '-', 636, '0', 943, '<', 609, '=', 952,
				'>', 617, '?', 761, '@', 942, '\\', 168, '_', 947, '`', 855,
				'|', 593, '[', 786, ']', 786, '{', 786, '}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 282;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 807;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 873;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead)
			&& (lookahead < ';' || ']' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 283:
	{
		static const uint16_t map[] = {
			'\n', 741, '"', 788, '#', 862, '$', 781, '&', 602, '\'', 491, '(',
				494, '-', 950, '0', 804, ';', 554, '<', 610, '>', 617, '\\',
				341, '`', 856, 'e', 866, '|', 593, '[', 786, ']', 786, '{', 786,
				'}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 283;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 806;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('_' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 868;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 284:
	{
		static const uint16_t map[] = {
			'\n', 742, '!', 672, '"', 788, '#', 816, '$', 781, '&', 489, '\'',
				491, '(', 494, '*', 640, '-', 636, '0', 943, '<', 609, '>', 617,
				'?', 761, '@', 942, '\\', 58, '_', 947, '`', 855, '|', 593, '[',
				786, ']', 786, '{', 786, '}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 284;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 807;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 873;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead)
			&& lookahead != ';' && lookahead != '<')
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 285:
	{
		static const uint16_t map[] = {
			'\n', 743, '"', 788, '#', 862, '$', 781, '&', 602, '\'', 491, '(',
				494, '-', 950, '0', 803, ';', 554, '<', 609, '>', 617, '\\',
				343, '`', 856, 'e', 956, '|', 593, '[', 786, ']', 786, '{', 786,
				'}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 285;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 805;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 286:
	{
		static const uint16_t map[] = {
			'\n', 744, '!', 672, '"', 788, '#', 816, '$', 781, '&', 489, '\'',
				491, '(', 494, '*', 640, '-', 636, '0', 943, '<', 610, '>', 617,
				'?', 761, '@', 942, '\\', 233, '_', 947, '`', 855, '|', 593,
				'[', 786, ']', 786, '{', 786, '}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 286;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 807;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 873;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead)
			&& lookahead != ';' && lookahead != '<')
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 287:
	{
		static const uint16_t map[] = {
			'\n', 745, '"', 788, '#', 862, '$', 781, '&', 602, '\'', 491, '(',
				494, '-', 950, '0', 804, ';', 554, '<', 610, '>', 617, '\\',
				344, '`', 856, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 287;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 806;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('_' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 868;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 288:
	{
		static const uint16_t map[] = {
			'\n', 746, '!', 672, '"', 788, '#', 816, '$', 781, '&', 489, '\'',
				491, '(', 494, '*', 640, '-', 636, '0', 943, '<', 608, '>', 617,
				'?', 761, '@', 942, '\\', 176, '_', 947, '`', 855, '|', 516,
				'[', 786, ']', 786, '{', 786, '}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 288;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 807;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 873;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead)
			&& lookahead != ';' && lookahead != '<')
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 289:
	{
		static const uint16_t map[] = {
			'\n', 747, '"', 788, '#', 862, '$', 781, '&', 602, '\'', 491, '(',
				494, '-', 950, '0', 803, ';', 554, '<', 609, '>', 617, '\\',
				346, '`', 856, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 289;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 805;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 290:
	{
		static const uint16_t map[] = {
			'\n', 748, '!', 672, '"', 788, '#', 816, '$', 781, '&', 599, '\'',
				491, '(', 494, '*', 640, '-', 636, '0', 943, ';', 555, '<', 495,
				'>', 496, '?', 761, '@', 942, '\\', 100, '_', 947, '`', 855,
				'[', 786, ']', 786, '{', 786, '}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 290;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 807;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 873;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead)
			&& (lookahead < '_' || '}' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 291:
	{
		static const uint16_t map[] = {
			'\n', 749, '"', 788, '#', 862, '$', 781, '&', 602, '\'', 491, '(',
				494, '-', 950, '0', 803, ';', 554, '<', 610, '>', 617, '\\',
				347, '`', 856, 'e', 956, '|', 593, '[', 786, ']', 786, '{', 786,
				'}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 291;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 805;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 292:
	{
		static const uint16_t map[] = {
			'\n', 750, '!', 672, '"', 788, '#', 816, '$', 781, '\'', 491, '(',
				494, '*', 640, '-', 636, '0', 943, '<', 495, '>', 496, '?', 761,
				'@', 942, '\\', 112, '_', 947, '`', 855, '[', 786, ']', 786,
				'{', 786, '}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 292;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 807;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 873;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead)
			&& lookahead != ';' && lookahead != '<' && (lookahead < '_'
				|| '}' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 293:
	{
		static const uint16_t map[] = {
			'\n', 751, '"', 788, '#', 862, '$', 781, '&', 602, '\'', 491, '(',
				494, ')', 655, '-', 950, '0', 804, ';', 555, '<', 610, '>', 617,
				'\\', 349, '`', 856, '|', 593, '[', 786, ']', 786, '{', 786,
				'}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 293;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 806;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('_' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 868;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 294:
	{
		static const uint16_t map[] = {
			'\n', 752, '"', 788, '#', 862, '$', 781, '&', 602, '\'', 491, '(',
				494, ')', 655, '-', 950, '0', 803, ';', 555, '<', 609, '>', 617,
				'\\', 350, '`', 856, '|', 593, '[', 786, ']', 786, '{', 786,
				'}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 294;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 805;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 295:
	{
		static const uint16_t map[] = {
			'\n', 753, '"', 788, '#', 862, '$', 781, '&', 602, '\'', 491, '(',
				494, '-', 950, '0', 803, ';', 554, '<', 610, '>', 617, '\\',
				351, '`', 856, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 295;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 805;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 296:
	{
		static const uint16_t map[] = {
			'\n', 754, '"', 788, '#', 862, '$', 781, '&', 602, '\'', 491, '(',
				494, ')', 655, '-', 950, '0', 803, ';', 555, '<', 610, '>', 617,
				'\\', 354, '`', 856, '|', 593, '[', 786, ']', 786, '{', 786,
				'}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 296;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 805;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 297:
	{
		static const uint16_t map[] = {
			'\n', 755, '"', 788, '#', 862, '$', 781, '&', 599, '\'', 491, '(',
				654, '-', 950, '0', 803, ';', 555, '<', 495, '>', 496, '\\',
				357, '`', 855, 'e', 956, '[', 786, ']', 786, '{', 786, '}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 297;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 805;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead)
			&& (lookahead < '{' || '}' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 298:
	{
		static const uint16_t map[] = {
			'\n', 756, '"', 788, '#', 862, '$', 781, '&', 489, '\'', 491, '(',
				494, '-', 950, '0', 803, '<', 608, '>', 617, '\\', 370, '`',
				856, '|', 516, '[', 786, ']', 786, '{', 786, '}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 298;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 805;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead)
			&& lookahead != ';' && lookahead != '<')
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 299:
	{
		static const uint16_t map[] = {
			'\n', 757, '"', 788, '#', 862, '$', 781, '&', 599, '\'', 491, '(',
				494, '-', 950, '0', 803, ';', 555, '<', 495, '>', 496, '\\',
				372, '`', 855, '[', 786, ']', 786, '{', 786, '}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 299;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 805;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead)
			&& (lookahead < '{' || '}' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 300:
	{
		static const uint16_t map[] = {
			'\n', 758, '"', 788, '#', 862, '$', 781, '&', 599, '\'', 491, '(',
				494, '-', 950, '0', 803, ';', 555, '<', 495, '>', 496, '\\',
				381, '`', 856, '[', 786, ']', 786, '{', 786, '}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 300;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 805;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead)
			&& (lookahead < '{' || '}' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 301:
		if (lookahead == '\r')
		{
			skip = true;
			state = 1;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 401;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 302:
		if (lookahead == '\r')
		{
			state = 789;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			state = 795;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 798;
			goto next_state;
		};
		return result;
		;
	case 303:
		if (lookahead == '\r')
		{
			state = 799;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 798;
			goto next_state;
		};
		return result;
		;
	case 304:
		if (lookahead == '\r')
		{
			skip = true;
			state = 2;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 417;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 305:
		if (lookahead == '\r')
		{
			skip = true;
			state = 3;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 418;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 306:
		if (lookahead == '\r')
		{
			skip = true;
			state = 4;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 419;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 307:
		if (lookahead == '\r')
		{
			skip = true;
			state = 5;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 6;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 308:
		if (lookahead == '\r')
		{
			skip = true;
			state = 7;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 403;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 309:
		if (lookahead == '\r')
		{
			skip = true;
			state = 8;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 421;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 310:
		if (lookahead == '\r')
		{
			skip = true;
			state = 9;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 422;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 311:
		if (lookahead == '\r')
		{
			skip = true;
			state = 10;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 404;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 312:
		if (lookahead == '\r')
		{
			skip = true;
			state = 144;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 407;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 313:
		if (lookahead == '\r')
		{
			skip = true;
			state = 11;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 406;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 314:
		if (lookahead == '\r')
		{
			skip = true;
			state = 145;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 405;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 315:
		if (lookahead == '\r')
		{
			skip = true;
			state = 199;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 408;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 316:
		if (lookahead == '\r')
		{
			skip = true;
			state = 20;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 146;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 317:
		if (lookahead == '\r')
		{
			skip = true;
			state = 147;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 236;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 318:
		if (lookahead == '\r')
		{
			skip = true;
			state = 21;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 425;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 319:
		if (lookahead == '\r')
		{
			skip = true;
			state = 148;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 426;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 320:
		if (lookahead == '\r')
		{
			skip = true;
			state = 22;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 420;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 321:
		if (lookahead == '\r')
		{
			skip = true;
			state = 23;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 239;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 322:
		if (lookahead == '\r')
		{
			skip = true;
			state = 24;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 242;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 323:
		if (lookahead == '\r')
		{
			skip = true;
			state = 25;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 245;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 324:
		if (lookahead == '\r')
		{
			skip = true;
			state = 28;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 248;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 325:
		if (lookahead == '\r')
		{
			skip = true;
			state = 33;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 251;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 326:
		if (lookahead == '\r')
		{
			skip = true;
			state = 34;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 254;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 327:
		if (lookahead == '\r')
		{
			skip = true;
			state = 35;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 257;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 328:
		if (lookahead == '\r')
		{
			skip = true;
			state = 38;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 260;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 329:
		if (lookahead == '\r')
		{
			skip = true;
			state = 39;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 461;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 330:
		if (lookahead == '\r')
		{
			skip = true;
			state = 40;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 457;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 331:
		if (lookahead == '\r')
		{
			skip = true;
			state = 41;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 266;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 332:
		if (lookahead == '\r')
		{
			skip = true;
			state = 44;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 424;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 333:
		if (lookahead == '\r')
		{
			skip = true;
			state = 49;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 275;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 334:
		if (lookahead == '\r')
		{
			skip = true;
			state = 52;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 470;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 335:
		if (lookahead == '\r')
		{
			skip = true;
			state = 149;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 277;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 336:
		if (lookahead == '\r')
		{
			skip = true;
			state = 53;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 464;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 337:
		if (lookahead == '\r')
		{
			skip = true;
			state = 150;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 279;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 338:
		if (lookahead == '\r')
		{
			skip = true;
			state = 56;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 460;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 339:
		if (lookahead == '\r')
		{
			skip = true;
			state = 151;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 281;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 340:
		if (lookahead == '\r')
		{
			skip = true;
			state = 174;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 458;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 341:
		if (lookahead == '\r')
		{
			skip = true;
			state = 154;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 283;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 342:
		if (lookahead == '\r')
		{
			skip = true;
			state = 65;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 466;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 343:
		if (lookahead == '\r')
		{
			skip = true;
			state = 161;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 285;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 344:
		if (lookahead == '\r')
		{
			skip = true;
			state = 159;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 287;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 345:
		if (lookahead == '\r')
		{
			skip = true;
			state = 70;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 434;
			goto next_state;
		};
		return result;
		;
	case 346:
		if (lookahead == '\r')
		{
			skip = true;
			state = 162;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 289;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 347:
		if (lookahead == '\r')
		{
			skip = true;
			state = 203;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 291;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 348:
		if (lookahead == '\r')
		{
			skip = true;
			state = 71;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 435;
			goto next_state;
		};
		return result;
		;
	case 349:
		if (lookahead == '\r')
		{
			skip = true;
			state = 160;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 293;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 350:
		if (lookahead == '\r')
		{
			skip = true;
			state = 164;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 294;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 351:
		if (lookahead == '\r')
		{
			skip = true;
			state = 204;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 295;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 352:
		if (lookahead == '\r')
		{
			skip = true;
			state = 72;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 423;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 353:
		if (lookahead == '\r')
		{
			skip = true;
			state = 163;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 462;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 354:
		if (lookahead == '\r')
		{
			skip = true;
			state = 205;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 296;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 355:
		if (lookahead == '\r')
		{
			skip = true;
			state = 173;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 465;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 356:
		if (lookahead == '\r')
		{
			skip = true;
			state = 75;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 440;
			goto next_state;
		};
		return result;
		;
	case 357:
		if (lookahead == '\r')
		{
			skip = true;
			state = 76;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 297;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 358:
		if (lookahead == '\r')
		{
			skip = true;
			state = 209;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 463;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 359:
		if (lookahead == '\r')
		{
			skip = true;
			state = 172;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 471;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 360:
		if (lookahead == '\r')
		{
			skip = true;
			state = 77;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 438;
			goto next_state;
		};
		return result;
		;
	case 361:
		if (lookahead == '\r')
		{
			skip = true;
			state = 78;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 443;
			goto next_state;
		};
		return result;
		;
	case 362:
		if (lookahead == '\r')
		{
			skip = true;
			state = 79;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 439;
			goto next_state;
		};
		return result;
		;
	case 363:
		if (lookahead == '\r')
		{
			skip = true;
			state = 208;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 467;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 364:
		if (lookahead == '\r')
		{
			skip = true;
			state = 179;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 468;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 365:
		if (lookahead == '\r')
		{
			skip = true;
			state = 82;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 83;
			goto next_state;
		};
		return result;
		;
	case 366:
		if (lookahead == '\r')
		{
			skip = true;
			state = 92;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 472;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 367:
		if (lookahead == '\r')
		{
			skip = true;
			state = 93;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 437;
			goto next_state;
		};
		return result;
		;
	case 368:
		if (lookahead == '\r')
		{
			skip = true;
			state = 94;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 442;
			goto next_state;
		};
		return result;
		;
	case 369:
		if (lookahead == '\r')
		{
			skip = true;
			state = 186;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 436;
			goto next_state;
		};
		return result;
		;
	case 370:
		if (lookahead == '\r')
		{
			skip = true;
			state = 169;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 298;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 371:
		if (lookahead == '\r')
		{
			skip = true;
			state = 216;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 459;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 372:
		if (lookahead == '\r')
		{
			skip = true;
			state = 101;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 299;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 373:
		if (lookahead == '\r')
		{
			skip = true;
			state = 102;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 473;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 374:
		if (lookahead == '\r')
		{
			skip = true;
			state = 103;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 478;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 375:
		if (lookahead == '\r')
		{
			skip = true;
			state = 104;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 482;
			goto next_state;
		};
		return result;
		;
	case 376:
		if (lookahead == '\r')
		{
			skip = true;
			state = 115;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 479;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 377:
		if (lookahead == '\r')
		{
			skip = true;
			state = 116;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 451;
			goto next_state;
		};
		return result;
		;
	case 378:
		if (lookahead == '\r')
		{
			skip = true;
			state = 117;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 84;
			goto next_state;
		};
		return result;
		;
	case 379:
		if (lookahead == '\r')
		{
			skip = true;
			state = 118;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 86;
			goto next_state;
		};
		return result;
		;
	case 380:
		if (lookahead == '\r')
		{
			skip = true;
			state = 198;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 87;
			goto next_state;
		};
		return result;
		;
	case 381:
		if (lookahead == '\r')
		{
			skip = true;
			state = 191;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 300;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 382:
		if (lookahead == '\r')
		{
			skip = true;
			state = 119;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 454;
			goto next_state;
		};
		return result;
		;
	case 383:
		if (lookahead == '\r')
		{
			skip = true;
			state = 120;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 474;
			goto next_state;
		};
		return result;
		;
	case 384:
		if (lookahead == '\r')
		{
			skip = true;
			state = 121;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 487;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 385:
		if (lookahead == '\r')
		{
			skip = true;
			state = 122;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 483;
			goto next_state;
		};
		return result;
		;
	case 386:
		if (lookahead == '\r')
		{
			skip = true;
			state = 123;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 85;
			goto next_state;
		};
		return result;
		;
	case 387:
		if (lookahead == '\r')
		{
			skip = true;
			state = 124;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 484;
			goto next_state;
		};
		return result;
		;
	case 388:
		if (lookahead == '\r')
		{
			skip = true;
			state = 125;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 486;
			goto next_state;
		};
		return result;
		;
	case 389:
		if (lookahead == '\r')
		{
			skip = true;
			state = 126;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 475;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 390:
		if (lookahead == '\r')
		{
			skip = true;
			state = 129;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 88;
			goto next_state;
		};
		return result;
		;
	case 391:
		if (lookahead == '\r')
		{
			skip = true;
			state = 130;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 455;
			goto next_state;
		};
		return result;
		;
	case 392:
		if (lookahead == '\r')
		{
			skip = true;
			state = 139;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 485;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 393:
		if (lookahead == '\r')
		{
			skip = true;
			state = 140;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 476;
			goto next_state;
		};
		return result;
		;
	case 394:
		if (lookahead == '\r')
		{
			skip = true;
			state = 141;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 89;
			goto next_state;
		};
		return result;
		;
	case 395:
		if (lookahead == '\r')
		{
			skip = true;
			state = 142;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 477;
			goto next_state;
		};
		return result;
		;
	case 396:
		if (lookahead == '\r')
		{
			skip = true;
			state = 143;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 488;
			goto next_state;
		};
		return result;
		;
	case 397:
		if (lookahead == '\r')
		{
			skip = true;
			state = 220;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 263;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 398:
		if (lookahead == '\r')
		{
			skip = true;
			state = 223;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 269;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 399:
		if (lookahead == '\r')
		{
			skip = true;
			state = 224;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 272;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 400:
		if (lookahead == '\r')
		{
			skip = true;
			state = 229;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 469;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 401:
	{
		static const uint16_t map[] = {
			'!', 670, '"', 788, '#', 816, '$', 781, '%', 647, '&', 601, '\'',
				491, '(', 654, ')', 655, '*', 638, '+', 770, ',', 557, '-', 768,
				'/', 642, '0', 944, ':', 765, ';', 554, '<', 607, '=', 563, '>',
				616, '?', 761, '@', 942, '[', 674, '\\', 301, ']', 675, '^',
				595, '_', 946, '`', 856, 'e', 956, 'i', 955, '{', 666, '|', 592,
				'}', 818, '~', 772,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 401;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 402:
	{
		static const uint16_t map[] = {
			'!', 670, '"', 788, '#', 816, '$', 781, '%', 649, '&', 601, '\'',
				491, '(', 654, '*', 638, '+', 630, '-', 633, '/', 644, '0', 943,
				'<', 607, '=', 560, '>', 616, '?', 761, '@', 942, '\\', 19, ']',
				675, '^', 596, '_', 947, '`', 855, '|', 592, '[', 786, '{', 786,
				'}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 402;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 807;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'z'))
		{
			state = 873;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < ' ' || '+' < lookahead)
			&& (lookahead < ';' || '}' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 403:
	{
		static const uint16_t map[] = {
			'!', 670, '"', 788, '#', 862, '$', 781, '%', 649, '&', 601, '\'',
				491, '(', 654, '*', 638, '+', 771, '-', 769, '/', 644, '0', 803,
				'<', 607, '=', 560, '>', 616, '?', 761, '\\', 308, ']', 675,
				'^', 596, '`', 856, '|', 592, '~', 772, '[', 786, '{', 786, '}',
				786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 403;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 805;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < ' ' || '+' < lookahead)
			&& (lookahead < ';' || '?' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 404:
	{
		static const uint16_t map[] = {
			'!', 670, '"', 788, '#', 862, '$', 781, '%', 649, '&', 600, '\'',
				491, '(', 654, ')', 655, '*', 638, '+', 771, '-', 769, '/', 644,
				'0', 803, '<', 614, '=', 560, '>', 619, '?', 761, '\\', 311,
				'^', 596, '`', 856, '|', 594, '~', 772, '[', 786, ']', 786, '{',
				786, '}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 404;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 805;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < ';' || '?' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 405:
	{
		static const uint16_t map[] = {
			'!', 670, '"', 788, '#', 862, '$', 781, '%', 649, '&', 600, '\'',
				491, '(', 654, ')', 499, '*', 638, '+', 771, '-', 769, '/', 644,
				'0', 803, '<', 614, '=', 560, '>', 619, '?', 761, '\\', 314,
				'^', 596, '`', 856, '|', 594, '~', 772, '[', 786, ']', 786, '{',
				786, '}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 405;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 805;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < ';' || '?' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 406:
	{
		static const uint16_t map[] = {
			'!', 670, '"', 788, '#', 862, '$', 781, '%', 649, '&', 600, '\'',
				491, '(', 654, '*', 638, '+', 771, '-', 769, '/', 644, '0', 803,
				':', 765, '<', 614, '=', 560, '>', 619, '?', 761, '\\', 313,
				'^', 596, '`', 856, '|', 594, '~', 772, '[', 786, ']', 786, '{',
				786, '}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 406;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 805;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < ' ' || '+' < lookahead)
			&& (lookahead < '/' || '?' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 407:
	{
		static const uint16_t map[] = {
			'!', 670, '"', 788, '#', 862, '$', 781, '%', 649, '&', 600, '\'',
				491, '(', 654, '*', 638, '+', 771, '-', 769, '/', 644, '0', 803,
				'<', 614, '=', 560, '>', 619, '?', 761, '\\', 312, ']', 675,
				'^', 596, '`', 856, '|', 594, '~', 772, '[', 786, '{', 786, '}',
				786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 407;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 805;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < ' ' || '+' < lookahead)
			&& (lookahead < ';' || '?' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 408:
	{
		static const uint16_t map[] = {
			'!', 670, '"', 788, '#', 862, '$', 781, '%', 649, '&', 600, '\'',
				491, '(', 654, '*', 638, '+', 771, '-', 769, '/', 644, '0', 803,
				'<', 614, '=', 560, '>', 619, '?', 761, '\\', 315, ']', 787,
				'^', 596, '`', 856, '|', 594, '~', 772, '[', 786, '{', 786, '}',
				786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 408;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 805;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < ' ' || '+' < lookahead)
			&& (lookahead < ';' || '?' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 409:
	{
		static const uint16_t map[] = {
			'!', 672, '"', 788, '#', 816, '$', 781, '&', 508, '\'', 491, '(',
				494, '*', 640, '-', 636, '0', 943, '<', 608, '>', 617, '?', 761,
				'@', 942, '\\', 74, '_', 947, '`', 855, '[', 786, ']', 786, '{',
				786, '}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 409;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 807;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 873;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead)
			&& lookahead != ';' && lookahead != '<' && (lookahead < '_'
				|| '}' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 410:
	{
		static const uint16_t map[] = {
			'!', 672, '"', 788, '#', 816, '$', 781, '&', 489, '\'', 491, '(',
				654, '*', 640, '-', 636, '0', 943, '<', 609, '=', 952, '>', 617,
				'?', 761, '@', 942, '\\', 51, '_', 947, '`', 855, '|', 593, '[',
				786, ']', 786, '{', 786, '}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 410;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 807;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 873;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead)
			&& (lookahead < ';' || ']' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 411:
	{
		static const uint16_t map[] = {
			'!', 672, '"', 788, '#', 816, '$', 781, '&', 489, '\'', 491, '(',
				494, '*', 640, '-', 636, '0', 943, '<', 609, '=', 952, '>', 617,
				'?', 761, '@', 942, '\\', 171, '_', 947, '`', 855, '|', 593,
				'[', 786, ']', 786, '{', 786, '}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 411;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 807;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 873;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead)
			&& (lookahead < ';' || ']' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 412:
	{
		static const uint16_t map[] = {
			'!', 672, '"', 788, '#', 816, '$', 781, '&', 489, '\'', 491, '(',
				494, '*', 640, '-', 636, '0', 943, '<', 609, '>', 617, '?', 761,
				'@', 942, '\\', 55, ']', 675, '_', 947, '`', 855, '|', 593, '[',
				786, '{', 786, '}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 412;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 807;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 873;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead)
			&& lookahead != ';' && lookahead != '<')
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 413:
	{
		static const uint16_t map[] = {
			'!', 672, '"', 788, '#', 816, '$', 781, '&', 489, '\'', 491, '(',
				494, '*', 640, '-', 636, '0', 943, '<', 609, '>', 617, '?', 761,
				'@', 942, '\\', 62, '_', 947, '`', 855, '|', 593, '[', 786, ']',
				786, '{', 786, '}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 413;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 807;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 873;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead)
			&& lookahead != ';' && lookahead != '<')
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 414:
	{
		static const uint16_t map[] = {
			'!', 672, '"', 788, '#', 816, '$', 781, '&', 489, '\'', 491, '(',
				494, '*', 640, '-', 636, '0', 943, '<', 610, '>', 617, '?', 761,
				'@', 942, '\\', 231, ']', 675, '_', 947, '`', 855, '|', 593,
				'[', 786, '{', 786, '}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 414;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 807;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 873;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead)
			&& lookahead != ';' && lookahead != '<')
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 415:
	{
		static const uint16_t map[] = {
			'!', 672, '"', 788, '#', 816, '$', 781, '&', 489, '\'', 491, '(',
				494, '*', 640, '-', 636, '0', 943, '<', 610, '>', 617, '?', 761,
				'@', 942, '\\', 235, '_', 947, '`', 855, '|', 593, '[', 786,
				']', 786, '{', 786, '}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 415;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 807;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 873;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead)
			&& lookahead != ';' && lookahead != '<')
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 416:
	{
		static const uint16_t map[] = {
			'!', 672, '"', 788, '#', 816, '$', 781, '\'', 491, '(', 494, ')',
				655, '*', 640, '-', 636, '0', 943, '<', 495, '>', 496, '?', 761,
				'@', 942, '\\', 110, '_', 947, '`', 855, '[', 786, ']', 786,
				'{', 786, '}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 416;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 807;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 873;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead)
			&& lookahead != ';' && lookahead != '<' && (lookahead < '_'
				|| '}' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 417:
	{
		static const uint16_t map[] = {
			'!', 672, '"', 788, '#', 862, '$', 781, '&', 508, '\'', 491, '(',
				654, ')', 655, '-', 950, '0', 803, ';', 490, '<', 608, '>', 617,
				'[', 674, '\\', 304, '`', 855, '{', 666, '|', 590, ']', 786,
				'}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 417;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 805;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 418:
	{
		static const uint16_t map[] = {
			'!', 672, '"', 788, '#', 862, '$', 781, '&', 508, '\'', 491, '(',
				654, ')', 499, '+', 771, '-', 769, '0', 803, '<', 608, '>', 617,
				'[', 674, '\\', 305, '`', 855, '{', 666, '|', 591, '~', 772,
				']', 786, '}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 418;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 805;
			goto next_state;
		};
		if (lookahead != 0 && lookahead != ';' && lookahead != '<')
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 419:
	{
		static const uint16_t map[] = {
			'!', 672, '"', 788, '#', 862, '$', 781, '&', 508, '\'', 491, '(',
				654, '+', 771, '-', 769, '0', 803, '<', 608, '>', 617, '[', 674,
				'\\', 306, ']', 675, '`', 855, '{', 666, '}', 786, '~', 772,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 419;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 805;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead)
			&& lookahead != ';' && lookahead != '<' && (lookahead < '{'
				|| '~' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 420:
	{
		static const uint16_t map[] = {
			'!', 672, '"', 788, '#', 862, '$', 781, '&', 508, '\'', 491, '(',
				654, '+', 771, '-', 769, '0', 803, '<', 608, '>', 617, '[', 674,
				'\\', 320, '`', 855, '~', 772, ']', 786, '{', 786, '}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 420;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 805;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead)
			&& lookahead != ';' && lookahead != '<' && (lookahead < '{'
				|| '~' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 421:
	{
		static const uint16_t map[] = {
			'!', 672, '"', 788, '#', 862, '$', 781, '&', 508, '\'', 491, '(',
				654, '-', 950, '0', 803, ';', 490, '<', 608, '>', 617, '[', 674,
				'\\', 309, '`', 855, 'e', 956, '{', 666, ']', 786, '}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 421;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 805;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead)
			&& (lookahead < '{' || '}' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 422:
	{
		static const uint16_t map[] = {
			'!', 672, '"', 788, '#', 862, '$', 781, '&', 508, '\'', 491, '(',
				654, '-', 950, '0', 803, '<', 608, '>', 617, '[', 674, '\\',
				310, ']', 786, '`', 855, '{', 666, '}', 667,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 422;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 805;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead)
			&& lookahead != ';' && lookahead != '<' && (lookahead < '{'
				|| '}' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 423:
	{
		static const uint16_t map[] = {
			'!', 672, '"', 788, '#', 862, '$', 781, '\'', 491, '(', 654, ')',
				499, '+', 771, '-', 769, '0', 803, '<', 495, '>', 496, '\\',
				352, '`', 855, '~', 772, '[', 786, ']', 786, '{', 786, '}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 423;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 805;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead)
			&& lookahead != ';' && lookahead != '<' && (lookahead < '{'
				|| '~' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 424:
	{
		static const uint16_t map[] = {
			'!', 672, '"', 788, '#', 862, '$', 781, '\'', 491, '(', 654, ')',
				499, '+', 771, '-', 769, '0', 804, '<', 495, '>', 496, '\\',
				332, '`', 855, '~', 772, '[', 786, ']', 786, '{', 786, '}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 424;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 806;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('_' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 868;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead)
			&& lookahead != ';' && lookahead != '<' && (lookahead < '_'
				|| '~' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 425:
	{
		static const uint16_t map[] = {
			'!', 951, '"', 788, '#', 862, '$', 781, '%', 649, '&', 601, '\'',
				491, '(', 654, '*', 638, '+', 630, '-', 633, '/', 644, '0', 803,
				'<', 607, '=', 560, '>', 616, '?', 761, '\\', 318, ']', 675,
				'^', 596, '`', 856, '|', 592, '[', 786, '{', 786, '}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 425;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 805;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < ' ' || '+' < lookahead)
			&& (lookahead < ';' || '?' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 426:
	{
		static const uint16_t map[] = {
			'!', 951, '"', 788, '#', 862, '$', 781, '%', 649, '&', 601, '\'',
				491, '(', 654, '*', 638, '+', 630, '-', 633, '/', 644, '0', 803,
				'<', 607, '=', 560, '>', 616, '?', 761, '\\', 319, ']', 675,
				'^', 596, '`', 855, '|', 592, '[', 786, '{', 786, '}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 426;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 805;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < ' ' || '+' < lookahead)
			&& (lookahead < ';' || '?' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 427:
	{
		static const uint16_t map[] = {
			'!', 671, '"', 788, '#', 816, '$', 780, '%', 650, '&', 600, ')',
				655, '*', 639, '+', 631, '-', 634, '/', 645, '0', 945, '<', 615,
				'=', 562, '>', 620, '?', 760, '@', 941, '\\', 67, '^', 597, '_',
				948, '|', 594,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 427;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
		{
			state = 879;
			goto next_state;
		};
		return result;
		;
	case 428:
	{
		static const uint16_t map[] = {
			'!', 671, '"', 788, '#', 816, '$', 780, '%', 650, '&', 600, ')',
				499, '*', 639, '+', 631, '-', 634, '/', 645, '0', 945, '<', 615,
				'=', 562, '>', 620, '?', 760, '@', 941, '\\', 181, '^', 597,
				'_', 948, '|', 594,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 428;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
		{
			state = 879;
			goto next_state;
		};
		return result;
		;
	case 429:
	{
		static const uint16_t map[] = {
			'!', 671, '"', 788, '#', 816, '$', 780, '%', 650, '&', 600, '*',
				639, '+', 631, '-', 634, '/', 645, '0', 945, ':', 762, '<', 615,
				'=', 562, '>', 620, '?', 760, '@', 941, '\\', 64, '^', 597, '_',
				948, '|', 594,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 429;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
		{
			state = 879;
			goto next_state;
		};
		return result;
		;
	case 430:
	{
		static const uint16_t map[] = {
			'!', 671, '"', 788, '#', 816, '$', 780, '%', 650, '&', 600, '*',
				639, '+', 631, '-', 634, '/', 645, '0', 945, '<', 615, '=', 562,
				'>', 620, '?', 760, '@', 941, '\\', 60, ']', 675, '^', 597, '_',
				948, '|', 594,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 430;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
		{
			state = 879;
			goto next_state;
		};
		return result;
		;
	case 431:
	{
		static const uint16_t map[] = {
			'!', 671, '"', 788, '#', 816, '$', 780, '%', 650, '&', 600, '*',
				639, '+', 631, '-', 634, '/', 645, '0', 945, '<', 615, '=', 562,
				'>', 620, '?', 760, '@', 941, '\\', 178, ']', 509, '^', 597,
				'_', 948, '|', 594,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 431;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
		{
			state = 879;
			goto next_state;
		};
		return result;
		;
	case 432:
	{
		static const uint16_t map[] = {
			'!', 671, '"', 788, '#', 816, '$', 780, '%', 650, '&', 600, '*',
				639, '+', 631, '-', 634, '/', 645, '0', 945, '<', 615, '=', 562,
				'>', 620, '?', 760, '@', 941, '\\', 69, '^', 597, '_', 948, '|',
				594,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 432;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
		{
			state = 879;
			goto next_state;
		};
		return result;
		;
	case 433:
	{
		static const uint16_t map[] = {
			'!', 506, '"', 788, '#', 862, '$', 785, '%', 650, '&', 600, ')',
				499, '*', 639, '+', 631, ',', 556, '-', 634, '.', 503, '/', 645,
				':', 762, ';', 490, '<', 615, '=', 562, '>', 620, '?', 760, '[',
				673,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (lookahead == '\\')
		{
			skip = true;
			state = 345;
			goto next_state;
		};
		if (lookahead == ']')
		{
			state = 509;
			goto next_state;
		};
		if (lookahead == '^')
		{
			state = 597;
			goto next_state;
		};
		if (lookahead == '`')
		{
			state = 855;
			goto next_state;
		};
		if (lookahead == 'e')
		{
			state = 514;
			goto next_state;
		};
		if (lookahead == 'i')
		{
			state = 513;
			goto next_state;
		};
		if (lookahead == '|')
		{
			state = 594;
			goto next_state;
		};
		if (lookahead == '}')
		{
			state = 818;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 434;
			goto next_state;
		};
		if (('0' <= lookahead && lookahead <= '9'))
		{
			state = 775;
			goto next_state;
		};
		return result;
		;
	case 434:
	{
		static const uint16_t map[] = {
			'!', 506, '"', 788, '#', 862, '$', 785, '%', 650, '&', 600, ')',
				499, '*', 639, '+', 631, ',', 556, '-', 634, '/', 645, ':', 762,
				';', 490, '<', 615, '=', 562, '>', 620, '?', 760, '[', 673,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (lookahead == '\\')
		{
			skip = true;
			state = 345;
			goto next_state;
		};
		if (lookahead == ']')
		{
			state = 509;
			goto next_state;
		};
		if (lookahead == '^')
		{
			state = 597;
			goto next_state;
		};
		if (lookahead == '`')
		{
			state = 855;
			goto next_state;
		};
		if (lookahead == 'e')
		{
			state = 514;
			goto next_state;
		};
		if (lookahead == 'i')
		{
			state = 513;
			goto next_state;
		};
		if (lookahead == '|')
		{
			state = 594;
			goto next_state;
		};
		if (lookahead == '}')
		{
			state = 818;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 434;
			goto next_state;
		};
		return result;
		;
	case 435:
	{
		static const uint16_t map[] = {
			'!', 506, '"', 788, '#', 862, '$', 498, '%', 650, '&', 600, '(',
				494, ')', 655, '*', 639, '+', 631, ',', 556, '-', 634, '/', 645,
				'<', 615, '=', 562, '>', 620, '?', 760,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (lookahead == '\\')
		{
			skip = true;
			state = 348;
			goto next_state;
		};
		if (lookahead == ']')
		{
			state = 675;
			goto next_state;
		};
		if (lookahead == '^')
		{
			state = 597;
			goto next_state;
		};
		if (lookahead == '`')
		{
			state = 855;
			goto next_state;
		};
		if (lookahead == '|')
		{
			state = 594;
			goto next_state;
		};
		if (lookahead == '[' || ('{' <= lookahead && lookahead <= '}'))
		{
			state = 786;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 435;
			goto next_state;
		};
		if (('0' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 879;
			goto next_state;
		};
		return result;
		;
	case 436:
	{
		static const uint16_t map[] = {
			'!', 506, '#', 862, '%', 650, '&', 600, ')', 655, '*', 639, '+',
				631, ',', 556, '-', 635, '/', 645, '<', 615, '=', 561, '>', 620,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (lookahead == '\\')
		{
			skip = true;
			state = 369;
			goto next_state;
		};
		if (lookahead == '^')
		{
			state = 597;
			goto next_state;
		};
		if (lookahead == '|')
		{
			state = 594;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 436;
			goto next_state;
		};
		return result;
		;
	case 437:
	{
		static const uint16_t map[] = {
			'!', 506, '#', 862, '%', 650, '&', 600, ')', 655, '*', 639, '+',
				631, '-', 634, '/', 645, '<', 615, '=', 562, '>', 620, '?', 760,
				'[', 673,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (lookahead == '\\')
		{
			skip = true;
			state = 367;
			goto next_state;
		};
		if (lookahead == ']')
		{
			state = 675;
			goto next_state;
		};
		if (lookahead == '^')
		{
			state = 597;
			goto next_state;
		};
		if (lookahead == '`')
		{
			state = 510;
			goto next_state;
		};
		if (lookahead == '|')
		{
			state = 594;
			goto next_state;
		};
		if (lookahead == '}')
		{
			state = 818;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 437;
			goto next_state;
		};
		return result;
		;
	case 438:
	{
		static const uint16_t map[] = {
			'!', 506, '#', 862, '%', 650, '&', 600, ')', 655, '*', 639, '+',
				631, '-', 634, '/', 645, '<', 615, '=', 562, '>', 620, '?', 760,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (lookahead == '\\')
		{
			skip = true;
			state = 360;
			goto next_state;
		};
		if (lookahead == ']')
		{
			state = 675;
			goto next_state;
		};
		if (lookahead == '^')
		{
			state = 597;
			goto next_state;
		};
		if (lookahead == '`')
		{
			state = 510;
			goto next_state;
		};
		if (lookahead == '|')
		{
			state = 594;
			goto next_state;
		};
		if (lookahead == '[' || ('{' <= lookahead && lookahead <= '}'))
		{
			state = 786;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 438;
			goto next_state;
		};
		return result;
		;
	case 439:
	{
		static const uint16_t map[] = {
			'!', 506, '#', 862, '%', 650, '&', 600, ')', 655, '*', 639, '+',
				631, '-', 634, '/', 645, '<', 615, '=', 562, '>', 620, '?', 760,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (lookahead == '\\')
		{
			skip = true;
			state = 362;
			goto next_state;
		};
		if (lookahead == '^')
		{
			state = 597;
			goto next_state;
		};
		if (lookahead == '`')
		{
			state = 510;
			goto next_state;
		};
		if (lookahead == '|')
		{
			state = 594;
			goto next_state;
		};
		if (('[' <= lookahead && lookahead <= ']') || ('{' <= lookahead
				&& lookahead <= '}'))
		{
			state = 786;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 439;
			goto next_state;
		};
		return result;
		;
	case 440:
	{
		static const uint16_t map[] = {
			'!', 506, '#', 862, '%', 650, '&', 600, ')', 499, '*', 639, '+',
				631, ',', 556, '-', 634, '/', 645, ':', 762, '<', 615, '=', 562,
				'>', 620, '?', 760,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (lookahead == '\\')
		{
			skip = true;
			state = 356;
			goto next_state;
		};
		if (lookahead == ']')
		{
			state = 787;
			goto next_state;
		};
		if (lookahead == '^')
		{
			state = 597;
			goto next_state;
		};
		if (lookahead == '`')
		{
			state = 510;
			goto next_state;
		};
		if (lookahead == '|')
		{
			state = 594;
			goto next_state;
		};
		if (lookahead == '[' || ('{' <= lookahead && lookahead <= '}'))
		{
			state = 786;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 440;
			goto next_state;
		};
		return result;
		;
	case 441:
	{
		static const uint16_t map[] = {
			'!', 506, '#', 862, '%', 650, '&', 600, ')', 499, '*', 639, '+',
				631, ',', 556, '-', 635, '/', 645, '<', 615, '=', 561, '>', 620,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (lookahead == '\\')
		{
			skip = true;
			state = 368;
			goto next_state;
		};
		if (lookahead == '^')
		{
			state = 597;
			goto next_state;
		};
		if (lookahead == '|')
		{
			state = 594;
			goto next_state;
		};
		if (lookahead == '}')
		{
			state = 778;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 442;
			goto next_state;
		};
		return result;
		;
	case 442:
	{
		static const uint16_t map[] = {
			'!', 506, '#', 862, '%', 650, '&', 600, ')', 499, '*', 639, '+',
				631, ',', 556, '-', 635, '/', 645, '<', 615, '=', 561, '>', 620,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (lookahead == '\\')
		{
			skip = true;
			state = 368;
			goto next_state;
		};
		if (lookahead == '^')
		{
			state = 597;
			goto next_state;
		};
		if (lookahead == '|')
		{
			state = 594;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 442;
			goto next_state;
		};
		return result;
		;
	case 443:
	{
		static const uint16_t map[] = {
			'!', 506, '#', 862, '%', 650, '&', 600, ')', 499, '*', 639, '+',
				631, '-', 634, '/', 645, ':', 762, '<', 615, '=', 562, '>', 620,
				'?', 760,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (lookahead == '\\')
		{
			skip = true;
			state = 361;
			goto next_state;
		};
		if (lookahead == '^')
		{
			state = 597;
			goto next_state;
		};
		if (lookahead == '`')
		{
			state = 510;
			goto next_state;
		};
		if (lookahead == '|')
		{
			state = 594;
			goto next_state;
		};
		if (('[' <= lookahead && lookahead <= ']') || ('{' <= lookahead
				&& lookahead <= '}'))
		{
			state = 786;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 443;
			goto next_state;
		};
		return result;
		;
	case 444:
	{
		static const uint16_t map[] = {
			'!', 669, '"', 788, '#', 816, '$', 780, '&', 489, '*', 637, '-',
				632, '0', 945, '<', 612, '>', 618, '?', 760, '@', 941, '\\',
				108, ']', 675, '_', 948, '|', 593,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 444;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
		{
			state = 879;
			goto next_state;
		};
		return result;
		;
	case 445:
	{
		static const uint16_t map[] = {
			'!', 669, '"', 788, '#', 816, '$', 780, '&', 489, '*', 637, '-',
				632, '0', 945, '<', 612, '>', 618, '?', 760, '@', 941, '\\',
				114, '_', 948, '|', 593,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 445;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
		{
			state = 879;
			goto next_state;
		};
		return result;
		;
	case 446:
	{
		static const uint16_t map[] = {
			'!', 669, '"', 788, '#', 816, '$', 780, '&', 489, '*', 637, '-',
				632, '0', 945, '<', 613, '>', 618, '?', 760, '@', 941, '\\',
				195, ']', 675, '_', 948, '|', 593,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 446;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
		{
			state = 879;
			goto next_state;
		};
		return result;
		;
	case 447:
	{
		static const uint16_t map[] = {
			'!', 669, '"', 788, '#', 816, '$', 780, '&', 489, '*', 637, '-',
				632, '0', 945, '<', 613, '>', 618, '?', 760, '@', 941, '\\',
				197, '_', 948, '|', 593,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 447;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
		{
			state = 879;
			goto next_state;
		};
		return result;
		;
	case 448:
	{
		static const uint16_t map[] = {
			'!', 669, '"', 788, '#', 816, '$', 780, ')', 655, '*', 637, '-',
				632, '0', 945, '?', 760, '@', 941, '\\', 132, '_', 948, '|',
				590,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 448;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
		{
			state = 879;
			goto next_state;
		};
		return result;
		;
	case 449:
	{
		static const uint16_t map[] = {
			'!', 669, '"', 788, '#', 816, '$', 780, '*', 637, '-', 632, '0',
				945, '?', 760, '@', 941, '\\', 135, '_', 948,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (lookahead == '\n' || lookahead == '\r')
		{
			skip = true;
			state = 449;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			state = 793;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
		{
			state = 879;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '_' || 'z' < lookahead))
		{
			state = 798;
			goto next_state;
		};
		return result;
		;
	case 450:
	{
		static const uint16_t map[] = {
			'!', 669, '"', 788, '#', 816, '$', 780, '*', 637, '-', 632, '0',
				945, '?', 760, '@', 941, '\\', 134, '_', 948,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 450;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
		{
			state = 879;
			goto next_state;
		};
		return result;
		;
	case 451:
	{
		static const uint16_t map[] = {
			'!', 669, '"', 788, '#', 862, '$', 785, '&', 489, '(', 653, '+',
				771, '-', 769, '0', 808, '<', 612, '>', 618,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (lookahead == '\\')
		{
			skip = true;
			state = 377;
			goto next_state;
		};
		if (lookahead == ']')
		{
			state = 675;
			goto next_state;
		};
		if (lookahead == '`')
		{
			state = 855;
			goto next_state;
		};
		if (lookahead == '|')
		{
			state = 593;
			goto next_state;
		};
		if (lookahead == '~')
		{
			state = 772;
			goto next_state;
		};
		if (lookahead == '[' || ('{' <= lookahead && lookahead <= '}'))
		{
			state = 786;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 451;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 810;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('_' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 879;
			goto next_state;
		};
		return result;
		;
	case 452:
	{
		static const uint16_t map[] = {
			'!', 669, '#', 816, '$', 780, '*', 637, '-', 632, '0', 945, '?',
				760, '@', 941, '\\', 136, '_', 948,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (lookahead == '\n' || lookahead == '\r')
		{
			skip = true;
			state = 452;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			state = 794;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
		{
			state = 879;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < ' ' || '$' < lookahead)
			&& (lookahead < '_' || 'z' < lookahead))
		{
			state = 798;
			goto next_state;
		};
		return result;
		;
	case 453:
	{
		static const uint16_t map[] = {
			'!', 669, '#', 816, '$', 780, '*', 637, '-', 632, '0', 945, '?',
				760, '@', 941, '\\', 138, '_', 948,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 453;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
		{
			state = 879;
			goto next_state;
		};
		return result;
		;
	case 454:
	{
		static const uint16_t map[] = {
			'!',
			669,
			'#',
			816,
			'$',
			784,
			'*',
			637,
			'-',
			632,
			'0',
			945,
			'?',
			760,
			'@',
			941,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (lookahead == '\\')
		{
			skip = true;
			state = 382;
			goto next_state;
		};
		if (lookahead == '_')
		{
			state = 948;
			goto next_state;
		};
		if (lookahead == '`')
		{
			state = 855;
			goto next_state;
		};
		if (lookahead == '}')
		{
			state = 818;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 454;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
		{
			state = 879;
			goto next_state;
		};
		return result;
		;
	case 455:
	{
		static const uint16_t map[] = {
			'!',
			669,
			'#',
			816,
			'$',
			784,
			'*',
			637,
			'-',
			632,
			'0',
			945,
			'?',
			760,
			'@',
			941,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (lookahead == '\\')
		{
			skip = true;
			state = 391;
			goto next_state;
		};
		if (lookahead == '_')
		{
			state = 948;
			goto next_state;
		};
		if (lookahead == '`')
		{
			state = 855;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 455;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
		{
			state = 879;
			goto next_state;
		};
		return result;
		;
	case 456:
	{
		static const uint16_t map[] = {
			'!',
			819,
			'#',
			825,
			'$',
			784,
			'*',
			637,
			'-',
			632,
			'0',
			945,
			'=',
			826,
			'?',
			760,
			'@',
			941,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (lookahead == '\\')
		{
			skip = true;
			state = 382;
			goto next_state;
		};
		if (lookahead == '_')
		{
			state = 948;
			goto next_state;
		};
		if (lookahead == '`')
		{
			state = 855;
			goto next_state;
		};
		if (lookahead == '}')
		{
			state = 818;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 454;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
		{
			state = 879;
			goto next_state;
		};
		return result;
		;
	case 457:
	{
		static const uint16_t map[] = {
			'"', 788, '#', 862, '$', 781, '&', 508, '\'', 491, '(', 654, '-',
				950, '0', 803, '<', 608, '>', 617, '[', 674, '\\', 330, '`',
				855, ']', 786, '{', 786, '}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 457;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 805;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead)
			&& lookahead != ';' && lookahead != '<' && (lookahead < '{'
				|| '}' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 458:
	{
		static const uint16_t map[] = {
			'"', 788, '#', 862, '$', 781, '&', 508, '\'', 491, '(', 494, ')',
				655, '-', 950, '0', 803, '<', 608, '>', 617, '\\', 340, '`',
				855, '|', 590, '[', 786, ']', 786, '{', 786, '}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 458;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 805;
			goto next_state;
		};
		if (lookahead != 0 && lookahead != ';' && lookahead != '<')
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 459:
	{
		static const uint16_t map[] = {
			'"', 788, '#', 862, '$', 781, '&', 508, '\'', 491, '(', 494, ')',
				655, '-', 950, '0', 803, '<', 608, '>', 617, '\\', 371, '`',
				856, '|', 590, '[', 786, ']', 786, '{', 786, '}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 459;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 805;
			goto next_state;
		};
		if (lookahead != 0 && lookahead != ';' && lookahead != '<')
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 460:
	{
		static const uint16_t map[] = {
			'"', 788, '#', 862, '$', 781, '&', 489, '\'', 491, '(', 654, ')',
				655, '-', 950, '0', 803, '<', 609, '>', 617, '\\', 338, '`',
				855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 460;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 805;
			goto next_state;
		};
		if (lookahead != 0 && lookahead != ';' && lookahead != '<')
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 461:
	{
		static const uint16_t map[] = {
			'"', 788, '#', 862, '$', 781, '&', 489, '\'', 491, '(', 654, '-',
				950, '0', 803, '<', 609, '=', 952, '>', 617, '\\', 329, '`',
				855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 461;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 805;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead)
			&& (lookahead < ';' || '>' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 462:
	{
		static const uint16_t map[] = {
			'"', 788, '#', 862, '$', 781, '&', 489, '\'', 491, '(', 654, '-',
				950, '0', 803, '<', 609, '=', 952, '>', 617, '\\', 353, '`',
				856, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 462;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 805;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead)
			&& (lookahead < ';' || '>' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 463:
	{
		static const uint16_t map[] = {
			'"', 788, '#', 862, '$', 781, '&', 489, '\'', 491, '(', 494, ')',
				655, '-', 950, '0', 803, '<', 609, '>', 617, '\\', 358, '`',
				856, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 463;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 805;
			goto next_state;
		};
		if (lookahead != 0 && lookahead != ';' && lookahead != '<')
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 464:
	{
		static const uint16_t map[] = {
			'"', 788, '#', 862, '$', 781, '&', 489, '\'', 491, '(', 494, '-',
				950, '0', 803, '<', 609, '>', 617, '\\', 336, ']', 675, '`',
				855, '|', 593, '[', 786, '{', 786, '}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 464;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 805;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead)
			&& lookahead != ';' && lookahead != '<')
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 465:
	{
		static const uint16_t map[] = {
			'"', 788, '#', 862, '$', 781, '&', 489, '\'', 491, '(', 494, '-',
				950, '0', 803, '<', 609, '>', 617, '\\', 355, ']', 675, '`',
				856, '|', 593, '[', 786, '{', 786, '}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 465;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 805;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead)
			&& lookahead != ';' && lookahead != '<')
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 466:
	{
		static const uint16_t map[] = {
			'"', 788, '#', 862, '$', 781, '&', 489, '\'', 491, '(', 494, '-',
				950, '0', 803, '<', 610, '>', 617, '\\', 342, '`', 855, '|',
				593, '[', 786, ']', 786, '{', 786, '}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 466;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 805;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead)
			&& lookahead != ';' && lookahead != '<')
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 467:
	{
		static const uint16_t map[] = {
			'"', 788, '#', 862, '$', 781, '&', 489, '\'', 491, '(', 494, '-',
				950, '0', 803, '<', 610, '>', 617, '\\', 363, ']', 675, '`',
				856, '|', 593, '[', 786, '{', 786, '}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 467;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 805;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead)
			&& lookahead != ';' && lookahead != '<')
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 468:
	{
		static const uint16_t map[] = {
			'"', 788, '#', 862, '$', 781, '&', 489, '\'', 491, '(', 494, '-',
				950, '0', 803, '<', 610, '>', 617, '\\', 364, '`', 856, '|',
				593, '[', 786, ']', 786, '{', 786, '}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 468;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 805;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead)
			&& lookahead != ';' && lookahead != '<')
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 469:
	{
		static const uint16_t map[] = {
			'"', 788, '#', 862, '$', 781, '&', 489, '\'', 491, '(', 494, '-',
				950, '0', 803, '<', 610, '>', 617, '\\', 400, ']', 675, '`',
				855, '|', 593, '[', 786, '{', 786, '}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 469;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 805;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead)
			&& lookahead != ';' && lookahead != '<')
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 470:
	{
		static const uint16_t map[] = {
			'"', 788, '#', 862, '$', 781, '&', 489, '\'', 491, '(', 494, '-',
				950, '0', 804, '<', 610, '>', 617, '\\', 334, '`', 855, '|',
				593, '[', 786, ']', 786, '{', 786, '}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 470;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 806;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('_' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 868;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead)
			&& lookahead != ';' && lookahead != '<')
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 471:
	{
		static const uint16_t map[] = {
			'"', 788, '#', 862, '$', 781, '&', 489, '\'', 491, '(', 494, '-',
				950, '0', 804, '<', 610, '>', 617, '\\', 359, '`', 856, '|',
				593, '[', 786, ']', 786, '{', 786, '}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 471;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 806;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('_' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 868;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead)
			&& lookahead != ';' && lookahead != '<')
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 472:
	{
		static const uint16_t map[] = {
			'"', 788, '#', 862, '$', 781, '\'', 491, '(', 654, '-', 950, '0',
				803, '<', 495, '>', 496, '\\', 366, '`', 855, 'e', 956, '[',
				786, ']', 786, '{', 786, '}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 472;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 805;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead)
			&& lookahead != ';' && lookahead != '<' && (lookahead < '{'
				|| '}' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 473:
	{
		static const uint16_t map[] = {
			'"', 788, '#', 862, '$', 781, '\'', 491, '(', 654, '-', 950, '0',
				803, '<', 495, '>', 496, '\\', 373, '`', 855, '}', 818, '[',
				786, ']', 786, '{', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 473;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 805;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead)
			&& lookahead != ';' && lookahead != '<' && (lookahead < '{'
				|| '}' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 474:
	{
		static const uint16_t map[] = {
			'"', 788, '#', 862, '$', 785, '&', 489, '(', 653, ')', 499, '+',
				501, '-', 502, '0', 809, '<', 613, '=', 559, '>', 618,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (lookahead == '\\')
		{
			skip = true;
			state = 383;
			goto next_state;
		};
		if (lookahead == ']')
		{
			state = 675;
			goto next_state;
		};
		if (lookahead == '`')
		{
			state = 855;
			goto next_state;
		};
		if (lookahead == '|')
		{
			state = 593;
			goto next_state;
		};
		if (lookahead == '[' || ('{' <= lookahead && lookahead <= '}'))
		{
			state = 786;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 474;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 811;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('_' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 656;
			goto next_state;
		};
		return result;
		;
	case 475:
	{
		static const uint16_t map[] = {
			'"', 788, '#', 862, '$', 782, '\'', 491, '(', 653, ')', 655, ';',
				553, '<', 495, '>', 496, '\\', 389, '`', 855, '{', 666, '|',
				590, '}', 818,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 475;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead)
			&& (lookahead < '[' || ']' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 476:
	{
		static const uint16_t map[] = {
			'"',
			788,
			'#',
			862,
			'$',
			497,
			'%',
			646,
			'*',
			637,
			'+',
			629,
			'-',
			632,
			'/',
			641,
			':',
			762,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (lookahead == '\\')
		{
			skip = true;
			state = 393;
			goto next_state;
		};
		if (lookahead == '`')
		{
			state = 855;
			goto next_state;
		};
		if (lookahead == '}')
		{
			state = 818;
			goto next_state;
		};
		if (('[' <= lookahead && lookahead <= ']') || lookahead == '{')
		{
			state = 786;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 476;
			goto next_state;
		};
		return result;
		;
	case 477:
		if (lookahead == '"')
		{
			state = 788;
			goto next_state;
		};
		if (lookahead == '#')
		{
			state = 862;
			goto next_state;
		};
		if (lookahead == '\'')
		{
			state = 491;
			goto next_state;
		};
		if (lookahead == ')')
		{
			state = 655;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			skip = true;
			state = 395;
			goto next_state;
		};
		if (lookahead == '}')
		{
			state = 818;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			state = 842;
			goto next_state;
		};
		return result;
		;
	case 478:
	{
		static const uint16_t map[] = {
			'"', 788, '#', 863, '$', 781, '\'', 491, '(', 654, '-', 950, '0',
				803, '<', 495, '>', 496, '\\', 374, '`', 855, '[', 786, ']',
				786, '{', 786, '}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 478;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 805;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead)
			&& lookahead != ';' && lookahead != '<' && (lookahead < '{'
				|| '}' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 479:
	{
		static const uint16_t map[] = {
			'"', 788, '#', 863, '$', 781, '\'', 491, '(', 494, '-', 950, '0',
				803, '<', 495, '>', 496, '\\', 376, ']', 675, '`', 855, '[',
				786, '{', 786, '}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 479;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 805;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead)
			&& lookahead != ';' && lookahead != '<' && (lookahead < '{'
				|| '}' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 480:
		if (lookahead == '"')
		{
			state = 788;
			goto next_state;
		};
		if (lookahead == '#')
		{
			state = 797;
			goto next_state;
		};
		if (lookahead == '$')
		{
			state = 783;
			goto next_state;
		};
		if (lookahead == '(')
		{
			state = 796;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 302;
			goto next_state;
		};
		if (lookahead == '`')
		{
			state = 855;
			goto next_state;
		};
		if (lookahead == '\n' || lookahead == '\r')
		{
			skip = true;
			state = 480;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			state = 795;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 798;
			goto next_state;
		};
		return result;
		;
	case 481:
	{
		static const uint16_t map[] = {
			'#', 816, '%', 648, '*', 823, '+', 833, ',', 558, '-', 830, '/',
				643, ':', 764, '=', 826, '?', 836, '@', 821, '[', 673,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (lookahead == '\\')
		{
			skip = true;
			state = 375;
			goto next_state;
		};
		if (lookahead == '^')
		{
			state = 598;
			goto next_state;
		};
		if (lookahead == '}')
		{
			state = 818;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 482;
			goto next_state;
		};
		return result;
		;
	case 482:
		if (lookahead == '#')
		{
			state = 816;
			goto next_state;
		};
		if (lookahead == '%')
		{
			state = 648;
			goto next_state;
		};
		if (lookahead == ',')
		{
			state = 558;
			goto next_state;
		};
		if (lookahead == '/')
		{
			state = 643;
			goto next_state;
		};
		if (lookahead == ':')
		{
			state = 762;
			goto next_state;
		};
		if (lookahead == '[')
		{
			state = 673;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			skip = true;
			state = 375;
			goto next_state;
		};
		if (lookahead == '^')
		{
			state = 598;
			goto next_state;
		};
		if (lookahead == '}')
		{
			state = 818;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 482;
			goto next_state;
		};
		return result;
		;
	case 483:
		if (lookahead == '#')
		{
			state = 862;
			goto next_state;
		};
		if (lookahead == '$')
		{
			state = 515;
			goto next_state;
		};
		if (lookahead == '&')
		{
			state = 489;
			goto next_state;
		};
		if (lookahead == '-')
		{
			state = 504;
			goto next_state;
		};
		if (lookahead == '0')
		{
			state = 808;
			goto next_state;
		};
		if (lookahead == '<')
		{
			state = 613;
			goto next_state;
		};
		if (lookahead == '>')
		{
			state = 618;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			skip = true;
			state = 385;
			goto next_state;
		};
		if (lookahead == ']')
		{
			state = 675;
			goto next_state;
		};
		if (lookahead == '`')
		{
			state = 510;
			goto next_state;
		};
		if (lookahead == '|')
		{
			state = 593;
			goto next_state;
		};
		if (lookahead == '[' || ('{' <= lookahead && lookahead <= '}'))
		{
			state = 786;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 483;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 810;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('_' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 879;
			goto next_state;
		};
		return result;
		;
	case 484:
	{
		static const uint16_t map[] = {
			'#',
			862,
			'%',
			646,
			'&',
			489,
			'*',
			637,
			'+',
			629,
			'-',
			632,
			'/',
			641,
			'<',
			613,
			'>',
			618,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (lookahead == '\\')
		{
			skip = true;
			state = 387;
			goto next_state;
		};
		if (lookahead == '`')
		{
			state = 510;
			goto next_state;
		};
		if (lookahead == '|')
		{
			state = 593;
			goto next_state;
		};
		if (('[' <= lookahead && lookahead <= ']') || ('{' <= lookahead
				&& lookahead <= '}'))
		{
			state = 786;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 484;
			goto next_state;
		};
		return result;
		;
	case 485:
	{
		static const uint16_t map[] = {
			'#',
			862,
			'&',
			508,
			'(',
			654,
			'<',
			611,
			'>',
			618,
			'[',
			674,
			'\\',
			392,
			'{',
			666,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 485;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '"' || '$' < lookahead)
				&& (lookahead < '&' || ')' < lookahead) && lookahead != ';'
				&& lookahead != '<' && (lookahead < '[' || ']' < lookahead)
				&& lookahead != '`' && (lookahead < '{' || '}' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 486:
		if (lookahead == '#')
		{
			state = 862;
			goto next_state;
		};
		if (lookahead == '&')
		{
			state = 489;
			goto next_state;
		};
		if (lookahead == '<')
		{
			state = 612;
			goto next_state;
		};
		if (lookahead == '>')
		{
			state = 618;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			skip = true;
			state = 388;
			goto next_state;
		};
		if (lookahead == '`')
		{
			state = 510;
			goto next_state;
		};
		if (lookahead == '|')
		{
			state = 593;
			goto next_state;
		};
		if (('[' <= lookahead && lookahead <= ']') || ('{' <= lookahead
				&& lookahead <= '}'))
		{
			state = 786;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 486;
			goto next_state;
		};
		return result;
		;
	case 487:
	{
		static const uint16_t map[] = {
			'#', 862, '&', 489, '<', 612, '>', 618, '\\', 384, ']', 675, '`',
				510, '|', 593, '[', 786, '{', 786, '}', 786,
		};
		for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
		{
			if (map[i] == lookahead)
			{
				state = map[i + 1];
				goto next_state;
			}
		}
	};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 487;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '"' || '$' < lookahead)
				&& (lookahead < '&' || ')' < lookahead) && lookahead != ';'
				&& lookahead != '<')
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 488:
		if (lookahead == '#')
		{
			state = 862;
			goto next_state;
		};
		if (lookahead == '+')
		{
			state = 507;
			goto next_state;
		};
		if (lookahead == '/')
		{
			state = 641;
			goto next_state;
		};
		if (lookahead == '=')
		{
			state = 559;
			goto next_state;
		};
		if (lookahead == '[')
		{
			state = 673;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			skip = true;
			state = 396;
			goto next_state;
		};
		if (lookahead == '`')
		{
			state = 510;
			goto next_state;
		};
		if (lookahead == '}')
		{
			state = 818;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 488;
			goto next_state;
		};
		return result;
		;
	case 489:
		if (lookahead == '&')
		{
			state = 588;
			goto next_state;
		};
		if (lookahead == '>')
		{
			state = 680;
			goto next_state;
		};
		return result;
		;
	case 490:
		if (lookahead == '&')
		{
			state = 664;
			goto next_state;
		};
		if (lookahead == ';')
		{
			state = 663;
			goto next_state;
		};
		return result;
		;
	case 491:
		if (lookahead == '\'')
		{
			state = 800;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 491;
			goto next_state;
		};
		return result;
		;
	case 492:
		if (lookahead == '\'')
		{
			state = 801;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 493;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 492;
			goto next_state;
		};
		return result;
		;
	case 493:
		if (lookahead == '\'')
		{
			state = 802;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 493;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 492;
			goto next_state;
		};
		return result;
		;
	case 494:
		if (lookahead == '(')
		{
			state = 551;
			goto next_state;
		};
		return result;
		;
	case 495:
		if (lookahead == '(')
		{
			state = 858;
			goto next_state;
		};
		return result;
		;
	case 496:
		if (lookahead == '(')
		{
			state = 859;
			goto next_state;
		};
		return result;
		;
	case 497:
		if (lookahead == '(')
		{
			state = 853;
			goto next_state;
		};
		if (lookahead == '`')
		{
			state = 857;
			goto next_state;
		};
		return result;
		;
	case 498:
		if (lookahead == '(')
		{
			state = 853;
			goto next_state;
		};
		if (lookahead == '`')
		{
			state = 857;
			goto next_state;
		};
		if (lookahead == '{')
		{
			state = 817;
			goto next_state;
		};
		return result;
		;
	case 499:
		if (lookahead == ')')
		{
			state = 552;
			goto next_state;
		};
		return result;
		;
	case 500:
		if (lookahead == '+')
		{
			state = 564;
			goto next_state;
		};
		return result;
		;
	case 501:
		if (lookahead == '+')
		{
			state = 564;
			goto next_state;
		};
		if (lookahead == '=')
		{
			state = 568;
			goto next_state;
		};
		return result;
		;
	case 502:
		if (lookahead == '-')
		{
			state = 566;
			goto next_state;
		};
		if (lookahead == '0')
		{
			state = 809;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 811;
			goto next_state;
		};
		return result;
		;
	case 503:
		if (lookahead == '.')
		{
			state = 776;
			goto next_state;
		};
		return result;
		;
	case 504:
		if (lookahead == '0')
		{
			state = 809;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 811;
			goto next_state;
		};
		return result;
		;
	case 505:
		if (lookahead == '<')
		{
			state = 759;
			goto next_state;
		};
		return result;
		;
	case 506:
		if (lookahead == '=')
		{
			state = 605;
			goto next_state;
		};
		return result;
		;
	case 507:
		if (lookahead == '=')
		{
			state = 568;
			goto next_state;
		};
		return result;
		;
	case 508:
		if (lookahead == '>')
		{
			state = 680;
			goto next_state;
		};
		return result;
		;
	case 509:
		if (lookahead == ']')
		{
			state = 677;
			goto next_state;
		};
		return result;
		;
	case 510:
		if (lookahead == '`')
		{
			state = 779;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			state = 510;
			goto next_state;
		};
		return result;
		;
	case 511:
		if (lookahead == 'a')
		{
			state = 512;
			goto next_state;
		};
		return result;
		;
	case 512:
		if (lookahead == 'c')
		{
			state = 657;
			goto next_state;
		};
		return result;
		;
	case 513:
		if (lookahead == 'n')
		{
			state = 548;
			goto next_state;
		};
		return result;
		;
	case 514:
		if (lookahead == 's')
		{
			state = 511;
			goto next_state;
		};
		return result;
		;
	case 515:
		if (lookahead == '{')
		{
			state = 817;
			goto next_state;
		};
		return result;
		;
	case 516:
		if (lookahead == '|')
		{
			state = 586;
			goto next_state;
		};
		return result;
		;
	case 517:
		if (('0' <= lookahead && lookahead <= '9'))
		{
			state = 811;
			goto next_state;
		};
		return result;
		;
	case 518:
		if (lookahead != 0 && (lookahead < '\t' || '\r' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 519:
		if (eof)
		{
			state = 547;
			goto next_state;
		};
		if (lookahead == '\n')
		{
			state = 690;
			goto next_state;
		};
		if (lookahead == '#')
		{
			state = 862;
			goto next_state;
		};
		if (lookahead == '&')
		{
			state = 602;
			goto next_state;
		};
		if (lookahead == ')')
		{
			state = 655;
			goto next_state;
		};
		if (lookahead == ';')
		{
			state = 555;
			goto next_state;
		};
		if (lookahead == '<')
		{
			state = 612;
			goto next_state;
		};
		if (lookahead == '>')
		{
			state = 618;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			skip = true;
			state = 542;
			goto next_state;
		};
		if (lookahead == '`')
		{
			state = 856;
			goto next_state;
		};
		if (lookahead == '|')
		{
			state = 593;
			goto next_state;
		};
		if (('[' <= lookahead && lookahead <= ']') || ('{' <= lookahead
				&& lookahead <= '}'))
		{
			state = 786;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 519;
			goto next_state;
		};
		return result;
		;
	case 520:
		if (eof)
		{
			state = 547;
			goto next_state;
		};
		if (lookahead == '\n')
		{
			state = 690;
			goto next_state;
		};
		if (lookahead == '#')
		{
			state = 862;
			goto next_state;
		};
		if (lookahead == '&')
		{
			state = 602;
			goto next_state;
		};
		if (lookahead == ')')
		{
			state = 655;
			goto next_state;
		};
		if (lookahead == ';')
		{
			state = 555;
			goto next_state;
		};
		if (lookahead == '<')
		{
			state = 612;
			goto next_state;
		};
		if (lookahead == '>')
		{
			state = 618;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			skip = true;
			state = 544;
			goto next_state;
		};
		if (lookahead == '`')
		{
			state = 855;
			goto next_state;
		};
		if (lookahead == '|')
		{
			state = 593;
			goto next_state;
		};
		if (('[' <= lookahead && lookahead <= ']') || ('{' <= lookahead
				&& lookahead <= '}'))
		{
			state = 786;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 520;
			goto next_state;
		};
		return result;
		;
	case 521:
		if (eof)
		{
			state = 547;
			goto next_state;
		};
		if (lookahead == '\n')
		{
			state = 690;
			goto next_state;
		};
		if (lookahead == '#')
		{
			state = 862;
			goto next_state;
		};
		if (lookahead == '&')
		{
			state = 602;
			goto next_state;
		};
		if (lookahead == ')')
		{
			state = 655;
			goto next_state;
		};
		if (lookahead == ';')
		{
			state = 555;
			goto next_state;
		};
		if (lookahead == '<')
		{
			state = 613;
			goto next_state;
		};
		if (lookahead == '>')
		{
			state = 618;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			skip = true;
			state = 541;
			goto next_state;
		};
		if (lookahead == '`')
		{
			state = 856;
			goto next_state;
		};
		if (lookahead == '|')
		{
			state = 593;
			goto next_state;
		};
		if (('[' <= lookahead && lookahead <= ']') || ('{' <= lookahead
				&& lookahead <= '}'))
		{
			state = 786;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 521;
			goto next_state;
		};
		return result;
		;
	case 522:
		if (eof)
		{
			state = 547;
			goto next_state;
		};
		if (lookahead == '\n')
		{
			state = 690;
			goto next_state;
		};
		if (lookahead == '#')
		{
			state = 862;
			goto next_state;
		};
		if (lookahead == '&')
		{
			state = 602;
			goto next_state;
		};
		if (lookahead == ')')
		{
			state = 655;
			goto next_state;
		};
		if (lookahead == ';')
		{
			state = 555;
			goto next_state;
		};
		if (lookahead == '<')
		{
			state = 613;
			goto next_state;
		};
		if (lookahead == '>')
		{
			state = 618;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			skip = true;
			state = 543;
			goto next_state;
		};
		if (lookahead == '`')
		{
			state = 855;
			goto next_state;
		};
		if (lookahead == '|')
		{
			state = 593;
			goto next_state;
		};
		if (('[' <= lookahead && lookahead <= ']') || ('{' <= lookahead
				&& lookahead <= '}'))
		{
			state = 786;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 522;
			goto next_state;
		};
		return result;
		;
	case 523:
		if (eof)
		{
			state = 547;
			goto next_state;
		};
		if (lookahead == '\n')
		{
			skip = true;
			state = 521;
			goto next_state;
		};
		return result;
		;
	case 524:
		if (eof)
		{
			state = 547;
			goto next_state;
		};
		if (lookahead == '\n')
		{
			skip = true;
			state = 519;
			goto next_state;
		};
		return result;
		;
	case 525:
		if (eof)
		{
			state = 547;
			goto next_state;
		};
		if (lookahead == '\n')
		{
			skip = true;
			state = 522;
			goto next_state;
		};
		return result;
		;
	case 526:
		if (eof)
		{
			state = 547;
			goto next_state;
		};
		if (lookahead == '\n')
		{
			skip = true;
			state = 520;
			goto next_state;
		};
		return result;
		;
	case 527:
		if (eof)
		{
			state = 547;
			goto next_state;
		};
		{
			static const uint16_t map[] = {
				'\n', 703, '"', 788, '#', 862, '$', 781, '&', 602, '\'', 491,
					'(', 654, ')', 655, '-', 950, '0', 803, ';', 555, '<', 609,
					'=', 952, '>', 617, '\\', 323, '`', 855, '|', 593, '[', 786,
					']', 786, '{', 786, '}', 786,
			};
			for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
			{
				if (map[i] == lookahead)
				{
					state = map[i + 1];
					goto next_state;
				}
			}
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 527;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 805;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 528:
		if (eof)
		{
			state = 547;
			goto next_state;
		};
		{
			static const uint16_t map[] = {
				'\n', 705, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602,
					'\'', 491, '(', 654, '*', 640, '-', 636, '0', 943, ';', 555,
					'<', 609, '=', 952, '>', 617, '?', 761, '@', 942, '\\', 156,
					'_', 947, '`', 855, '|', 593, '[', 786, ']', 786, '{', 786,
					'}', 786,
			};
			for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
			{
				if (map[i] == lookahead)
				{
					state = map[i + 1];
					goto next_state;
				}
			}
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 528;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 807;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 873;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 529:
		if (eof)
		{
			state = 547;
			goto next_state;
		};
		{
			static const uint16_t map[] = {
				'\n', 710, '!', 669, '"', 788, '#', 816, '$', 780, '&', 602,
					'*', 637, '-', 632, '0', 945, ';', 555, '<', 612, '>', 618,
					'?', 760, '@', 941, '\\', 211, '_', 948, '|', 593,
			};
			for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
			{
				if (map[i] == lookahead)
				{
					state = map[i + 1];
					goto next_state;
				}
			}
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 529;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
		{
			state = 879;
			goto next_state;
		};
		return result;
		;
	case 530:
		if (eof)
		{
			state = 547;
			goto next_state;
		};
		{
			static const uint16_t map[] = {
				'\n', 712, '"', 788, '#', 862, '$', 781, '&', 602, '\'', 491,
					'(', 494, ')', 655, '-', 950, '0', 804, ';', 555, '<', 610,
					'>', 617, '\\', 326, '`', 855, '|', 593, '[', 786, ']', 786,
					'{', 786, '}', 786,
			};
			for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
			{
				if (map[i] == lookahead)
				{
					state = map[i + 1];
					goto next_state;
				}
			}
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 530;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 806;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('_' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 868;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 531:
		if (eof)
		{
			state = 547;
			goto next_state;
		};
		{
			static const uint16_t map[] = {
				'\n', 714, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602,
					'\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, ';', 555,
					'<', 609, '=', 952, '>', 617, '?', 761, '@', 942, '\\', 215,
					'_', 947, '`', 855, '|', 593, '[', 786, ']', 786, '{', 786,
					'}', 786,
			};
			for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
			{
				if (map[i] == lookahead)
				{
					state = map[i + 1];
					goto next_state;
				}
			}
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 531;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 807;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 873;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 532:
		if (eof)
		{
			state = 547;
			goto next_state;
		};
		{
			static const uint16_t map[] = {
				'\n', 716, '!', 669, '"', 788, '#', 816, '$', 780, '&', 602,
					'*', 637, '-', 632, '0', 945, ';', 555, '<', 613, '>', 618,
					'?', 760, '@', 941, '\\', 218, '_', 948, '|', 593,
			};
			for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
			{
				if (map[i] == lookahead)
				{
					state = map[i + 1];
					goto next_state;
				}
			}
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 532;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
		{
			state = 879;
			goto next_state;
		};
		return result;
		;
	case 533:
		if (eof)
		{
			state = 547;
			goto next_state;
		};
		{
			static const uint16_t map[] = {
				'\n', 724, '"', 788, '#', 862, '$', 781, '&', 602, '\'', 491,
					'(', 494, ')', 655, '-', 950, '0', 803, ';', 555, '<', 609,
					'>', 617, '\\', 331, '`', 855, '|', 593, '[', 786, ']', 786,
					'{', 786, '}', 786,
			};
			for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
			{
				if (map[i] == lookahead)
				{
					state = map[i + 1];
					goto next_state;
				}
			}
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 533;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 805;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 534:
		if (eof)
		{
			state = 547;
			goto next_state;
		};
		{
			static const uint16_t map[] = {
				'\n', 730, '"', 788, '#', 862, '$', 781, '&', 602, '\'', 491,
					'(', 494, ')', 655, '-', 950, '0', 803, ';', 555, '<', 610,
					'>', 617, '\\', 399, '`', 855, '|', 593, '[', 786, ']', 786,
					'{', 786, '}', 786,
			};
			for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
			{
				if (map[i] == lookahead)
				{
					state = map[i + 1];
					goto next_state;
				}
			}
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 534;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 805;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 535:
		if (eof)
		{
			state = 547;
			goto next_state;
		};
		{
			static const uint16_t map[] = {
				'\n', 732, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602,
					'\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, ';', 555,
					'<', 609, '>', 617, '?', 761, '@', 942, '\\', 166, '_', 947,
					'`', 855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786,
			};
			for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
			{
				if (map[i] == lookahead)
				{
					state = map[i + 1];
					goto next_state;
				}
			}
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 535;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 807;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 873;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 536:
		if (eof)
		{
			state = 547;
			goto next_state;
		};
		{
			static const uint16_t map[] = {
				'\n', 738, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602,
					'\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, ';', 555,
					'<', 610, '>', 617, '?', 761, '@', 942, '\\', 207, '_', 947,
					'`', 855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786,
			};
			for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
			{
				if (map[i] == lookahead)
				{
					state = map[i + 1];
					goto next_state;
				}
			}
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 536;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 807;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 873;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 537:
		if (eof)
		{
			state = 547;
			goto next_state;
		};
		{
			static const uint16_t map[] = {
				'\n', 739, '"', 788, '#', 862, '$', 781, '&', 602, '\'', 491,
					'(', 654, ')', 655, '-', 950, '0', 803, ';', 555, '<', 609,
					'=', 952, '>', 617, '\\', 339, '`', 856, '|', 593, '[', 786,
					']', 786, '{', 786, '}', 786,
			};
			for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
			{
				if (map[i] == lookahead)
				{
					state = map[i + 1];
					goto next_state;
				}
			}
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 537;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 805;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 538:
		if (eof)
		{
			state = 547;
			goto next_state;
		};
		{
			static const uint16_t map[] = {
				'\n', 751, '"', 788, '#', 862, '$', 781, '&', 602, '\'', 491,
					'(', 494, ')', 655, '-', 950, '0', 804, ';', 555, '<', 610,
					'>', 617, '\\', 349, '`', 856, '|', 593, '[', 786, ']', 786,
					'{', 786, '}', 786,
			};
			for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
			{
				if (map[i] == lookahead)
				{
					state = map[i + 1];
					goto next_state;
				}
			}
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 538;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 806;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('_' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 868;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 539:
		if (eof)
		{
			state = 547;
			goto next_state;
		};
		{
			static const uint16_t map[] = {
				'\n', 752, '"', 788, '#', 862, '$', 781, '&', 602, '\'', 491,
					'(', 494, ')', 655, '-', 950, '0', 803, ';', 555, '<', 609,
					'>', 617, '\\', 350, '`', 856, '|', 593, '[', 786, ']', 786,
					'{', 786, '}', 786,
			};
			for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
			{
				if (map[i] == lookahead)
				{
					state = map[i + 1];
					goto next_state;
				}
			}
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 539;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 805;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 540:
		if (eof)
		{
			state = 547;
			goto next_state;
		};
		{
			static const uint16_t map[] = {
				'\n', 754, '"', 788, '#', 862, '$', 781, '&', 602, '\'', 491,
					'(', 494, ')', 655, '-', 950, '0', 803, ';', 555, '<', 610,
					'>', 617, '\\', 354, '`', 856, '|', 593, '[', 786, ']', 786,
					'{', 786, '}', 786,
			};
			for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
			{
				if (map[i] == lookahead)
				{
					state = map[i + 1];
					goto next_state;
				}
			}
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 540;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 805;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 541:
		if (eof)
		{
			state = 547;
			goto next_state;
		};
		if (lookahead == '\r')
		{
			skip = true;
			state = 523;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 521;
			goto next_state;
		};
		return result;
		;
	case 542:
		if (eof)
		{
			state = 547;
			goto next_state;
		};
		if (lookahead == '\r')
		{
			skip = true;
			state = 524;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 519;
			goto next_state;
		};
		return result;
		;
	case 543:
		if (eof)
		{
			state = 547;
			goto next_state;
		};
		if (lookahead == '\r')
		{
			skip = true;
			state = 525;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 522;
			goto next_state;
		};
		return result;
		;
	case 544:
		if (eof)
		{
			state = 547;
			goto next_state;
		};
		if (lookahead == '\r')
		{
			skip = true;
			state = 526;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 520;
			goto next_state;
		};
		return result;
		;
	case 545:
		if (eof)
		{
			state = 547;
			goto next_state;
		};
		{
			static const uint16_t map[] = {
				'!', 670, '"', 788, '#', 816, '$', 781, '%', 647, '&', 601,
					'\'', 491, '(', 654, ')', 655, '*', 638, '+', 770, ',', 557,
					'-', 768, '/', 642, '0', 944, ':', 765, ';', 554, '<', 607,
					'=', 563, '>', 616, '?', 761, '@', 942, '[', 674, '\\', 301,
					']', 675, '^', 595, '_', 946, '`', 856, 'e', 956, 'i', 955,
					'{', 666, '|', 592, '}', 818, '~', 772,
			};
			for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
			{
				if (map[i] == lookahead)
				{
					state = map[i + 1];
					goto next_state;
				}
			}
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 545;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 546:
		if (eof)
		{
			state = 547;
			goto next_state;
		};
		{
			static const uint16_t map[] = {
				'!', 672, '"', 788, '#', 862, '$', 781, '&', 508, '\'', 491,
					'(', 654, ')', 655, '-', 950, '0', 803, ';', 490, '<', 608,
					'>', 617, '[', 674, '\\', 304, '`', 855, '{', 666, '|', 590,
					']', 786, '}', 786,
			};
			for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
			{
				if (map[i] == lookahead)
				{
					state = map[i + 1];
					goto next_state;
				}
			}
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 546;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 805;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 547:
		result = true;
		lexer->result_symbol = 0;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 548:
		result = true;
		lexer->result_symbol = anon_sym_in;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 549:
		result = true;
		lexer->result_symbol = anon_sym_in;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\\')
		{
			state = 518;
			goto next_state;
		};
		if ((!eof && set_contains(sym__comment_word_character_set_1, 12,
					lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 550:
		result = true;
		lexer->result_symbol = anon_sym_in;
		lexer->mark_end(lexer);
		;
		if (('0' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || lookahead == '_' || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 879;
			goto next_state;
		};
		return result;
		;
	case 551:
		result = true;
		lexer->result_symbol = anon_sym_LPAREN_LPAREN;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 552:
		result = true;
		lexer->result_symbol = anon_sym_RPAREN_RPAREN;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 553:
		result = true;
		lexer->result_symbol = anon_sym_SEMI;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 554:
		result = true;
		lexer->result_symbol = anon_sym_SEMI;
		lexer->mark_end(lexer);
		;
		if (lookahead == '&')
		{
			state = 664;
			goto next_state;
		};
		if (lookahead == ';')
		{
			state = 663;
			goto next_state;
		};
		return result;
		;
	case 555:
		result = true;
		lexer->result_symbol = anon_sym_SEMI;
		lexer->mark_end(lexer);
		;
		if (lookahead == ';')
		{
			state = 662;
			goto next_state;
		};
		return result;
		;
	case 556:
		result = true;
		lexer->result_symbol = anon_sym_COMMA;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 557:
		result = true;
		lexer->result_symbol = anon_sym_COMMA;
		lexer->mark_end(lexer);
		;
		if (lookahead == ',')
		{
			state = 850;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 518;
			goto next_state;
		};
		if ((!eof && set_contains(sym__comment_word_character_set_1, 12,
					lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 558:
		result = true;
		lexer->result_symbol = anon_sym_COMMA;
		lexer->mark_end(lexer);
		;
		if (lookahead == ',')
		{
			state = 849;
			goto next_state;
		};
		return result;
		;
	case 559:
		result = true;
		lexer->result_symbol = anon_sym_EQ;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 560:
		result = true;
		lexer->result_symbol = anon_sym_EQ;
		lexer->mark_end(lexer);
		;
		if (lookahead == '=')
		{
			state = 604;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 518;
			goto next_state;
		};
		if (lookahead == '~')
		{
			state = 679;
			goto next_state;
		};
		if ((!eof && set_contains(sym__comment_word_character_set_1, 12,
					lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 561:
		result = true;
		lexer->result_symbol = anon_sym_EQ;
		lexer->mark_end(lexer);
		;
		if (lookahead == '=')
		{
			state = 603;
			goto next_state;
		};
		return result;
		;
	case 562:
		result = true;
		lexer->result_symbol = anon_sym_EQ;
		lexer->mark_end(lexer);
		;
		if (lookahead == '=')
		{
			state = 603;
			goto next_state;
		};
		if (lookahead == '~')
		{
			state = 678;
			goto next_state;
		};
		return result;
		;
	case 563:
		result = true;
		lexer->result_symbol = anon_sym_EQ;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\\')
		{
			state = 518;
			goto next_state;
		};
		if ((!eof && set_contains(sym__comment_word_character_set_1, 12,
					lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 564:
		result = true;
		lexer->result_symbol = anon_sym_PLUS_PLUS;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 565:
		result = true;
		lexer->result_symbol = anon_sym_PLUS_PLUS;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\\')
		{
			state = 518;
			goto next_state;
		};
		if ((!eof && set_contains(sym__comment_word_character_set_1, 12,
					lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 566:
		result = true;
		lexer->result_symbol = anon_sym_DASH_DASH;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 567:
		result = true;
		lexer->result_symbol = anon_sym_DASH_DASH;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\\')
		{
			state = 518;
			goto next_state;
		};
		if ((!eof && set_contains(sym__comment_word_character_set_1, 12,
					lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 568:
		result = true;
		lexer->result_symbol = anon_sym_PLUS_EQ;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 569:
		result = true;
		lexer->result_symbol = anon_sym_PLUS_EQ;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\\')
		{
			state = 518;
			goto next_state;
		};
		if ((!eof && set_contains(sym__comment_word_character_set_1, 12,
					lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 570:
		result = true;
		lexer->result_symbol = anon_sym_DASH_EQ;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 571:
		result = true;
		lexer->result_symbol = anon_sym_DASH_EQ;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\\')
		{
			state = 518;
			goto next_state;
		};
		if ((!eof && set_contains(sym__comment_word_character_set_1, 12,
					lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 572:
		result = true;
		lexer->result_symbol = anon_sym_STAR_EQ;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 573:
		result = true;
		lexer->result_symbol = anon_sym_STAR_EQ;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\\')
		{
			state = 518;
			goto next_state;
		};
		if ((!eof && set_contains(sym__comment_word_character_set_1, 12,
					lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 574:
		result = true;
		lexer->result_symbol = anon_sym_SLASH_EQ;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 575:
		result = true;
		lexer->result_symbol = anon_sym_SLASH_EQ;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\\')
		{
			state = 518;
			goto next_state;
		};
		if ((!eof && set_contains(sym__comment_word_character_set_1, 12,
					lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 576:
		result = true;
		lexer->result_symbol = anon_sym_PERCENT_EQ;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 577:
		result = true;
		lexer->result_symbol = anon_sym_PERCENT_EQ;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\\')
		{
			state = 518;
			goto next_state;
		};
		if ((!eof && set_contains(sym__comment_word_character_set_1, 12,
					lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 578:
		result = true;
		lexer->result_symbol = anon_sym_STAR_STAR_EQ;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 579:
		result = true;
		lexer->result_symbol = anon_sym_STAR_STAR_EQ;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\\')
		{
			state = 518;
			goto next_state;
		};
		if ((!eof && set_contains(sym__comment_word_character_set_1, 12,
					lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 580:
		result = true;
		lexer->result_symbol = anon_sym_LT_LT_EQ;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 581:
		result = true;
		lexer->result_symbol = anon_sym_GT_GT_EQ;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 582:
		result = true;
		lexer->result_symbol = anon_sym_AMP_EQ;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 583:
		result = true;
		lexer->result_symbol = anon_sym_CARET_EQ;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 584:
		result = true;
		lexer->result_symbol = anon_sym_CARET_EQ;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\\')
		{
			state = 518;
			goto next_state;
		};
		if ((!eof && set_contains(sym__comment_word_character_set_1, 12,
					lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 585:
		result = true;
		lexer->result_symbol = anon_sym_PIPE_EQ;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 586:
		result = true;
		lexer->result_symbol = anon_sym_PIPE_PIPE;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 587:
		result = true;
		lexer->result_symbol = anon_sym_DASHo;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 588:
		result = true;
		lexer->result_symbol = anon_sym_AMP_AMP;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 589:
		result = true;
		lexer->result_symbol = anon_sym_DASHa;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 590:
		result = true;
		lexer->result_symbol = anon_sym_PIPE;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 591:
		result = true;
		lexer->result_symbol = anon_sym_PIPE;
		lexer->mark_end(lexer);
		;
		if (lookahead == '&')
		{
			state = 668;
			goto next_state;
		};
		return result;
		;
	case 592:
		result = true;
		lexer->result_symbol = anon_sym_PIPE;
		lexer->mark_end(lexer);
		;
		if (lookahead == '&')
		{
			state = 668;
			goto next_state;
		};
		if (lookahead == '=')
		{
			state = 585;
			goto next_state;
		};
		if (lookahead == '|')
		{
			state = 586;
			goto next_state;
		};
		return result;
		;
	case 593:
		result = true;
		lexer->result_symbol = anon_sym_PIPE;
		lexer->mark_end(lexer);
		;
		if (lookahead == '&')
		{
			state = 668;
			goto next_state;
		};
		if (lookahead == '|')
		{
			state = 586;
			goto next_state;
		};
		return result;
		;
	case 594:
		result = true;
		lexer->result_symbol = anon_sym_PIPE;
		lexer->mark_end(lexer);
		;
		if (lookahead == '=')
		{
			state = 585;
			goto next_state;
		};
		if (lookahead == '|')
		{
			state = 586;
			goto next_state;
		};
		return result;
		;
	case 595:
		result = true;
		lexer->result_symbol = anon_sym_CARET;
		lexer->mark_end(lexer);
		;
		if (lookahead == '=')
		{
			state = 584;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 518;
			goto next_state;
		};
		if (lookahead == '^')
		{
			state = 852;
			goto next_state;
		};
		if ((!eof && set_contains(sym__comment_word_character_set_1, 12,
					lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 596:
		result = true;
		lexer->result_symbol = anon_sym_CARET;
		lexer->mark_end(lexer);
		;
		if (lookahead == '=')
		{
			state = 584;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 518;
			goto next_state;
		};
		if ((!eof && set_contains(sym__comment_word_character_set_1, 12,
					lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 597:
		result = true;
		lexer->result_symbol = anon_sym_CARET;
		lexer->mark_end(lexer);
		;
		if (lookahead == '=')
		{
			state = 583;
			goto next_state;
		};
		return result;
		;
	case 598:
		result = true;
		lexer->result_symbol = anon_sym_CARET;
		lexer->mark_end(lexer);
		;
		if (lookahead == '^')
		{
			state = 851;
			goto next_state;
		};
		return result;
		;
	case 599:
		result = true;
		lexer->result_symbol = anon_sym_AMP;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 600:
		result = true;
		lexer->result_symbol = anon_sym_AMP;
		lexer->mark_end(lexer);
		;
		if (lookahead == '&')
		{
			state = 588;
			goto next_state;
		};
		if (lookahead == '=')
		{
			state = 582;
			goto next_state;
		};
		return result;
		;
	case 601:
		result = true;
		lexer->result_symbol = anon_sym_AMP;
		lexer->mark_end(lexer);
		;
		if (lookahead == '&')
		{
			state = 588;
			goto next_state;
		};
		if (lookahead == '=')
		{
			state = 582;
			goto next_state;
		};
		if (lookahead == '>')
		{
			state = 680;
			goto next_state;
		};
		return result;
		;
	case 602:
		result = true;
		lexer->result_symbol = anon_sym_AMP;
		lexer->mark_end(lexer);
		;
		if (lookahead == '&')
		{
			state = 588;
			goto next_state;
		};
		if (lookahead == '>')
		{
			state = 680;
			goto next_state;
		};
		return result;
		;
	case 603:
		result = true;
		lexer->result_symbol = anon_sym_EQ_EQ;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 604:
		result = true;
		lexer->result_symbol = anon_sym_EQ_EQ;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\\')
		{
			state = 518;
			goto next_state;
		};
		if ((!eof && set_contains(sym__comment_word_character_set_1, 12,
					lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 605:
		result = true;
		lexer->result_symbol = anon_sym_BANG_EQ;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 606:
		result = true;
		lexer->result_symbol = anon_sym_BANG_EQ;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\\')
		{
			state = 518;
			goto next_state;
		};
		if ((!eof && set_contains(sym__comment_word_character_set_1, 12,
					lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 607:
		result = true;
		lexer->result_symbol = anon_sym_LT;
		lexer->mark_end(lexer);
		;
		if (lookahead == '&')
		{
			state = 682;
			goto next_state;
		};
		if (lookahead == '(')
		{
			state = 858;
			goto next_state;
		};
		if (lookahead == '<')
		{
			state = 625;
			goto next_state;
		};
		if (lookahead == '=')
		{
			state = 621;
			goto next_state;
		};
		return result;
		;
	case 608:
		result = true;
		lexer->result_symbol = anon_sym_LT;
		lexer->mark_end(lexer);
		;
		if (lookahead == '&')
		{
			state = 682;
			goto next_state;
		};
		if (lookahead == '(')
		{
			state = 858;
			goto next_state;
		};
		if (lookahead == '<')
		{
			state = 505;
			goto next_state;
		};
		return result;
		;
	case 609:
		result = true;
		lexer->result_symbol = anon_sym_LT;
		lexer->mark_end(lexer);
		;
		if (lookahead == '&')
		{
			state = 682;
			goto next_state;
		};
		if (lookahead == '(')
		{
			state = 858;
			goto next_state;
		};
		if (lookahead == '<')
		{
			state = 624;
			goto next_state;
		};
		return result;
		;
	case 610:
		result = true;
		lexer->result_symbol = anon_sym_LT;
		lexer->mark_end(lexer);
		;
		if (lookahead == '&')
		{
			state = 682;
			goto next_state;
		};
		if (lookahead == '(')
		{
			state = 858;
			goto next_state;
		};
		if (lookahead == '<')
		{
			state = 623;
			goto next_state;
		};
		return result;
		;
	case 611:
		result = true;
		lexer->result_symbol = anon_sym_LT;
		lexer->mark_end(lexer);
		;
		if (lookahead == '&')
		{
			state = 682;
			goto next_state;
		};
		if (lookahead == '<')
		{
			state = 505;
			goto next_state;
		};
		return result;
		;
	case 612:
		result = true;
		lexer->result_symbol = anon_sym_LT;
		lexer->mark_end(lexer);
		;
		if (lookahead == '&')
		{
			state = 682;
			goto next_state;
		};
		if (lookahead == '<')
		{
			state = 624;
			goto next_state;
		};
		return result;
		;
	case 613:
		result = true;
		lexer->result_symbol = anon_sym_LT;
		lexer->mark_end(lexer);
		;
		if (lookahead == '&')
		{
			state = 682;
			goto next_state;
		};
		if (lookahead == '<')
		{
			state = 623;
			goto next_state;
		};
		return result;
		;
	case 614:
		result = true;
		lexer->result_symbol = anon_sym_LT;
		lexer->mark_end(lexer);
		;
		if (lookahead == '(')
		{
			state = 858;
			goto next_state;
		};
		if (lookahead == '<')
		{
			state = 626;
			goto next_state;
		};
		if (lookahead == '=')
		{
			state = 621;
			goto next_state;
		};
		return result;
		;
	case 615:
		result = true;
		lexer->result_symbol = anon_sym_LT;
		lexer->mark_end(lexer);
		;
		if (lookahead == '<')
		{
			state = 626;
			goto next_state;
		};
		if (lookahead == '=')
		{
			state = 621;
			goto next_state;
		};
		return result;
		;
	case 616:
		result = true;
		lexer->result_symbol = anon_sym_GT;
		lexer->mark_end(lexer);
		;
		if (lookahead == '&')
		{
			state = 683;
			goto next_state;
		};
		if (lookahead == '(')
		{
			state = 859;
			goto next_state;
		};
		if (lookahead == '=')
		{
			state = 622;
			goto next_state;
		};
		if (lookahead == '>')
		{
			state = 628;
			goto next_state;
		};
		if (lookahead == '|')
		{
			state = 684;
			goto next_state;
		};
		return result;
		;
	case 617:
		result = true;
		lexer->result_symbol = anon_sym_GT;
		lexer->mark_end(lexer);
		;
		if (lookahead == '&')
		{
			state = 683;
			goto next_state;
		};
		if (lookahead == '(')
		{
			state = 859;
			goto next_state;
		};
		if (lookahead == '>')
		{
			state = 627;
			goto next_state;
		};
		if (lookahead == '|')
		{
			state = 684;
			goto next_state;
		};
		return result;
		;
	case 618:
		result = true;
		lexer->result_symbol = anon_sym_GT;
		lexer->mark_end(lexer);
		;
		if (lookahead == '&')
		{
			state = 683;
			goto next_state;
		};
		if (lookahead == '>')
		{
			state = 627;
			goto next_state;
		};
		if (lookahead == '|')
		{
			state = 684;
			goto next_state;
		};
		return result;
		;
	case 619:
		result = true;
		lexer->result_symbol = anon_sym_GT;
		lexer->mark_end(lexer);
		;
		if (lookahead == '(')
		{
			state = 859;
			goto next_state;
		};
		if (lookahead == '=')
		{
			state = 622;
			goto next_state;
		};
		if (lookahead == '>')
		{
			state = 628;
			goto next_state;
		};
		return result;
		;
	case 620:
		result = true;
		lexer->result_symbol = anon_sym_GT;
		lexer->mark_end(lexer);
		;
		if (lookahead == '=')
		{
			state = 622;
			goto next_state;
		};
		if (lookahead == '>')
		{
			state = 628;
			goto next_state;
		};
		return result;
		;
	case 621:
		result = true;
		lexer->result_symbol = anon_sym_LT_EQ;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 622:
		result = true;
		lexer->result_symbol = anon_sym_GT_EQ;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 623:
		result = true;
		lexer->result_symbol = anon_sym_LT_LT;
		lexer->mark_end(lexer);
		;
		if (lookahead == '-')
		{
			state = 687;
			goto next_state;
		};
		return result;
		;
	case 624:
		result = true;
		lexer->result_symbol = anon_sym_LT_LT;
		lexer->mark_end(lexer);
		;
		if (lookahead == '-')
		{
			state = 687;
			goto next_state;
		};
		if (lookahead == '<')
		{
			state = 759;
			goto next_state;
		};
		return result;
		;
	case 625:
		result = true;
		lexer->result_symbol = anon_sym_LT_LT;
		lexer->mark_end(lexer);
		;
		if (lookahead == '-')
		{
			state = 687;
			goto next_state;
		};
		if (lookahead == '<')
		{
			state = 759;
			goto next_state;
		};
		if (lookahead == '=')
		{
			state = 580;
			goto next_state;
		};
		return result;
		;
	case 626:
		result = true;
		lexer->result_symbol = anon_sym_LT_LT;
		lexer->mark_end(lexer);
		;
		if (lookahead == '=')
		{
			state = 580;
			goto next_state;
		};
		return result;
		;
	case 627:
		result = true;
		lexer->result_symbol = anon_sym_GT_GT;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 628:
		result = true;
		lexer->result_symbol = anon_sym_GT_GT;
		lexer->mark_end(lexer);
		;
		if (lookahead == '=')
		{
			state = 581;
			goto next_state;
		};
		return result;
		;
	case 629:
		result = true;
		lexer->result_symbol = anon_sym_PLUS;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 630:
		result = true;
		lexer->result_symbol = anon_sym_PLUS;
		lexer->mark_end(lexer);
		;
		if (lookahead == '+')
		{
			state = 565;
			goto next_state;
		};
		if (lookahead == '=')
		{
			state = 569;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 518;
			goto next_state;
		};
		if ((!eof && set_contains(sym__comment_word_character_set_1, 12,
					lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 631:
		result = true;
		lexer->result_symbol = anon_sym_PLUS;
		lexer->mark_end(lexer);
		;
		if (lookahead == '+')
		{
			state = 564;
			goto next_state;
		};
		if (lookahead == '=')
		{
			state = 568;
			goto next_state;
		};
		return result;
		;
	case 632:
		result = true;
		lexer->result_symbol = anon_sym_DASH;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 633:
		result = true;
		lexer->result_symbol = anon_sym_DASH;
		lexer->mark_end(lexer);
		;
		if (lookahead == '-')
		{
			state = 567;
			goto next_state;
		};
		if (lookahead == '0')
		{
			state = 803;
			goto next_state;
		};
		if (lookahead == '=')
		{
			state = 571;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 518;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 805;
			goto next_state;
		};
		if ((!eof && set_contains(sym__comment_word_character_set_1, 12,
					lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 634:
		result = true;
		lexer->result_symbol = anon_sym_DASH;
		lexer->mark_end(lexer);
		;
		if (lookahead == '-')
		{
			state = 566;
			goto next_state;
		};
		if (lookahead == '=')
		{
			state = 570;
			goto next_state;
		};
		return result;
		;
	case 635:
		result = true;
		lexer->result_symbol = anon_sym_DASH;
		lexer->mark_end(lexer);
		;
		if (lookahead == '-')
		{
			state = 566;
			goto next_state;
		};
		if (lookahead == '=')
		{
			state = 570;
			goto next_state;
		};
		if (lookahead == 'a')
		{
			state = 589;
			goto next_state;
		};
		if (lookahead == 'o')
		{
			state = 587;
			goto next_state;
		};
		return result;
		;
	case 636:
		result = true;
		lexer->result_symbol = anon_sym_DASH;
		lexer->mark_end(lexer);
		;
		if (lookahead == '0')
		{
			state = 803;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 518;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 805;
			goto next_state;
		};
		if ((!eof && set_contains(sym__comment_word_character_set_1, 12,
					lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 637:
		result = true;
		lexer->result_symbol = anon_sym_STAR;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 638:
		result = true;
		lexer->result_symbol = anon_sym_STAR;
		lexer->mark_end(lexer);
		;
		if (lookahead == '*')
		{
			state = 651;
			goto next_state;
		};
		if (lookahead == '=')
		{
			state = 573;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 518;
			goto next_state;
		};
		if ((!eof && set_contains(sym__comment_word_character_set_1, 12,
					lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 639:
		result = true;
		lexer->result_symbol = anon_sym_STAR;
		lexer->mark_end(lexer);
		;
		if (lookahead == '*')
		{
			state = 652;
			goto next_state;
		};
		if (lookahead == '=')
		{
			state = 572;
			goto next_state;
		};
		return result;
		;
	case 640:
		result = true;
		lexer->result_symbol = anon_sym_STAR;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\\')
		{
			state = 518;
			goto next_state;
		};
		if ((!eof && set_contains(sym__comment_word_character_set_1, 12,
					lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 641:
		result = true;
		lexer->result_symbol = anon_sym_SLASH;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 642:
		result = true;
		lexer->result_symbol = anon_sym_SLASH;
		lexer->mark_end(lexer);
		;
		if (lookahead == '#')
		{
			state = 846;
			goto next_state;
		};
		if (lookahead == '%')
		{
			state = 848;
			goto next_state;
		};
		if (lookahead == '/')
		{
			state = 844;
			goto next_state;
		};
		if (lookahead == '=')
		{
			state = 575;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 518;
			goto next_state;
		};
		if ((!eof && set_contains(sym_word_character_set_1, 11, lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 643:
		result = true;
		lexer->result_symbol = anon_sym_SLASH;
		lexer->mark_end(lexer);
		;
		if (lookahead == '#')
		{
			state = 845;
			goto next_state;
		};
		if (lookahead == '%')
		{
			state = 847;
			goto next_state;
		};
		if (lookahead == '/')
		{
			state = 843;
			goto next_state;
		};
		return result;
		;
	case 644:
		result = true;
		lexer->result_symbol = anon_sym_SLASH;
		lexer->mark_end(lexer);
		;
		if (lookahead == '=')
		{
			state = 575;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 518;
			goto next_state;
		};
		if ((!eof && set_contains(sym__comment_word_character_set_1, 12,
					lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 645:
		result = true;
		lexer->result_symbol = anon_sym_SLASH;
		lexer->mark_end(lexer);
		;
		if (lookahead == '=')
		{
			state = 574;
			goto next_state;
		};
		return result;
		;
	case 646:
		result = true;
		lexer->result_symbol = anon_sym_PERCENT;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 647:
		result = true;
		lexer->result_symbol = anon_sym_PERCENT;
		lexer->mark_end(lexer);
		;
		if (lookahead == '%')
		{
			state = 841;
			goto next_state;
		};
		if (lookahead == '=')
		{
			state = 577;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 518;
			goto next_state;
		};
		if ((!eof && set_contains(sym__comment_word_character_set_1, 12,
					lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 648:
		result = true;
		lexer->result_symbol = anon_sym_PERCENT;
		lexer->mark_end(lexer);
		;
		if (lookahead == '%')
		{
			state = 840;
			goto next_state;
		};
		return result;
		;
	case 649:
		result = true;
		lexer->result_symbol = anon_sym_PERCENT;
		lexer->mark_end(lexer);
		;
		if (lookahead == '=')
		{
			state = 577;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 518;
			goto next_state;
		};
		if ((!eof && set_contains(sym__comment_word_character_set_1, 12,
					lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 650:
		result = true;
		lexer->result_symbol = anon_sym_PERCENT;
		lexer->mark_end(lexer);
		;
		if (lookahead == '=')
		{
			state = 576;
			goto next_state;
		};
		return result;
		;
	case 651:
		result = true;
		lexer->result_symbol = anon_sym_STAR_STAR;
		lexer->mark_end(lexer);
		;
		if (lookahead == '=')
		{
			state = 579;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 518;
			goto next_state;
		};
		if ((!eof && set_contains(sym__comment_word_character_set_1, 12,
					lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 652:
		result = true;
		lexer->result_symbol = anon_sym_STAR_STAR;
		lexer->mark_end(lexer);
		;
		if (lookahead == '=')
		{
			state = 578;
			goto next_state;
		};
		return result;
		;
	case 653:
		result = true;
		lexer->result_symbol = anon_sym_LPAREN;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 654:
		result = true;
		lexer->result_symbol = anon_sym_LPAREN;
		lexer->mark_end(lexer);
		;
		if (lookahead == '(')
		{
			state = 551;
			goto next_state;
		};
		return result;
		;
	case 655:
		result = true;
		lexer->result_symbol = anon_sym_RPAREN;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 656:
		result = true;
		lexer->result_symbol = aux_sym__c_word_token1;
		lexer->mark_end(lexer);
		;
		if (('0' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || lookahead == '_' || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 656;
			goto next_state;
		};
		return result;
		;
	case 657:
		result = true;
		lexer->result_symbol = anon_sym_esac;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 658:
		result = true;
		lexer->result_symbol = anon_sym_esac;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\\')
		{
			state = 518;
			goto next_state;
		};
		if (('0' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || lookahead == '_' || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 868;
			goto next_state;
		};
		if ((!eof && set_contains(sym__comment_word_character_set_1, 12,
					lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 659:
		result = true;
		lexer->result_symbol = anon_sym_esac;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\\')
		{
			state = 518;
			goto next_state;
		};
		if ((!eof && set_contains(sym__comment_word_character_set_1, 12,
					lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 660:
		result = true;
		lexer->result_symbol = anon_sym_esac;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\\')
		{
			state = 17;
			goto next_state;
		};
		if (('0' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || lookahead == '_' || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 873;
			goto next_state;
		};
		if ((!eof && set_contains(sym__comment_word_character_set_1, 12,
					lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 661:
		result = true;
		lexer->result_symbol = anon_sym_esac;
		lexer->mark_end(lexer);
		;
		if (('0' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || lookahead == '_' || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 879;
			goto next_state;
		};
		return result;
		;
	case 662:
		result = true;
		lexer->result_symbol = anon_sym_SEMI_SEMI;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 663:
		result = true;
		lexer->result_symbol = anon_sym_SEMI_SEMI;
		lexer->mark_end(lexer);
		;
		if (lookahead == '&')
		{
			state = 665;
			goto next_state;
		};
		return result;
		;
	case 664:
		result = true;
		lexer->result_symbol = anon_sym_SEMI_AMP;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 665:
		result = true;
		lexer->result_symbol = anon_sym_SEMI_SEMI_AMP;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 666:
		result = true;
		lexer->result_symbol = anon_sym_LBRACE;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 667:
		result = true;
		lexer->result_symbol = anon_sym_RBRACE;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 668:
		result = true;
		lexer->result_symbol = anon_sym_PIPE_AMP;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 669:
		result = true;
		lexer->result_symbol = anon_sym_BANG;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 670:
		result = true;
		lexer->result_symbol = anon_sym_BANG;
		lexer->mark_end(lexer);
		;
		if (lookahead == '=')
		{
			state = 606;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 518;
			goto next_state;
		};
		if ((!eof && set_contains(sym__comment_word_character_set_1, 12,
					lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 671:
		result = true;
		lexer->result_symbol = anon_sym_BANG;
		lexer->mark_end(lexer);
		;
		if (lookahead == '=')
		{
			state = 605;
			goto next_state;
		};
		return result;
		;
	case 672:
		result = true;
		lexer->result_symbol = anon_sym_BANG;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\\')
		{
			state = 518;
			goto next_state;
		};
		if ((!eof && set_contains(sym__comment_word_character_set_1, 12,
					lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 673:
		result = true;
		lexer->result_symbol = anon_sym_LBRACK;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 674:
		result = true;
		lexer->result_symbol = anon_sym_LBRACK;
		lexer->mark_end(lexer);
		;
		if (lookahead == '[')
		{
			state = 676;
			goto next_state;
		};
		return result;
		;
	case 675:
		result = true;
		lexer->result_symbol = anon_sym_RBRACK;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 676:
		result = true;
		lexer->result_symbol = anon_sym_LBRACK_LBRACK;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 677:
		result = true;
		lexer->result_symbol = anon_sym_RBRACK_RBRACK;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 678:
		result = true;
		lexer->result_symbol = anon_sym_EQ_TILDE;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 679:
		result = true;
		lexer->result_symbol = anon_sym_EQ_TILDE;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\\')
		{
			state = 518;
			goto next_state;
		};
		if ((!eof && set_contains(sym__comment_word_character_set_1, 12,
					lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 680:
		result = true;
		lexer->result_symbol = anon_sym_AMP_GT;
		lexer->mark_end(lexer);
		;
		if (lookahead == '>')
		{
			state = 681;
			goto next_state;
		};
		return result;
		;
	case 681:
		result = true;
		lexer->result_symbol = anon_sym_AMP_GT_GT;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 682:
		result = true;
		lexer->result_symbol = anon_sym_LT_AMP;
		lexer->mark_end(lexer);
		;
		if (lookahead == '-')
		{
			state = 685;
			goto next_state;
		};
		return result;
		;
	case 683:
		result = true;
		lexer->result_symbol = anon_sym_GT_AMP;
		lexer->mark_end(lexer);
		;
		if (lookahead == '-')
		{
			state = 686;
			goto next_state;
		};
		return result;
		;
	case 684:
		result = true;
		lexer->result_symbol = anon_sym_GT_PIPE;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 685:
		result = true;
		lexer->result_symbol = anon_sym_LT_AMP_DASH;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 686:
		result = true;
		lexer->result_symbol = anon_sym_GT_AMP_DASH;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 687:
		result = true;
		lexer->result_symbol = anon_sym_LT_LT_DASH;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 688:
		result = true;
		lexer->result_symbol = aux_sym_heredoc_redirect_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\n')
		{
			state = 688;
			goto next_state;
		};
		if (lookahead == '+')
		{
			state = 771;
			goto next_state;
		};
		if (lookahead == '-')
		{
			state = 769;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 307;
			goto next_state;
		};
		if (lookahead == '~')
		{
			state = 772;
			goto next_state;
		};
		return result;
		;
	case 689:
		result = true;
		lexer->result_symbol = aux_sym_heredoc_redirect_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\n')
		{
			state = 689;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 14;
			goto next_state;
		};
		return result;
		;
	case 690:
		result = true;
		lexer->result_symbol = aux_sym_heredoc_redirect_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\n')
		{
			state = 690;
			goto next_state;
		};
		return result;
		;
	case 691:
		result = true;
		lexer->result_symbol = aux_sym_heredoc_redirect_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\n')
		{
			state = 691;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 316;
			goto next_state;
		};
		return result;
		;
	case 692:
		result = true;
		lexer->result_symbol = aux_sym_heredoc_redirect_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\n')
		{
			state = 692;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 81;
			goto next_state;
		};
		return result;
		;
	case 693:
		result = true;
		lexer->result_symbol = aux_sym_heredoc_redirect_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\n')
		{
			state = 693;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 27;
			goto next_state;
		};
		return result;
		;
	case 694:
		result = true;
		lexer->result_symbol = aux_sym_heredoc_redirect_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\n')
		{
			state = 694;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 317;
			goto next_state;
		};
		return result;
		;
	case 695:
		result = true;
		lexer->result_symbol = aux_sym_heredoc_redirect_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\n')
		{
			state = 695;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 91;
			goto next_state;
		};
		return result;
		;
	case 696:
		result = true;
		lexer->result_symbol = aux_sym_heredoc_redirect_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\n')
		{
			state = 696;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 30;
			goto next_state;
		};
		return result;
		;
	case 697:
		result = true;
		lexer->result_symbol = aux_sym_heredoc_redirect_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\n')
		{
			state = 697;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 321;
			goto next_state;
		};
		return result;
		;
	case 698:
		result = true;
		lexer->result_symbol = aux_sym_heredoc_redirect_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\n')
		{
			state = 698;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 183;
			goto next_state;
		};
		return result;
		;
	case 699:
		result = true;
		lexer->result_symbol = aux_sym_heredoc_redirect_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\n')
		{
			state = 699;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 153;
			goto next_state;
		};
		return result;
		;
	case 700:
		result = true;
		lexer->result_symbol = aux_sym_heredoc_redirect_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\n')
		{
			state = 700;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 322;
			goto next_state;
		};
		return result;
		;
	case 701:
		result = true;
		lexer->result_symbol = aux_sym_heredoc_redirect_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\n')
		{
			state = 701;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 185;
			goto next_state;
		};
		return result;
		;
	case 702:
		result = true;
		lexer->result_symbol = aux_sym_heredoc_redirect_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\n')
		{
			state = 702;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 32;
			goto next_state;
		};
		return result;
		;
	case 703:
		result = true;
		lexer->result_symbol = aux_sym_heredoc_redirect_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\n')
		{
			state = 703;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 323;
			goto next_state;
		};
		return result;
		;
	case 704:
		result = true;
		lexer->result_symbol = aux_sym_heredoc_redirect_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\n')
		{
			state = 704;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 96;
			goto next_state;
		};
		return result;
		;
	case 705:
		result = true;
		lexer->result_symbol = aux_sym_heredoc_redirect_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\n')
		{
			state = 705;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 156;
			goto next_state;
		};
		return result;
		;
	case 706:
		result = true;
		lexer->result_symbol = aux_sym_heredoc_redirect_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\n')
		{
			state = 706;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 324;
			goto next_state;
		};
		return result;
		;
	case 707:
		result = true;
		lexer->result_symbol = aux_sym_heredoc_redirect_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\n')
		{
			state = 707;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 98;
			goto next_state;
		};
		return result;
		;
	case 708:
		result = true;
		lexer->result_symbol = aux_sym_heredoc_redirect_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\n')
		{
			state = 708;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 202;
			goto next_state;
		};
		return result;
		;
	case 709:
		result = true;
		lexer->result_symbol = aux_sym_heredoc_redirect_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\n')
		{
			state = 709;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 325;
			goto next_state;
		};
		return result;
		;
	case 710:
		result = true;
		lexer->result_symbol = aux_sym_heredoc_redirect_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\n')
		{
			state = 710;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 211;
			goto next_state;
		};
		return result;
		;
	case 711:
		result = true;
		lexer->result_symbol = aux_sym_heredoc_redirect_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\n')
		{
			state = 711;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 158;
			goto next_state;
		};
		return result;
		;
	case 712:
		result = true;
		lexer->result_symbol = aux_sym_heredoc_redirect_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\n')
		{
			state = 712;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 326;
			goto next_state;
		};
		return result;
		;
	case 713:
		result = true;
		lexer->result_symbol = aux_sym_heredoc_redirect_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\n')
		{
			state = 713;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 188;
			goto next_state;
		};
		return result;
		;
	case 714:
		result = true;
		lexer->result_symbol = aux_sym_heredoc_redirect_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\n')
		{
			state = 714;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 215;
			goto next_state;
		};
		return result;
		;
	case 715:
		result = true;
		lexer->result_symbol = aux_sym_heredoc_redirect_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\n')
		{
			state = 715;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 327;
			goto next_state;
		};
		return result;
		;
	case 716:
		result = true;
		lexer->result_symbol = aux_sym_heredoc_redirect_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\n')
		{
			state = 716;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 218;
			goto next_state;
		};
		return result;
		;
	case 717:
		result = true;
		lexer->result_symbol = aux_sym_heredoc_redirect_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\n')
		{
			state = 717;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 37;
			goto next_state;
		};
		return result;
		;
	case 718:
		result = true;
		lexer->result_symbol = aux_sym_heredoc_redirect_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\n')
		{
			state = 718;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 328;
			goto next_state;
		};
		return result;
		;
	case 719:
		result = true;
		lexer->result_symbol = aux_sym_heredoc_redirect_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\n')
		{
			state = 719;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 190;
			goto next_state;
		};
		return result;
		;
	case 720:
		result = true;
		lexer->result_symbol = aux_sym_heredoc_redirect_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\n')
		{
			state = 720;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 222;
			goto next_state;
		};
		return result;
		;
	case 721:
		result = true;
		lexer->result_symbol = aux_sym_heredoc_redirect_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\n')
		{
			state = 721;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 397;
			goto next_state;
		};
		return result;
		;
	case 722:
		result = true;
		lexer->result_symbol = aux_sym_heredoc_redirect_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\n')
		{
			state = 722;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 106;
			goto next_state;
		};
		return result;
		;
	case 723:
		result = true;
		lexer->result_symbol = aux_sym_heredoc_redirect_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\n')
		{
			state = 723;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 43;
			goto next_state;
		};
		return result;
		;
	case 724:
		result = true;
		lexer->result_symbol = aux_sym_heredoc_redirect_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\n')
		{
			state = 724;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 331;
			goto next_state;
		};
		return result;
		;
	case 725:
		result = true;
		lexer->result_symbol = aux_sym_heredoc_redirect_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\n')
		{
			state = 725;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 193;
			goto next_state;
		};
		return result;
		;
	case 726:
		result = true;
		lexer->result_symbol = aux_sym_heredoc_redirect_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\n')
		{
			state = 726;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 46;
			goto next_state;
		};
		return result;
		;
	case 727:
		result = true;
		lexer->result_symbol = aux_sym_heredoc_redirect_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\n')
		{
			state = 727;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 398;
			goto next_state;
		};
		return result;
		;
	case 728:
		result = true;
		lexer->result_symbol = aux_sym_heredoc_redirect_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\n')
		{
			state = 728;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 213;
			goto next_state;
		};
		return result;
		;
	case 729:
		result = true;
		lexer->result_symbol = aux_sym_heredoc_redirect_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\n')
		{
			state = 729;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 226;
			goto next_state;
		};
		return result;
		;
	case 730:
		result = true;
		lexer->result_symbol = aux_sym_heredoc_redirect_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\n')
		{
			state = 730;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 399;
			goto next_state;
		};
		return result;
		;
	case 731:
		result = true;
		lexer->result_symbol = aux_sym_heredoc_redirect_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\n')
		{
			state = 731;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 128;
			goto next_state;
		};
		return result;
		;
	case 732:
		result = true;
		lexer->result_symbol = aux_sym_heredoc_redirect_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\n')
		{
			state = 732;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 166;
			goto next_state;
		};
		return result;
		;
	case 733:
		result = true;
		lexer->result_symbol = aux_sym_heredoc_redirect_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\n')
		{
			state = 733;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 333;
			goto next_state;
		};
		return result;
		;
	case 734:
		result = true;
		lexer->result_symbol = aux_sym_heredoc_redirect_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\n')
		{
			state = 734;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 48;
			goto next_state;
		};
		return result;
		;
	case 735:
		result = true;
		lexer->result_symbol = aux_sym_heredoc_redirect_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\n')
		{
			state = 735;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 335;
			goto next_state;
		};
		return result;
		;
	case 736:
		result = true;
		lexer->result_symbol = aux_sym_heredoc_redirect_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\n')
		{
			state = 736;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 228;
			goto next_state;
		};
		return result;
		;
	case 737:
		result = true;
		lexer->result_symbol = aux_sym_heredoc_redirect_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\n')
		{
			state = 737;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 337;
			goto next_state;
		};
		return result;
		;
	case 738:
		result = true;
		lexer->result_symbol = aux_sym_heredoc_redirect_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\n')
		{
			state = 738;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 207;
			goto next_state;
		};
		return result;
		;
	case 739:
		result = true;
		lexer->result_symbol = aux_sym_heredoc_redirect_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\n')
		{
			state = 739;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 339;
			goto next_state;
		};
		return result;
		;
	case 740:
		result = true;
		lexer->result_symbol = aux_sym_heredoc_redirect_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\n')
		{
			state = 740;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 168;
			goto next_state;
		};
		return result;
		;
	case 741:
		result = true;
		lexer->result_symbol = aux_sym_heredoc_redirect_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\n')
		{
			state = 741;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 341;
			goto next_state;
		};
		return result;
		;
	case 742:
		result = true;
		lexer->result_symbol = aux_sym_heredoc_redirect_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\n')
		{
			state = 742;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 58;
			goto next_state;
		};
		return result;
		;
	case 743:
		result = true;
		lexer->result_symbol = aux_sym_heredoc_redirect_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\n')
		{
			state = 743;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 343;
			goto next_state;
		};
		return result;
		;
	case 744:
		result = true;
		lexer->result_symbol = aux_sym_heredoc_redirect_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\n')
		{
			state = 744;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 233;
			goto next_state;
		};
		return result;
		;
	case 745:
		result = true;
		lexer->result_symbol = aux_sym_heredoc_redirect_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\n')
		{
			state = 745;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 344;
			goto next_state;
		};
		return result;
		;
	case 746:
		result = true;
		lexer->result_symbol = aux_sym_heredoc_redirect_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\n')
		{
			state = 746;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 176;
			goto next_state;
		};
		return result;
		;
	case 747:
		result = true;
		lexer->result_symbol = aux_sym_heredoc_redirect_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\n')
		{
			state = 747;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 346;
			goto next_state;
		};
		return result;
		;
	case 748:
		result = true;
		lexer->result_symbol = aux_sym_heredoc_redirect_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\n')
		{
			state = 748;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 100;
			goto next_state;
		};
		return result;
		;
	case 749:
		result = true;
		lexer->result_symbol = aux_sym_heredoc_redirect_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\n')
		{
			state = 749;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 347;
			goto next_state;
		};
		return result;
		;
	case 750:
		result = true;
		lexer->result_symbol = aux_sym_heredoc_redirect_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\n')
		{
			state = 750;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 112;
			goto next_state;
		};
		return result;
		;
	case 751:
		result = true;
		lexer->result_symbol = aux_sym_heredoc_redirect_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\n')
		{
			state = 751;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 349;
			goto next_state;
		};
		return result;
		;
	case 752:
		result = true;
		lexer->result_symbol = aux_sym_heredoc_redirect_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\n')
		{
			state = 752;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 350;
			goto next_state;
		};
		return result;
		;
	case 753:
		result = true;
		lexer->result_symbol = aux_sym_heredoc_redirect_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\n')
		{
			state = 753;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 351;
			goto next_state;
		};
		return result;
		;
	case 754:
		result = true;
		lexer->result_symbol = aux_sym_heredoc_redirect_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\n')
		{
			state = 754;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 354;
			goto next_state;
		};
		return result;
		;
	case 755:
		result = true;
		lexer->result_symbol = aux_sym_heredoc_redirect_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\n')
		{
			state = 755;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 357;
			goto next_state;
		};
		return result;
		;
	case 756:
		result = true;
		lexer->result_symbol = aux_sym_heredoc_redirect_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\n')
		{
			state = 756;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 370;
			goto next_state;
		};
		return result;
		;
	case 757:
		result = true;
		lexer->result_symbol = aux_sym_heredoc_redirect_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\n')
		{
			state = 757;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 372;
			goto next_state;
		};
		return result;
		;
	case 758:
		result = true;
		lexer->result_symbol = aux_sym_heredoc_redirect_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\n')
		{
			state = 758;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 381;
			goto next_state;
		};
		return result;
		;
	case 759:
		result = true;
		lexer->result_symbol = anon_sym_LT_LT_LT;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 760:
		result = true;
		lexer->result_symbol = anon_sym_QMARK;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 761:
		result = true;
		lexer->result_symbol = anon_sym_QMARK;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\\')
		{
			state = 518;
			goto next_state;
		};
		if ((!eof && set_contains(sym__comment_word_character_set_1, 12,
					lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 762:
		result = true;
		lexer->result_symbol = anon_sym_COLON;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 763:
		result = true;
		lexer->result_symbol = anon_sym_COLON;
		lexer->mark_end(lexer);
		;
		if (lookahead == '+')
		{
			state = 835;
			goto next_state;
		};
		if (lookahead == '-')
		{
			state = 832;
			goto next_state;
		};
		if (lookahead == '=')
		{
			state = 829;
			goto next_state;
		};
		if (lookahead == '?')
		{
			state = 839;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 518;
			goto next_state;
		};
		if ((!eof && set_contains(sym__comment_word_character_set_1, 12,
					lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 764:
		result = true;
		lexer->result_symbol = anon_sym_COLON;
		lexer->mark_end(lexer);
		;
		if (lookahead == '+')
		{
			state = 834;
			goto next_state;
		};
		if (lookahead == '-')
		{
			state = 831;
			goto next_state;
		};
		if (lookahead == '=')
		{
			state = 828;
			goto next_state;
		};
		if (lookahead == '?')
		{
			state = 838;
			goto next_state;
		};
		return result;
		;
	case 765:
		result = true;
		lexer->result_symbol = anon_sym_COLON;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\\')
		{
			state = 518;
			goto next_state;
		};
		if ((!eof && set_contains(sym__comment_word_character_set_1, 12,
					lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 766:
		result = true;
		lexer->result_symbol = anon_sym_PLUS_PLUS2;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 767:
		result = true;
		lexer->result_symbol = anon_sym_DASH_DASH2;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 768:
		result = true;
		lexer->result_symbol = anon_sym_DASH2;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 769:
		result = true;
		lexer->result_symbol = anon_sym_DASH2;
		lexer->mark_end(lexer);
		;
		if (lookahead == '-')
		{
			state = 767;
			goto next_state;
		};
		return result;
		;
	case 770:
		result = true;
		lexer->result_symbol = anon_sym_PLUS2;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 771:
		result = true;
		lexer->result_symbol = anon_sym_PLUS2;
		lexer->mark_end(lexer);
		;
		if (lookahead == '+')
		{
			state = 766;
			goto next_state;
		};
		return result;
		;
	case 772:
		result = true;
		lexer->result_symbol = anon_sym_TILDE;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 773:
		result = true;
		lexer->result_symbol = anon_sym_DOLLAR_LPAREN_LPAREN;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 774:
		result = true;
		lexer->result_symbol = anon_sym_DOLLAR_LBRACK;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 775:
		result = true;
		lexer->result_symbol = aux_sym_brace_expression_token1;
		lexer->mark_end(lexer);
		;
		if (('0' <= lookahead && lookahead <= '9'))
		{
			state = 775;
			goto next_state;
		};
		return result;
		;
	case 776:
		result = true;
		lexer->result_symbol = anon_sym_DOT_DOT;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 777:
		result = true;
		lexer->result_symbol = anon_sym_DOT_DOT;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\\')
		{
			state = 518;
			goto next_state;
		};
		if ((!eof && set_contains(sym__comment_word_character_set_1, 12,
					lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 778:
		result = true;
		lexer->result_symbol = anon_sym_RBRACE2;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 779:
		result = true;
		lexer->result_symbol = aux_sym_concatenation_token1;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 780:
		result = true;
		lexer->result_symbol = anon_sym_DOLLAR;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 781:
		result = true;
		lexer->result_symbol = anon_sym_DOLLAR;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\'')
		{
			state = 492;
			goto next_state;
		};
		if (lookahead == '(')
		{
			state = 854;
			goto next_state;
		};
		if (lookahead == '[')
		{
			state = 774;
			goto next_state;
		};
		if (lookahead == '`')
		{
			state = 857;
			goto next_state;
		};
		if (lookahead == '{')
		{
			state = 817;
			goto next_state;
		};
		return result;
		;
	case 782:
		result = true;
		lexer->result_symbol = anon_sym_DOLLAR;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\'')
		{
			state = 492;
			goto next_state;
		};
		if (lookahead == '(')
		{
			state = 853;
			goto next_state;
		};
		if (lookahead == '`')
		{
			state = 857;
			goto next_state;
		};
		if (lookahead == '{')
		{
			state = 817;
			goto next_state;
		};
		return result;
		;
	case 783:
		result = true;
		lexer->result_symbol = anon_sym_DOLLAR;
		lexer->mark_end(lexer);
		;
		if (lookahead == '(')
		{
			state = 854;
			goto next_state;
		};
		if (lookahead == '[')
		{
			state = 774;
			goto next_state;
		};
		if (lookahead == '`')
		{
			state = 857;
			goto next_state;
		};
		if (lookahead == '{')
		{
			state = 817;
			goto next_state;
		};
		return result;
		;
	case 784:
		result = true;
		lexer->result_symbol = anon_sym_DOLLAR;
		lexer->mark_end(lexer);
		;
		if (lookahead == '(')
		{
			state = 853;
			goto next_state;
		};
		if (lookahead == '`')
		{
			state = 857;
			goto next_state;
		};
		return result;
		;
	case 785:
		result = true;
		lexer->result_symbol = anon_sym_DOLLAR;
		lexer->mark_end(lexer);
		;
		if (lookahead == '(')
		{
			state = 853;
			goto next_state;
		};
		if (lookahead == '`')
		{
			state = 857;
			goto next_state;
		};
		if (lookahead == '{')
		{
			state = 817;
			goto next_state;
		};
		return result;
		;
	case 786:
		result = true;
		lexer->result_symbol = sym__special_character;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 787:
		result = true;
		lexer->result_symbol = sym__special_character;
		lexer->mark_end(lexer);
		;
		if (lookahead == ']')
		{
			state = 677;
			goto next_state;
		};
		return result;
		;
	case 788:
		result = true;
		lexer->result_symbol = anon_sym_DQUOTE;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 789:
		result = true;
		lexer->result_symbol = sym_string_content;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\n')
		{
			state = 795;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 303;
			goto next_state;
		};
		if (lookahead != 0 && lookahead != '\r' && lookahead != '"'
			&& lookahead != '$' && lookahead != '`')
		{
			state = 798;
			goto next_state;
		};
		return result;
		;
	case 790:
		result = true;
		lexer->result_symbol = sym_string_content;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\n')
		{
			state = 793;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 303;
			goto next_state;
		};
		if (lookahead != 0 && lookahead != '\r' && lookahead != '"'
			&& lookahead != '$' && lookahead != '`')
		{
			state = 798;
			goto next_state;
		};
		return result;
		;
	case 791:
		result = true;
		lexer->result_symbol = sym_string_content;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\n')
		{
			state = 794;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 303;
			goto next_state;
		};
		if (lookahead != 0 && lookahead != '\r' && lookahead != '"'
			&& lookahead != '$' && lookahead != '`')
		{
			state = 798;
			goto next_state;
		};
		return result;
		;
	case 792:
		result = true;
		lexer->result_symbol = sym_string_content;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\n')
		{
			state = 798;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 860;
			goto next_state;
		};
		if (lookahead != 0 && lookahead != '\r' && lookahead != '"'
			&& lookahead != '$' && lookahead != '`')
		{
			state = 797;
			goto next_state;
		};
		return result;
		;
	case 793:
		result = true;
		lexer->result_symbol = sym_string_content;
		lexer->mark_end(lexer);
		;
		{
			static const uint16_t map[] = {
				'!', 669, '"', 788, '#', 816, '$', 780, '*', 637, '-', 632, '0',
					945, '?', 760, '@', 941, '\\', 135, '_', 948,
			};
			for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
			{
				if (map[i] == lookahead)
				{
					state = map[i + 1];
					goto next_state;
				}
			}
		};
		if (lookahead == '\n' || lookahead == '\r')
		{
			skip = true;
			state = 449;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			state = 793;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
		{
			state = 879;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '_' || 'z' < lookahead))
		{
			state = 798;
			goto next_state;
		};
		return result;
		;
	case 794:
		result = true;
		lexer->result_symbol = sym_string_content;
		lexer->mark_end(lexer);
		;
		{
			static const uint16_t map[] = {
				'!', 669, '#', 816, '$', 780, '*', 637, '-', 632, '0', 945, '?',
					760, '@', 941, '\\', 136, '_', 948,
			};
			for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
			{
				if (map[i] == lookahead)
				{
					state = map[i + 1];
					goto next_state;
				}
			}
		};
		if (lookahead == '\n' || lookahead == '\r')
		{
			skip = true;
			state = 452;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			state = 794;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
		{
			state = 879;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < ' ' || '$' < lookahead)
			&& (lookahead < '_' || 'z' < lookahead))
		{
			state = 798;
			goto next_state;
		};
		return result;
		;
	case 795:
		result = true;
		lexer->result_symbol = sym_string_content;
		lexer->mark_end(lexer);
		;
		if (lookahead == '"')
		{
			state = 788;
			goto next_state;
		};
		if (lookahead == '#')
		{
			state = 797;
			goto next_state;
		};
		if (lookahead == '$')
		{
			state = 783;
			goto next_state;
		};
		if (lookahead == '(')
		{
			state = 796;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 302;
			goto next_state;
		};
		if (lookahead == '`')
		{
			state = 855;
			goto next_state;
		};
		if (lookahead == '\n' || lookahead == '\r')
		{
			skip = true;
			state = 480;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			state = 795;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 798;
			goto next_state;
		};
		return result;
		;
	case 796:
		result = true;
		lexer->result_symbol = sym_string_content;
		lexer->mark_end(lexer);
		;
		if (lookahead == '(')
		{
			state = 551;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 303;
			goto next_state;
		};
		if (lookahead != 0 && lookahead != '\n' && lookahead != '\r'
			&& lookahead != '"' && lookahead != '$' && lookahead != '`')
		{
			state = 798;
			goto next_state;
		};
		return result;
		;
	case 797:
		result = true;
		lexer->result_symbol = sym_string_content;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\\')
		{
			state = 860;
			goto next_state;
		};
		if (lookahead != 0 && lookahead != '\n' && lookahead != '\r'
			&& lookahead != '"' && lookahead != '$' && lookahead != '`')
		{
			state = 797;
			goto next_state;
		};
		return result;
		;
	case 798:
		result = true;
		lexer->result_symbol = sym_string_content;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\\')
		{
			state = 303;
			goto next_state;
		};
		if (lookahead != 0 && lookahead != '\n' && lookahead != '\r'
			&& lookahead != '"' && lookahead != '$' && lookahead != '`')
		{
			state = 798;
			goto next_state;
		};
		return result;
		;
	case 799:
		result = true;
		lexer->result_symbol = sym_string_content;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\\')
		{
			state = 303;
			goto next_state;
		};
		if (lookahead != 0 && lookahead != '\r' && lookahead != '"'
			&& lookahead != '$' && lookahead != '`')
		{
			state = 798;
			goto next_state;
		};
		return result;
		;
	case 800:
		result = true;
		lexer->result_symbol = sym_raw_string;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 801:
		result = true;
		lexer->result_symbol = sym_ansi_c_string;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 802:
		result = true;
		lexer->result_symbol = sym_ansi_c_string;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\'')
		{
			state = 801;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 493;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 492;
			goto next_state;
		};
		return result;
		;
	case 803:
		result = true;
		lexer->result_symbol = aux_sym_number_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '#')
		{
			state = 814;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 518;
			goto next_state;
		};
		if (lookahead == 'x')
		{
			state = 957;
			goto next_state;
		};
		if (('0' <= lookahead && lookahead <= '9'))
		{
			state = 805;
			goto next_state;
		};
		if ((!eof && set_contains(sym_word_character_set_1, 11, lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 804:
		result = true;
		lexer->result_symbol = aux_sym_number_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '#')
		{
			state = 814;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 518;
			goto next_state;
		};
		if (lookahead == 'x')
		{
			state = 867;
			goto next_state;
		};
		if (('0' <= lookahead && lookahead <= '9'))
		{
			state = 806;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || lookahead == '_'
			|| ('a' <= lookahead && lookahead <= 'z'))
		{
			state = 868;
			goto next_state;
		};
		if ((!eof && set_contains(sym_word_character_set_1, 11, lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 805:
		result = true;
		lexer->result_symbol = aux_sym_number_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '#')
		{
			state = 814;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 518;
			goto next_state;
		};
		if (('0' <= lookahead && lookahead <= '9'))
		{
			state = 805;
			goto next_state;
		};
		if ((!eof && set_contains(sym_word_character_set_1, 11, lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 806:
		result = true;
		lexer->result_symbol = aux_sym_number_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '#')
		{
			state = 814;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 518;
			goto next_state;
		};
		if (('0' <= lookahead && lookahead <= '9'))
		{
			state = 806;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || lookahead == '_'
			|| ('a' <= lookahead && lookahead <= 'z'))
		{
			state = 868;
			goto next_state;
		};
		if ((!eof && set_contains(sym_word_character_set_1, 11, lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 807:
		result = true;
		lexer->result_symbol = aux_sym_number_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '#')
		{
			state = 814;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 17;
			goto next_state;
		};
		if (('0' <= lookahead && lookahead <= '9'))
		{
			state = 807;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || lookahead == '_'
			|| ('a' <= lookahead && lookahead <= 'z'))
		{
			state = 873;
			goto next_state;
		};
		if ((!eof && set_contains(sym_word_character_set_1, 11, lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 808:
		result = true;
		lexer->result_symbol = aux_sym_number_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '#')
		{
			state = 815;
			goto next_state;
		};
		if (lookahead == 'x')
		{
			state = 878;
			goto next_state;
		};
		if (('0' <= lookahead && lookahead <= '9'))
		{
			state = 810;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || lookahead == '_'
			|| ('a' <= lookahead && lookahead <= 'z'))
		{
			state = 879;
			goto next_state;
		};
		return result;
		;
	case 809:
		result = true;
		lexer->result_symbol = aux_sym_number_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '#')
		{
			state = 815;
			goto next_state;
		};
		if (lookahead == 'x')
		{
			state = 517;
			goto next_state;
		};
		if (('0' <= lookahead && lookahead <= '9'))
		{
			state = 811;
			goto next_state;
		};
		return result;
		;
	case 810:
		result = true;
		lexer->result_symbol = aux_sym_number_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '#')
		{
			state = 815;
			goto next_state;
		};
		if (('0' <= lookahead && lookahead <= '9'))
		{
			state = 810;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || lookahead == '_'
			|| ('a' <= lookahead && lookahead <= 'z'))
		{
			state = 879;
			goto next_state;
		};
		return result;
		;
	case 811:
		result = true;
		lexer->result_symbol = aux_sym_number_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '#')
		{
			state = 815;
			goto next_state;
		};
		if (('0' <= lookahead && lookahead <= '9'))
		{
			state = 811;
			goto next_state;
		};
		return result;
		;
	case 812:
		result = true;
		lexer->result_symbol = aux_sym_number_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\\')
		{
			state = 518;
			goto next_state;
		};
		if (('0' <= lookahead && lookahead <= '9') || ('@' <= lookahead
				&& lookahead <= 'Z') || lookahead == '_' || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 812;
			goto next_state;
		};
		if ((!eof && set_contains(sym__comment_word_character_set_1, 12,
					lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 813:
		result = true;
		lexer->result_symbol = aux_sym_number_token1;
		lexer->mark_end(lexer);
		;
		if (('0' <= lookahead && lookahead <= '9') || ('@' <= lookahead
				&& lookahead <= 'Z') || lookahead == '_' || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 813;
			goto next_state;
		};
		return result;
		;
	case 814:
		result = true;
		lexer->result_symbol = aux_sym_number_token2;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\\')
		{
			state = 518;
			goto next_state;
		};
		if (('0' <= lookahead && lookahead <= '9') || ('@' <= lookahead
				&& lookahead <= 'Z') || lookahead == '_' || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 812;
			goto next_state;
		};
		if ((!eof && set_contains(sym__comment_word_character_set_1, 12,
					lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 815:
		result = true;
		lexer->result_symbol = aux_sym_number_token2;
		lexer->mark_end(lexer);
		;
		if (('0' <= lookahead && lookahead <= '9') || ('@' <= lookahead
				&& lookahead <= 'Z') || lookahead == '_' || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 813;
			goto next_state;
		};
		return result;
		;
	case 816:
		result = true;
		lexer->result_symbol = anon_sym_POUND;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 817:
		result = true;
		lexer->result_symbol = anon_sym_DOLLAR_LBRACE;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 818:
		result = true;
		lexer->result_symbol = anon_sym_RBRACE3;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 819:
		result = true;
		lexer->result_symbol = anon_sym_BANG2;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 820:
		result = true;
		lexer->result_symbol = anon_sym_BANG2;
		lexer->mark_end(lexer);
		;
		if (lookahead == '=')
		{
			state = 606;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 518;
			goto next_state;
		};
		if ((!eof && set_contains(sym__comment_word_character_set_1, 12,
					lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 821:
		result = true;
		lexer->result_symbol = anon_sym_AT;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 822:
		result = true;
		lexer->result_symbol = anon_sym_AT;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\\')
		{
			state = 518;
			goto next_state;
		};
		if ((!eof && set_contains(sym__comment_word_character_set_1, 12,
					lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 823:
		result = true;
		lexer->result_symbol = anon_sym_STAR2;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 824:
		result = true;
		lexer->result_symbol = anon_sym_STAR2;
		lexer->mark_end(lexer);
		;
		if (lookahead == '*')
		{
			state = 651;
			goto next_state;
		};
		if (lookahead == '=')
		{
			state = 573;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 518;
			goto next_state;
		};
		if ((!eof && set_contains(sym__comment_word_character_set_1, 12,
					lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 825:
		result = true;
		lexer->result_symbol = anon_sym_POUND2;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 826:
		result = true;
		lexer->result_symbol = anon_sym_EQ2;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 827:
		result = true;
		lexer->result_symbol = anon_sym_EQ2;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\\')
		{
			state = 518;
			goto next_state;
		};
		if ((!eof && set_contains(sym__comment_word_character_set_1, 12,
					lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 828:
		result = true;
		lexer->result_symbol = anon_sym_COLON_EQ;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 829:
		result = true;
		lexer->result_symbol = anon_sym_COLON_EQ;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\\')
		{
			state = 518;
			goto next_state;
		};
		if ((!eof && set_contains(sym__comment_word_character_set_1, 12,
					lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 830:
		result = true;
		lexer->result_symbol = anon_sym_DASH3;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 831:
		result = true;
		lexer->result_symbol = anon_sym_COLON_DASH;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 832:
		result = true;
		lexer->result_symbol = anon_sym_COLON_DASH;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\\')
		{
			state = 518;
			goto next_state;
		};
		if ((!eof && set_contains(sym__comment_word_character_set_1, 12,
					lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 833:
		result = true;
		lexer->result_symbol = anon_sym_PLUS3;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 834:
		result = true;
		lexer->result_symbol = anon_sym_COLON_PLUS;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 835:
		result = true;
		lexer->result_symbol = anon_sym_COLON_PLUS;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\\')
		{
			state = 518;
			goto next_state;
		};
		if ((!eof && set_contains(sym__comment_word_character_set_1, 12,
					lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 836:
		result = true;
		lexer->result_symbol = anon_sym_QMARK2;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 837:
		result = true;
		lexer->result_symbol = anon_sym_QMARK2;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\\')
		{
			state = 518;
			goto next_state;
		};
		if ((!eof && set_contains(sym__comment_word_character_set_1, 12,
					lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 838:
		result = true;
		lexer->result_symbol = anon_sym_COLON_QMARK;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 839:
		result = true;
		lexer->result_symbol = anon_sym_COLON_QMARK;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\\')
		{
			state = 518;
			goto next_state;
		};
		if ((!eof && set_contains(sym__comment_word_character_set_1, 12,
					lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 840:
		result = true;
		lexer->result_symbol = anon_sym_PERCENT_PERCENT;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 841:
		result = true;
		lexer->result_symbol = anon_sym_PERCENT_PERCENT;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\\')
		{
			state = 518;
			goto next_state;
		};
		if ((!eof && set_contains(sym__comment_word_character_set_1, 12,
					lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 842:
		result = true;
		lexer->result_symbol = aux_sym__expansion_regex_token1;
		lexer->mark_end(lexer);
		;
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			state = 842;
			goto next_state;
		};
		return result;
		;
	case 843:
		result = true;
		lexer->result_symbol = anon_sym_SLASH_SLASH;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 844:
		result = true;
		lexer->result_symbol = anon_sym_SLASH_SLASH;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\\')
		{
			state = 518;
			goto next_state;
		};
		if ((!eof && set_contains(sym__comment_word_character_set_1, 12,
					lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 845:
		result = true;
		lexer->result_symbol = anon_sym_SLASH_POUND;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 846:
		result = true;
		lexer->result_symbol = anon_sym_SLASH_POUND;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\\')
		{
			state = 518;
			goto next_state;
		};
		if ((!eof && set_contains(sym__comment_word_character_set_1, 12,
					lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 847:
		result = true;
		lexer->result_symbol = anon_sym_SLASH_PERCENT;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 848:
		result = true;
		lexer->result_symbol = anon_sym_SLASH_PERCENT;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\\')
		{
			state = 518;
			goto next_state;
		};
		if ((!eof && set_contains(sym__comment_word_character_set_1, 12,
					lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 849:
		result = true;
		lexer->result_symbol = anon_sym_COMMA_COMMA;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 850:
		result = true;
		lexer->result_symbol = anon_sym_COMMA_COMMA;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\\')
		{
			state = 518;
			goto next_state;
		};
		if ((!eof && set_contains(sym__comment_word_character_set_1, 12,
					lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 851:
		result = true;
		lexer->result_symbol = anon_sym_CARET_CARET;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 852:
		result = true;
		lexer->result_symbol = anon_sym_CARET_CARET;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\\')
		{
			state = 518;
			goto next_state;
		};
		if ((!eof && set_contains(sym__comment_word_character_set_1, 12,
					lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 853:
		result = true;
		lexer->result_symbol = anon_sym_DOLLAR_LPAREN;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 854:
		result = true;
		lexer->result_symbol = anon_sym_DOLLAR_LPAREN;
		lexer->mark_end(lexer);
		;
		if (lookahead == '(')
		{
			state = 773;
			goto next_state;
		};
		return result;
		;
	case 855:
		result = true;
		lexer->result_symbol = anon_sym_BQUOTE;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 856:
		result = true;
		lexer->result_symbol = anon_sym_BQUOTE;
		lexer->mark_end(lexer);
		;
		if (lookahead == '`')
		{
			state = 779;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			state = 510;
			goto next_state;
		};
		return result;
		;
	case 857:
		result = true;
		lexer->result_symbol = anon_sym_DOLLAR_BQUOTE;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 858:
		result = true;
		lexer->result_symbol = anon_sym_LT_LPAREN;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 859:
		result = true;
		lexer->result_symbol = anon_sym_GT_LPAREN;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 860:
		result = true;
		lexer->result_symbol = sym_comment;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\n')
		{
			state = 798;
			goto next_state;
		};
		if (lookahead == '\r')
		{
			state = 792;
			goto next_state;
		};
		if (lookahead != 0)
		{
			state = 797;
			goto next_state;
		};
		return result;
		;
	case 861:
		result = true;
		lexer->result_symbol = sym_comment;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\t' || (0x0b <= lookahead && lookahead <= '\r'))
		{
			state = 862;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '\t' || '\r' < lookahead))
		{
			state = 863;
			goto next_state;
		};
		return result;
		;
	case 862:
		result = true;
		lexer->result_symbol = sym_comment;
		lexer->mark_end(lexer);
		;
		if (lookahead != 0 && lookahead != '\n')
		{
			state = 862;
			goto next_state;
		};
		return result;
		;
	case 863:
		result = true;
		lexer->result_symbol = sym__comment_word;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\\')
		{
			state = 861;
			goto next_state;
		};
		if ((!eof && set_contains(sym__comment_word_character_set_1, 12,
					lookahead)))
		{
			state = 863;
			goto next_state;
		};
		return result;
		;
	case 864:
		result = true;
		lexer->result_symbol = aux_sym__simple_variable_name_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\\')
		{
			state = 518;
			goto next_state;
		};
		if (lookahead == 'a')
		{
			state = 865;
			goto next_state;
		};
		if (('0' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || lookahead == '_' || ('b' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 868;
			goto next_state;
		};
		if ((!eof && set_contains(sym__comment_word_character_set_1, 12,
					lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 865:
		result = true;
		lexer->result_symbol = aux_sym__simple_variable_name_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\\')
		{
			state = 518;
			goto next_state;
		};
		if (lookahead == 'c')
		{
			state = 658;
			goto next_state;
		};
		if (('0' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || lookahead == '_' || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 868;
			goto next_state;
		};
		if ((!eof && set_contains(sym__comment_word_character_set_1, 12,
					lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 866:
		result = true;
		lexer->result_symbol = aux_sym__simple_variable_name_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\\')
		{
			state = 518;
			goto next_state;
		};
		if (lookahead == 's')
		{
			state = 864;
			goto next_state;
		};
		if (('0' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || lookahead == '_' || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 868;
			goto next_state;
		};
		if ((!eof && set_contains(sym__comment_word_character_set_1, 12,
					lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 867:
		result = true;
		lexer->result_symbol = aux_sym__simple_variable_name_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\\')
		{
			state = 518;
			goto next_state;
		};
		if (('0' <= lookahead && lookahead <= '9'))
		{
			state = 806;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || lookahead == '_'
			|| ('a' <= lookahead && lookahead <= 'z'))
		{
			state = 868;
			goto next_state;
		};
		if ((!eof && set_contains(sym__comment_word_character_set_1, 12,
					lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 868:
		result = true;
		lexer->result_symbol = aux_sym__simple_variable_name_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\\')
		{
			state = 518;
			goto next_state;
		};
		if (('0' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || lookahead == '_' || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 868;
			goto next_state;
		};
		if ((!eof && set_contains(sym__comment_word_character_set_1, 12,
					lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 869:
		result = true;
		lexer->result_symbol = aux_sym__simple_variable_name_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\\')
		{
			state = 17;
			goto next_state;
		};
		if (lookahead == 'a')
		{
			state = 870;
			goto next_state;
		};
		if (('0' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || lookahead == '_' || ('b' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 873;
			goto next_state;
		};
		if ((!eof && set_contains(sym__comment_word_character_set_1, 12,
					lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 870:
		result = true;
		lexer->result_symbol = aux_sym__simple_variable_name_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\\')
		{
			state = 17;
			goto next_state;
		};
		if (lookahead == 'c')
		{
			state = 660;
			goto next_state;
		};
		if (('0' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || lookahead == '_' || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 873;
			goto next_state;
		};
		if ((!eof && set_contains(sym__comment_word_character_set_1, 12,
					lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 871:
		result = true;
		lexer->result_symbol = aux_sym__simple_variable_name_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\\')
		{
			state = 17;
			goto next_state;
		};
		if (lookahead == 's')
		{
			state = 869;
			goto next_state;
		};
		if (('0' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || lookahead == '_' || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 873;
			goto next_state;
		};
		if ((!eof && set_contains(sym__comment_word_character_set_1, 12,
					lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 872:
		result = true;
		lexer->result_symbol = aux_sym__simple_variable_name_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\\')
		{
			state = 17;
			goto next_state;
		};
		if (('0' <= lookahead && lookahead <= '9'))
		{
			state = 807;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || lookahead == '_'
			|| ('a' <= lookahead && lookahead <= 'z'))
		{
			state = 873;
			goto next_state;
		};
		if ((!eof && set_contains(sym__comment_word_character_set_1, 12,
					lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 873:
		result = true;
		lexer->result_symbol = aux_sym__simple_variable_name_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\\')
		{
			state = 17;
			goto next_state;
		};
		if (('0' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || lookahead == '_' || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 873;
			goto next_state;
		};
		if ((!eof && set_contains(sym__comment_word_character_set_1, 12,
					lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 874:
		result = true;
		lexer->result_symbol = aux_sym__simple_variable_name_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == 'a')
		{
			state = 875;
			goto next_state;
		};
		if (('0' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || lookahead == '_' || ('b' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 879;
			goto next_state;
		};
		return result;
		;
	case 875:
		result = true;
		lexer->result_symbol = aux_sym__simple_variable_name_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == 'c')
		{
			state = 661;
			goto next_state;
		};
		if (('0' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || lookahead == '_' || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 879;
			goto next_state;
		};
		return result;
		;
	case 876:
		result = true;
		lexer->result_symbol = aux_sym__simple_variable_name_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == 'n')
		{
			state = 550;
			goto next_state;
		};
		if (('0' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || lookahead == '_' || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 879;
			goto next_state;
		};
		return result;
		;
	case 877:
		result = true;
		lexer->result_symbol = aux_sym__simple_variable_name_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == 's')
		{
			state = 874;
			goto next_state;
		};
		if (('0' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || lookahead == '_' || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 879;
			goto next_state;
		};
		return result;
		;
	case 878:
		result = true;
		lexer->result_symbol = aux_sym__simple_variable_name_token1;
		lexer->mark_end(lexer);
		;
		if (('0' <= lookahead && lookahead <= '9'))
		{
			state = 810;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || lookahead == '_'
			|| ('a' <= lookahead && lookahead <= 'z'))
		{
			state = 879;
			goto next_state;
		};
		return result;
		;
	case 879:
		result = true;
		lexer->result_symbol = aux_sym__simple_variable_name_token1;
		lexer->mark_end(lexer);
		;
		if (('0' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || lookahead == '_' || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 879;
			goto next_state;
		};
		return result;
		;
	case 880:
		result = true;
		lexer->result_symbol = aux_sym__multiline_variable_name_token1;
		lexer->mark_end(lexer);
		;
		{
			static const uint16_t map[] = {
				'\n', 689, '!', 670, '"', 788, '#', 816, '$', 781, '%', 649,
					'&', 601, '\'', 491, '(', 654, ')', 655, '*', 638, '+', 630,
					'-', 633, '/', 644, '0', 943, ';', 555, '<', 607, '=', 560,
					'>', 616, '?', 761, '@', 942, '\\', 14, '^', 596, '_', 947,
					'`', 855, '|', 592,
			};
			for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
			{
				if (map[i] == lookahead)
				{
					state = map[i + 1];
					goto next_state;
				}
			}
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 12;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 807;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 873;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < ';' || '}' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 881:
		result = true;
		lexer->result_symbol = aux_sym__multiline_variable_name_token1;
		lexer->mark_end(lexer);
		;
		{
			static const uint16_t map[] = {
				'\n', 692, '!', 669, '"', 788, '#', 816, '$', 780, '&', 602,
					'*', 637, '-', 632, '0', 945, ';', 554, '<', 612, '>', 618,
					'?', 760, '@', 941, '\\', 81, '_', 948, 'e', 877, '|', 593,
			};
			for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
			{
				if (map[i] == lookahead)
				{
					state = map[i + 1];
					goto next_state;
				}
			}
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 200;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
		{
			state = 879;
			goto next_state;
		};
		return result;
		;
	case 882:
		result = true;
		lexer->result_symbol = aux_sym__multiline_variable_name_token1;
		lexer->mark_end(lexer);
		;
		{
			static const uint16_t map[] = {
				'\n', 693, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602,
					'\'', 491, '(', 654, '*', 640, '-', 636, '0', 943, ';', 554,
					'<', 609, '=', 952, '>', 617, '?', 761, '@', 942, '\\', 27,
					'_', 947, '`', 855, 'e', 871, '|', 593,
			};
			for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
			{
				if (map[i] == lookahead)
				{
					state = map[i + 1];
					goto next_state;
				}
			}
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 219;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 807;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 873;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead)
			&& (lookahead < ';' || ']' < lookahead) && (lookahead < '_'
				|| '}' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 883:
		result = true;
		lexer->result_symbol = aux_sym__multiline_variable_name_token1;
		lexer->mark_end(lexer);
		;
		{
			static const uint16_t map[] = {
				'\n', 695, '!', 669, '"', 788, '#', 816, '$', 780, '&', 602,
					'*', 637, '-', 632, '0', 945, ';', 554, '<', 612, '>', 618,
					'?', 760, '@', 941, '\\', 91, '_', 948, '|', 593,
			};
			for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
			{
				if (map[i] == lookahead)
				{
					state = map[i + 1];
					goto next_state;
				}
			}
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 237;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
		{
			state = 879;
			goto next_state;
		};
		return result;
		;
	case 884:
		result = true;
		lexer->result_symbol = aux_sym__multiline_variable_name_token1;
		lexer->mark_end(lexer);
		;
		{
			static const uint16_t map[] = {
				'\n', 696, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602,
					'\'', 491, '(', 654, '*', 640, '-', 636, '0', 943, ';', 554,
					'<', 609, '=', 952, '>', 617, '?', 761, '@', 942, '\\', 30,
					'_', 947, '`', 855, '|', 593,
			};
			for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
			{
				if (map[i] == lookahead)
				{
					state = map[i + 1];
					goto next_state;
				}
			}
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 238;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 807;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 873;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead)
			&& (lookahead < ';' || ']' < lookahead) && (lookahead < '_'
				|| '}' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 885:
		result = true;
		lexer->result_symbol = aux_sym__multiline_variable_name_token1;
		lexer->mark_end(lexer);
		;
		{
			static const uint16_t map[] = {
				'\n', 698, '!', 669, '"', 788, '#', 816, '$', 780, '&', 602,
					'*', 637, '-', 632, '0', 945, ';', 554, '<', 613, '>', 618,
					'?', 760, '@', 941, '\\', 183, '_', 948, 'e', 877, '|', 593,
			};
			for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
			{
				if (map[i] == lookahead)
				{
					state = map[i + 1];
					goto next_state;
				}
			}
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 240;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
		{
			state = 879;
			goto next_state;
		};
		return result;
		;
	case 886:
		result = true;
		lexer->result_symbol = aux_sym__multiline_variable_name_token1;
		lexer->mark_end(lexer);
		;
		{
			static const uint16_t map[] = {
				'\n', 699, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602,
					'\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, ';', 554,
					'<', 609, '=', 952, '>', 617, '?', 761, '@', 942, '\\', 153,
					'_', 947, '`', 855, 'e', 871, '|', 593,
			};
			for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
			{
				if (map[i] == lookahead)
				{
					state = map[i + 1];
					goto next_state;
				}
			}
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 241;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 807;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 873;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead)
			&& (lookahead < ';' || ']' < lookahead) && (lookahead < '_'
				|| '}' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 887:
		result = true;
		lexer->result_symbol = aux_sym__multiline_variable_name_token1;
		lexer->mark_end(lexer);
		;
		{
			static const uint16_t map[] = {
				'\n', 701, '!', 669, '"', 788, '#', 816, '$', 780, '&', 602,
					'*', 637, '-', 632, '0', 945, ';', 554, '<', 613, '>', 618,
					'?', 760, '@', 941, '\\', 185, '_', 948, '|', 593,
			};
			for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
			{
				if (map[i] == lookahead)
				{
					state = map[i + 1];
					goto next_state;
				}
			}
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 243;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
		{
			state = 879;
			goto next_state;
		};
		return result;
		;
	case 888:
		result = true;
		lexer->result_symbol = aux_sym__multiline_variable_name_token1;
		lexer->mark_end(lexer);
		;
		{
			static const uint16_t map[] = {
				'\n', 702, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602,
					'\'', 491, '(', 654, ')', 655, '*', 640, '-', 636, '0', 943,
					';', 555, '<', 609, '=', 952, '>', 617, '?', 761, '@', 942,
					'\\', 32, '_', 947, '`', 855, '|', 593,
			};
			for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
			{
				if (map[i] == lookahead)
				{
					state = map[i + 1];
					goto next_state;
				}
			}
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 244;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 807;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 873;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < ';' || ']' < lookahead)
			&& (lookahead < '_' || '}' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 889:
		result = true;
		lexer->result_symbol = aux_sym__multiline_variable_name_token1;
		lexer->mark_end(lexer);
		;
		{
			static const uint16_t map[] = {
				'\n', 704, '!', 669, '"', 788, '#', 816, '$', 780, '&', 602,
					'*', 637, '-', 632, '0', 945, ';', 555, '<', 612, '>', 618,
					'?', 760, '@', 941, '\\', 96, '_', 948, '`', 855, '|', 593,
			};
			for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
			{
				if (map[i] == lookahead)
				{
					state = map[i + 1];
					goto next_state;
				}
			}
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 246;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
		{
			state = 879;
			goto next_state;
		};
		return result;
		;
	case 890:
		result = true;
		lexer->result_symbol = aux_sym__multiline_variable_name_token1;
		lexer->mark_end(lexer);
		;
		{
			static const uint16_t map[] = {
				'\n', 705, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602,
					'\'', 491, '(', 654, '*', 640, '-', 636, '0', 943, ';', 555,
					'<', 609, '=', 952, '>', 617, '?', 761, '@', 942, '\\', 156,
					'_', 947, '`', 855, '|', 593,
			};
			for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
			{
				if (map[i] == lookahead)
				{
					state = map[i + 1];
					goto next_state;
				}
			}
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 247;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 807;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 873;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead)
			&& (lookahead < ';' || ']' < lookahead) && (lookahead < '_'
				|| '}' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 891:
		result = true;
		lexer->result_symbol = aux_sym__multiline_variable_name_token1;
		lexer->mark_end(lexer);
		;
		{
			static const uint16_t map[] = {
				'\n', 707, '!', 669, '"', 788, '#', 816, '$', 780, '&', 602,
					')', 655, '*', 637, '-', 632, '0', 945, ';', 555, '<', 612,
					'>', 618, '?', 760, '@', 941, '\\', 98, '_', 948, '|', 593,
			};
			for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
			{
				if (map[i] == lookahead)
				{
					state = map[i + 1];
					goto next_state;
				}
			}
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 249;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
		{
			state = 879;
			goto next_state;
		};
		return result;
		;
	case 892:
		result = true;
		lexer->result_symbol = aux_sym__multiline_variable_name_token1;
		lexer->mark_end(lexer);
		;
		{
			static const uint16_t map[] = {
				'\n', 708, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602,
					'\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, ';', 554,
					'<', 609, '=', 952, '>', 617, '?', 761, '@', 942, '\\', 202,
					'_', 947, '`', 855, '|', 593,
			};
			for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
			{
				if (map[i] == lookahead)
				{
					state = map[i + 1];
					goto next_state;
				}
			}
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 250;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 807;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 873;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead)
			&& (lookahead < ';' || ']' < lookahead) && (lookahead < '_'
				|| '}' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 893:
		result = true;
		lexer->result_symbol = aux_sym__multiline_variable_name_token1;
		lexer->mark_end(lexer);
		;
		{
			static const uint16_t map[] = {
				'\n', 710, '!', 669, '"', 788, '#', 816, '$', 780, '&', 602,
					'*', 637, '-', 632, '0', 945, ';', 555, '<', 612, '>', 618,
					'?', 760, '@', 941, '\\', 211, '_', 948, '|', 593,
			};
			for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
			{
				if (map[i] == lookahead)
				{
					state = map[i + 1];
					goto next_state;
				}
			}
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 252;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
		{
			state = 879;
			goto next_state;
		};
		return result;
		;
	case 894:
		result = true;
		lexer->result_symbol = aux_sym__multiline_variable_name_token1;
		lexer->mark_end(lexer);
		;
		{
			static const uint16_t map[] = {
				'\n', 711, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602,
					'\'', 491, '(', 494, ')', 655, '*', 640, '-', 636, '0', 943,
					';', 555, '<', 609, '=', 952, '>', 617, '?', 761, '@', 942,
					'\\', 158, '_', 947, '`', 855, '|', 593,
			};
			for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
			{
				if (map[i] == lookahead)
				{
					state = map[i + 1];
					goto next_state;
				}
			}
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 253;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 807;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 873;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < ';' || ']' < lookahead)
			&& (lookahead < '_' || '}' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 895:
		result = true;
		lexer->result_symbol = aux_sym__multiline_variable_name_token1;
		lexer->mark_end(lexer);
		;
		{
			static const uint16_t map[] = {
				'\n', 713, '!', 669, '"', 788, '#', 816, '$', 780, '&', 602,
					'*', 637, '-', 632, '0', 945, ';', 555, '<', 613, '>', 618,
					'?', 760, '@', 941, '\\', 188, '_', 948, '`', 855, '|', 593,
			};
			for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
			{
				if (map[i] == lookahead)
				{
					state = map[i + 1];
					goto next_state;
				}
			}
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 255;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
		{
			state = 879;
			goto next_state;
		};
		return result;
		;
	case 896:
		result = true;
		lexer->result_symbol = aux_sym__multiline_variable_name_token1;
		lexer->mark_end(lexer);
		;
		{
			static const uint16_t map[] = {
				'\n', 714, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602,
					'\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, ';', 555,
					'<', 609, '=', 952, '>', 617, '?', 761, '@', 942, '\\', 215,
					'_', 947, '`', 855, '|', 593,
			};
			for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
			{
				if (map[i] == lookahead)
				{
					state = map[i + 1];
					goto next_state;
				}
			}
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 256;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 807;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 873;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead)
			&& (lookahead < ';' || ']' < lookahead) && (lookahead < '_'
				|| '}' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 897:
		result = true;
		lexer->result_symbol = aux_sym__multiline_variable_name_token1;
		lexer->mark_end(lexer);
		;
		{
			static const uint16_t map[] = {
				'\n', 716, '!', 669, '"', 788, '#', 816, '$', 780, '&', 602,
					'*', 637, '-', 632, '0', 945, ';', 555, '<', 613, '>', 618,
					'?', 760, '@', 941, '\\', 218, '_', 948, '|', 593,
			};
			for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
			{
				if (map[i] == lookahead)
				{
					state = map[i + 1];
					goto next_state;
				}
			}
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 258;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
		{
			state = 879;
			goto next_state;
		};
		return result;
		;
	case 898:
		result = true;
		lexer->result_symbol = aux_sym__multiline_variable_name_token1;
		lexer->mark_end(lexer);
		;
		{
			static const uint16_t map[] = {
				'\n', 717, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602,
					'\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, ';', 554,
					'<', 609, '>', 617, '?', 761, '@', 942, '\\', 37, '_', 947,
					'`', 855, 'e', 871, '|', 593,
			};
			for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
			{
				if (map[i] == lookahead)
				{
					state = map[i + 1];
					goto next_state;
				}
			}
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 259;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 807;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 873;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead)
			&& (lookahead < '>' || ']' < lookahead) && (lookahead < '_'
				|| '}' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 899:
		result = true;
		lexer->result_symbol = aux_sym__multiline_variable_name_token1;
		lexer->mark_end(lexer);
		;
		{
			static const uint16_t map[] = {
				'\n', 719, '!', 669, '"', 788, '#', 816, '$', 780, '&', 602,
					')', 655, '*', 637, '-', 632, '0', 945, ';', 555, '<', 613,
					'>', 618, '?', 760, '@', 941, '\\', 190, '_', 948, '|', 593,
			};
			for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
			{
				if (map[i] == lookahead)
				{
					state = map[i + 1];
					goto next_state;
				}
			}
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 261;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
		{
			state = 879;
			goto next_state;
		};
		return result;
		;
	case 900:
		result = true;
		lexer->result_symbol = aux_sym__multiline_variable_name_token1;
		lexer->mark_end(lexer);
		;
		{
			static const uint16_t map[] = {
				'\n', 720, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602,
					'\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, ';', 554,
					'<', 610, '>', 617, '?', 761, '@', 942, '\\', 222, '_', 947,
					'`', 855, 'e', 871, '|', 593,
			};
			for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
			{
				if (map[i] == lookahead)
				{
					state = map[i + 1];
					goto next_state;
				}
			}
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 262;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 807;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 873;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead)
			&& (lookahead < '>' || ']' < lookahead) && (lookahead < '_'
				|| '}' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 901:
		result = true;
		lexer->result_symbol = aux_sym__multiline_variable_name_token1;
		lexer->mark_end(lexer);
		;
		{
			static const uint16_t map[] = {
				'\n', 722, '!', 669, '"', 788, '#', 816, '$', 780, '&', 489,
					'*', 637, '-', 632, '0', 945, '<', 612, '>', 618, '?', 760,
					'@', 941, '\\', 106, '_', 948, '|', 593,
			};
			for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
			{
				if (map[i] == lookahead)
				{
					state = map[i + 1];
					goto next_state;
				}
			}
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 264;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
		{
			state = 879;
			goto next_state;
		};
		return result;
		;
	case 902:
		result = true;
		lexer->result_symbol = aux_sym__multiline_variable_name_token1;
		lexer->mark_end(lexer);
		;
		{
			static const uint16_t map[] = {
				'\n', 723, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602,
					'\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, ';', 554,
					'<', 609, '>', 617, '?', 761, '@', 942, '\\', 43, '_', 947,
					'`', 855, '|', 593,
			};
			for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
			{
				if (map[i] == lookahead)
				{
					state = map[i + 1];
					goto next_state;
				}
			}
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 265;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 807;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 873;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead)
			&& (lookahead < '>' || ']' < lookahead) && (lookahead < '_'
				|| '}' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 903:
		result = true;
		lexer->result_symbol = aux_sym__multiline_variable_name_token1;
		lexer->mark_end(lexer);
		;
		{
			static const uint16_t map[] = {
				'\n', 725, '!', 669, '"', 788, '#', 816, '$', 780, '&', 489,
					'*', 637, '-', 632, '0', 945, '<', 613, '>', 618, '?', 760,
					'@', 941, '\\', 193, '_', 948, '|', 593,
			};
			for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
			{
				if (map[i] == lookahead)
				{
					state = map[i + 1];
					goto next_state;
				}
			}
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 267;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
		{
			state = 879;
			goto next_state;
		};
		return result;
		;
	case 904:
		result = true;
		lexer->result_symbol = aux_sym__multiline_variable_name_token1;
		lexer->mark_end(lexer);
		;
		{
			static const uint16_t map[] = {
				'\n', 726, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602,
					'\'', 491, '(', 494, ')', 655, '*', 640, '-', 636, '0', 943,
					';', 555, '<', 609, '>', 617, '?', 761, '@', 942, '\\', 46,
					'_', 947, '`', 855, '|', 593,
			};
			for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
			{
				if (map[i] == lookahead)
				{
					state = map[i + 1];
					goto next_state;
				}
			}
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 268;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 807;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 873;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '>' || ']' < lookahead)
			&& (lookahead < '_' || '}' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 905:
		result = true;
		lexer->result_symbol = aux_sym__multiline_variable_name_token1;
		lexer->mark_end(lexer);
		;
		{
			static const uint16_t map[] = {
				'\n', 728, '!', 669, '"', 788, '#', 816, '$', 780, '&', 489,
					'*', 637, '-', 632, '0', 945, '<', 611, '>', 618, '?', 760,
					'@', 941, '\\', 213, '_', 948, '|', 516,
			};
			for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
			{
				if (map[i] == lookahead)
				{
					state = map[i + 1];
					goto next_state;
				}
			}
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 270;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
		{
			state = 879;
			goto next_state;
		};
		return result;
		;
	case 906:
		result = true;
		lexer->result_symbol = aux_sym__multiline_variable_name_token1;
		lexer->mark_end(lexer);
		;
		{
			static const uint16_t map[] = {
				'\n', 729, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602,
					'\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, ';', 554,
					'<', 610, '>', 617, '?', 761, '@', 942, '\\', 226, '_', 947,
					'`', 855, '|', 593,
			};
			for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
			{
				if (map[i] == lookahead)
				{
					state = map[i + 1];
					goto next_state;
				}
			}
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 271;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 807;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 873;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead)
			&& (lookahead < '>' || ']' < lookahead) && (lookahead < '_'
				|| '}' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 907:
		result = true;
		lexer->result_symbol = aux_sym__multiline_variable_name_token1;
		lexer->mark_end(lexer);
		;
		{
			static const uint16_t map[] = {
				'\n', 731, '!', 669, '"', 788, '#', 816, '$', 780, '&', 599,
					'*', 637, '-', 632, '0', 945, ';', 555, '?', 760, '@', 941,
					'\\', 128, '_', 948, 'i', 876,
			};
			for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
			{
				if (map[i] == lookahead)
				{
					state = map[i + 1];
					goto next_state;
				}
			}
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 273;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
		{
			state = 879;
			goto next_state;
		};
		return result;
		;
	case 908:
		result = true;
		lexer->result_symbol = aux_sym__multiline_variable_name_token1;
		lexer->mark_end(lexer);
		;
		{
			static const uint16_t map[] = {
				'\n', 732, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602,
					'\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, ';', 555,
					'<', 609, '>', 617, '?', 761, '@', 942, '\\', 166, '_', 947,
					'`', 855, '|', 593,
			};
			for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
			{
				if (map[i] == lookahead)
				{
					state = map[i + 1];
					goto next_state;
				}
			}
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 274;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 807;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 873;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead)
			&& (lookahead < '>' || ']' < lookahead) && (lookahead < '_'
				|| '}' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 909:
		result = true;
		lexer->result_symbol = aux_sym__multiline_variable_name_token1;
		lexer->mark_end(lexer);
		;
		{
			static const uint16_t map[] = {
				'\n', 734, '!', 672, '"', 788, '#', 816, '$', 781, '&', 489,
					'\'', 491, '(', 654, '*', 640, '-', 636, '0', 943, '<', 609,
					'=', 952, '>', 617, '?', 761, '@', 942, '\\', 48, '_', 947,
					'`', 855, '|', 593,
			};
			for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
			{
				if (map[i] == lookahead)
				{
					state = map[i + 1];
					goto next_state;
				}
			}
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 276;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 807;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 873;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead)
			&& (lookahead < ';' || ']' < lookahead) && (lookahead < '_'
				|| '}' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 910:
		result = true;
		lexer->result_symbol = aux_sym__multiline_variable_name_token1;
		lexer->mark_end(lexer);
		;
		{
			static const uint16_t map[] = {
				'\n', 736, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602,
					'\'', 491, '(', 494, ')', 655, '*', 640, '-', 636, '0', 943,
					';', 555, '<', 610, '>', 617, '?', 761, '@', 942, '\\', 228,
					'_', 947, '`', 855, '|', 593,
			};
			for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
			{
				if (map[i] == lookahead)
				{
					state = map[i + 1];
					goto next_state;
				}
			}
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 278;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 807;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 873;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '>' || ']' < lookahead)
			&& (lookahead < '_' || '}' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 911:
		result = true;
		lexer->result_symbol = aux_sym__multiline_variable_name_token1;
		lexer->mark_end(lexer);
		;
		{
			static const uint16_t map[] = {
				'\n', 738, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602,
					'\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, ';', 555,
					'<', 610, '>', 617, '?', 761, '@', 942, '\\', 207, '_', 947,
					'`', 855, '|', 593,
			};
			for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
			{
				if (map[i] == lookahead)
				{
					state = map[i + 1];
					goto next_state;
				}
			}
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 280;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 807;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 873;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead)
			&& (lookahead < '>' || ']' < lookahead) && (lookahead < '_'
				|| '}' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 912:
		result = true;
		lexer->result_symbol = aux_sym__multiline_variable_name_token1;
		lexer->mark_end(lexer);
		;
		{
			static const uint16_t map[] = {
				'\n', 740, '!', 672, '"', 788, '#', 816, '$', 781, '&', 489,
					'\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, '<', 609,
					'=', 952, '>', 617, '?', 761, '@', 942, '\\', 168, '_', 947,
					'`', 855, '|', 593,
			};
			for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
			{
				if (map[i] == lookahead)
				{
					state = map[i + 1];
					goto next_state;
				}
			}
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 282;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 807;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 873;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead)
			&& (lookahead < ';' || ']' < lookahead) && (lookahead < '_'
				|| '}' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 913:
		result = true;
		lexer->result_symbol = aux_sym__multiline_variable_name_token1;
		lexer->mark_end(lexer);
		;
		{
			static const uint16_t map[] = {
				'\n', 742, '!', 672, '"', 788, '#', 816, '$', 781, '&', 489,
					'\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, '<', 609,
					'>', 617, '?', 761, '@', 942, '\\', 58, '_', 947, '`', 855,
					'|', 593,
			};
			for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
			{
				if (map[i] == lookahead)
				{
					state = map[i + 1];
					goto next_state;
				}
			}
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 284;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 807;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 873;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead)
			&& lookahead != ';' && lookahead != '<' && (lookahead < '>'
				|| ']' < lookahead) && (lookahead < '_' || '}' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 914:
		result = true;
		lexer->result_symbol = aux_sym__multiline_variable_name_token1;
		lexer->mark_end(lexer);
		;
		{
			static const uint16_t map[] = {
				'\n', 744, '!', 672, '"', 788, '#', 816, '$', 781, '&', 489,
					'\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, '<', 610,
					'>', 617, '?', 761, '@', 942, '\\', 233, '_', 947, '`', 855,
					'|', 593,
			};
			for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
			{
				if (map[i] == lookahead)
				{
					state = map[i + 1];
					goto next_state;
				}
			}
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 286;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 807;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 873;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead)
			&& lookahead != ';' && lookahead != '<' && (lookahead < '>'
				|| ']' < lookahead) && (lookahead < '_' || '}' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 915:
		result = true;
		lexer->result_symbol = aux_sym__multiline_variable_name_token1;
		lexer->mark_end(lexer);
		;
		{
			static const uint16_t map[] = {
				'\n', 746, '!', 672, '"', 788, '#', 816, '$', 781, '&', 489,
					'\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, '<', 608,
					'>', 617, '?', 761, '@', 942, '\\', 176, '_', 947, '`', 855,
					'|', 516,
			};
			for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
			{
				if (map[i] == lookahead)
				{
					state = map[i + 1];
					goto next_state;
				}
			}
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 288;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 807;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 873;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead)
			&& lookahead != ';' && lookahead != '<' && (lookahead < '>'
				|| ']' < lookahead) && (lookahead < '_' || '}' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 916:
		result = true;
		lexer->result_symbol = aux_sym__multiline_variable_name_token1;
		lexer->mark_end(lexer);
		;
		{
			static const uint16_t map[] = {
				'\n', 748, '!', 672, '"', 788, '#', 816, '$', 781, '&', 599,
					'\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, ';', 555,
					'<', 495, '>', 496, '?', 761, '@', 942, '\\', 100, '_', 947,
					'`', 855,
			};
			for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
			{
				if (map[i] == lookahead)
				{
					state = map[i + 1];
					goto next_state;
				}
			}
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 290;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 807;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 873;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead)
			&& (lookahead < '>' || ']' < lookahead) && (lookahead < '_'
				|| '}' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 917:
		result = true;
		lexer->result_symbol = aux_sym__multiline_variable_name_token1;
		lexer->mark_end(lexer);
		;
		{
			static const uint16_t map[] = {
				'\n', 750, '!', 672, '"', 788, '#', 816, '$', 781, '\'', 491,
					'(', 494, '*', 640, '-', 636, '0', 943, '<', 495, '>', 496,
					'?', 761, '@', 942, '\\', 112, '_', 947, '`', 855,
			};
			for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
			{
				if (map[i] == lookahead)
				{
					state = map[i + 1];
					goto next_state;
				}
			}
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 292;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 807;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 873;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead)
			&& lookahead != ';' && lookahead != '<' && (lookahead < '>'
				|| ']' < lookahead) && (lookahead < '_' || '}' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 918:
		result = true;
		lexer->result_symbol = aux_sym__multiline_variable_name_token1;
		lexer->mark_end(lexer);
		;
		{
			static const uint16_t map[] = {
				'!', 670, '"', 788, '#', 816, '$', 781, '%', 649, '&', 601,
					'\'', 491, '(', 654, '*', 638, '+', 630, '-', 633, '/', 644,
					'0', 943, '<', 607, '=', 560, '>', 616, '?', 761, '@', 942,
					'\\', 19, ']', 675, '^', 596, '_', 947, '`', 855, '|', 592,
			};
			for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
			{
				if (map[i] == lookahead)
				{
					state = map[i + 1];
					goto next_state;
				}
			}
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 402;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 807;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 873;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < ' ' || '+' < lookahead)
			&& (lookahead < ';' || '}' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 919:
		result = true;
		lexer->result_symbol = aux_sym__multiline_variable_name_token1;
		lexer->mark_end(lexer);
		;
		{
			static const uint16_t map[] = {
				'!', 672, '"', 788, '#', 816, '$', 781, '&', 508, '\'', 491,
					'(', 494, '*', 640, '-', 636, '0', 943, '<', 608, '>', 617,
					'?', 761, '@', 942, '\\', 74, '_', 947, '`', 855,
			};
			for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
			{
				if (map[i] == lookahead)
				{
					state = map[i + 1];
					goto next_state;
				}
			}
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 409;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 807;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 873;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead)
			&& lookahead != ';' && lookahead != '<' && (lookahead < '>'
				|| ']' < lookahead) && (lookahead < '_' || '}' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 920:
		result = true;
		lexer->result_symbol = aux_sym__multiline_variable_name_token1;
		lexer->mark_end(lexer);
		;
		{
			static const uint16_t map[] = {
				'!', 672, '"', 788, '#', 816, '$', 781, '&', 489, '\'', 491,
					'(', 654, '*', 640, '-', 636, '0', 943, '<', 609, '=', 952,
					'>', 617, '?', 761, '@', 942, '\\', 51, '_', 947, '`', 855,
					'|', 593,
			};
			for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
			{
				if (map[i] == lookahead)
				{
					state = map[i + 1];
					goto next_state;
				}
			}
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 410;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 807;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 873;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead)
			&& (lookahead < ';' || ']' < lookahead) && (lookahead < '_'
				|| '}' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 921:
		result = true;
		lexer->result_symbol = aux_sym__multiline_variable_name_token1;
		lexer->mark_end(lexer);
		;
		{
			static const uint16_t map[] = {
				'!', 672, '"', 788, '#', 816, '$', 781, '&', 489, '\'', 491,
					'(', 494, '*', 640, '-', 636, '0', 943, '<', 609, '=', 952,
					'>', 617, '?', 761, '@', 942, '\\', 171, '_', 947, '`', 855,
					'|', 593,
			};
			for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
			{
				if (map[i] == lookahead)
				{
					state = map[i + 1];
					goto next_state;
				}
			}
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 411;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 807;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 873;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead)
			&& (lookahead < ';' || ']' < lookahead) && (lookahead < '_'
				|| '}' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 922:
		result = true;
		lexer->result_symbol = aux_sym__multiline_variable_name_token1;
		lexer->mark_end(lexer);
		;
		{
			static const uint16_t map[] = {
				'!', 672, '"', 788, '#', 816, '$', 781, '&', 489, '\'', 491,
					'(', 494, '*', 640, '-', 636, '0', 943, '<', 609, '>', 617,
					'?', 761, '@', 942, '\\', 55, ']', 675, '_', 947, '`', 855,
					'|', 593,
			};
			for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
			{
				if (map[i] == lookahead)
				{
					state = map[i + 1];
					goto next_state;
				}
			}
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 412;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 807;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 873;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead)
			&& lookahead != ';' && lookahead != '<' && (lookahead < '>'
				|| ']' < lookahead) && (lookahead < '_' || '}' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 923:
		result = true;
		lexer->result_symbol = aux_sym__multiline_variable_name_token1;
		lexer->mark_end(lexer);
		;
		{
			static const uint16_t map[] = {
				'!', 672, '"', 788, '#', 816, '$', 781, '&', 489, '\'', 491,
					'(', 494, '*', 640, '-', 636, '0', 943, '<', 609, '>', 617,
					'?', 761, '@', 942, '\\', 62, '_', 947, '`', 855, '|', 593,
			};
			for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
			{
				if (map[i] == lookahead)
				{
					state = map[i + 1];
					goto next_state;
				}
			}
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 413;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 807;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 873;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead)
			&& lookahead != ';' && lookahead != '<' && (lookahead < '>'
				|| ']' < lookahead) && (lookahead < '_' || '}' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 924:
		result = true;
		lexer->result_symbol = aux_sym__multiline_variable_name_token1;
		lexer->mark_end(lexer);
		;
		{
			static const uint16_t map[] = {
				'!', 672, '"', 788, '#', 816, '$', 781, '&', 489, '\'', 491,
					'(', 494, '*', 640, '-', 636, '0', 943, '<', 610, '>', 617,
					'?', 761, '@', 942, '\\', 231, ']', 675, '_', 947, '`', 855,
					'|', 593,
			};
			for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
			{
				if (map[i] == lookahead)
				{
					state = map[i + 1];
					goto next_state;
				}
			}
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 414;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 807;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 873;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead)
			&& lookahead != ';' && lookahead != '<' && (lookahead < '>'
				|| ']' < lookahead) && (lookahead < '_' || '}' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 925:
		result = true;
		lexer->result_symbol = aux_sym__multiline_variable_name_token1;
		lexer->mark_end(lexer);
		;
		{
			static const uint16_t map[] = {
				'!', 672, '"', 788, '#', 816, '$', 781, '&', 489, '\'', 491,
					'(', 494, '*', 640, '-', 636, '0', 943, '<', 610, '>', 617,
					'?', 761, '@', 942, '\\', 235, '_', 947, '`', 855, '|', 593,
			};
			for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
			{
				if (map[i] == lookahead)
				{
					state = map[i + 1];
					goto next_state;
				}
			}
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 415;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 807;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 873;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead)
			&& lookahead != ';' && lookahead != '<' && (lookahead < '>'
				|| ']' < lookahead) && (lookahead < '_' || '}' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 926:
		result = true;
		lexer->result_symbol = aux_sym__multiline_variable_name_token1;
		lexer->mark_end(lexer);
		;
		{
			static const uint16_t map[] = {
				'!', 672, '"', 788, '#', 816, '$', 781, '\'', 491, '(', 494,
					')', 655, '*', 640, '-', 636, '0', 943, '<', 495, '>', 496,
					'?', 761, '@', 942, '\\', 110, '_', 947, '`', 855,
			};
			for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
			{
				if (map[i] == lookahead)
				{
					state = map[i + 1];
					goto next_state;
				}
			}
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 416;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 807;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 873;
			goto next_state;
		};
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead)
			&& lookahead != ';' && lookahead != '<' && (lookahead < '>'
				|| ']' < lookahead) && (lookahead < '_' || '}' < lookahead))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 927:
		result = true;
		lexer->result_symbol = aux_sym__multiline_variable_name_token1;
		lexer->mark_end(lexer);
		;
		{
			static const uint16_t map[] = {
				'!', 671, '"', 788, '#', 816, '$', 780, '%', 650, '&', 600, ')',
					655, '*', 639, '+', 631, '-', 634, '/', 645, '0', 945, '<',
					615, '=', 562, '>', 620, '?', 760, '@', 941, '\\', 67, '^',
					597, '_', 948, '|', 594,
			};
			for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
			{
				if (map[i] == lookahead)
				{
					state = map[i + 1];
					goto next_state;
				}
			}
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 427;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
		{
			state = 879;
			goto next_state;
		};
		return result;
		;
	case 928:
		result = true;
		lexer->result_symbol = aux_sym__multiline_variable_name_token1;
		lexer->mark_end(lexer);
		;
		{
			static const uint16_t map[] = {
				'!', 671, '"', 788, '#', 816, '$', 780, '%', 650, '&', 600, ')',
					499, '*', 639, '+', 631, '-', 634, '/', 645, '0', 945, '<',
					615, '=', 562, '>', 620, '?', 760, '@', 941, '\\', 181, '^',
					597, '_', 948, '|', 594,
			};
			for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
			{
				if (map[i] == lookahead)
				{
					state = map[i + 1];
					goto next_state;
				}
			}
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 428;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
		{
			state = 879;
			goto next_state;
		};
		return result;
		;
	case 929:
		result = true;
		lexer->result_symbol = aux_sym__multiline_variable_name_token1;
		lexer->mark_end(lexer);
		;
		{
			static const uint16_t map[] = {
				'!', 671, '"', 788, '#', 816, '$', 780, '%', 650, '&', 600, '*',
					639, '+', 631, '-', 634, '/', 645, '0', 945, ':', 762, '<',
					615, '=', 562, '>', 620, '?', 760, '@', 941, '\\', 64, '^',
					597, '_', 948, '|', 594,
			};
			for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
			{
				if (map[i] == lookahead)
				{
					state = map[i + 1];
					goto next_state;
				}
			}
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 429;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
		{
			state = 879;
			goto next_state;
		};
		return result;
		;
	case 930:
		result = true;
		lexer->result_symbol = aux_sym__multiline_variable_name_token1;
		lexer->mark_end(lexer);
		;
		{
			static const uint16_t map[] = {
				'!', 671, '"', 788, '#', 816, '$', 780, '%', 650, '&', 600, '*',
					639, '+', 631, '-', 634, '/', 645, '0', 945, '<', 615, '=',
					562, '>', 620, '?', 760, '@', 941, '\\', 60, ']', 675, '^',
					597, '_', 948, '|', 594,
			};
			for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
			{
				if (map[i] == lookahead)
				{
					state = map[i + 1];
					goto next_state;
				}
			}
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 430;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
		{
			state = 879;
			goto next_state;
		};
		return result;
		;
	case 931:
		result = true;
		lexer->result_symbol = aux_sym__multiline_variable_name_token1;
		lexer->mark_end(lexer);
		;
		{
			static const uint16_t map[] = {
				'!', 671, '"', 788, '#', 816, '$', 780, '%', 650, '&', 600, '*',
					639, '+', 631, '-', 634, '/', 645, '0', 945, '<', 615, '=',
					562, '>', 620, '?', 760, '@', 941, '\\', 178, ']', 509, '^',
					597, '_', 948, '|', 594,
			};
			for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
			{
				if (map[i] == lookahead)
				{
					state = map[i + 1];
					goto next_state;
				}
			}
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 431;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
		{
			state = 879;
			goto next_state;
		};
		return result;
		;
	case 932:
		result = true;
		lexer->result_symbol = aux_sym__multiline_variable_name_token1;
		lexer->mark_end(lexer);
		;
		{
			static const uint16_t map[] = {
				'!', 671, '"', 788, '#', 816, '$', 780, '%', 650, '&', 600, '*',
					639, '+', 631, '-', 634, '/', 645, '0', 945, '<', 615, '=',
					562, '>', 620, '?', 760, '@', 941, '\\', 69, '^', 597, '_',
					948, '|', 594,
			};
			for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
			{
				if (map[i] == lookahead)
				{
					state = map[i + 1];
					goto next_state;
				}
			}
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 432;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
		{
			state = 879;
			goto next_state;
		};
		return result;
		;
	case 933:
		result = true;
		lexer->result_symbol = aux_sym__multiline_variable_name_token1;
		lexer->mark_end(lexer);
		;
		{
			static const uint16_t map[] = {
				'!', 669, '"', 788, '#', 816, '$', 780, '&', 489, '*', 637, '-',
					632, '0', 945, '<', 612, '>', 618, '?', 760, '@', 941, '\\',
					108, ']', 675, '_', 948, '|', 593,
			};
			for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
			{
				if (map[i] == lookahead)
				{
					state = map[i + 1];
					goto next_state;
				}
			}
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 444;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
		{
			state = 879;
			goto next_state;
		};
		return result;
		;
	case 934:
		result = true;
		lexer->result_symbol = aux_sym__multiline_variable_name_token1;
		lexer->mark_end(lexer);
		;
		{
			static const uint16_t map[] = {
				'!', 669, '"', 788, '#', 816, '$', 780, '&', 489, '*', 637, '-',
					632, '0', 945, '<', 612, '>', 618, '?', 760, '@', 941, '\\',
					114, '_', 948, '|', 593,
			};
			for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
			{
				if (map[i] == lookahead)
				{
					state = map[i + 1];
					goto next_state;
				}
			}
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 445;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
		{
			state = 879;
			goto next_state;
		};
		return result;
		;
	case 935:
		result = true;
		lexer->result_symbol = aux_sym__multiline_variable_name_token1;
		lexer->mark_end(lexer);
		;
		{
			static const uint16_t map[] = {
				'!', 669, '"', 788, '#', 816, '$', 780, '&', 489, '*', 637, '-',
					632, '0', 945, '<', 613, '>', 618, '?', 760, '@', 941, '\\',
					195, ']', 675, '_', 948, '|', 593,
			};
			for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
			{
				if (map[i] == lookahead)
				{
					state = map[i + 1];
					goto next_state;
				}
			}
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 446;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
		{
			state = 879;
			goto next_state;
		};
		return result;
		;
	case 936:
		result = true;
		lexer->result_symbol = aux_sym__multiline_variable_name_token1;
		lexer->mark_end(lexer);
		;
		{
			static const uint16_t map[] = {
				'!', 669, '"', 788, '#', 816, '$', 780, '&', 489, '*', 637, '-',
					632, '0', 945, '<', 613, '>', 618, '?', 760, '@', 941, '\\',
					197, '_', 948, '|', 593,
			};
			for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
			{
				if (map[i] == lookahead)
				{
					state = map[i + 1];
					goto next_state;
				}
			}
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 447;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
		{
			state = 879;
			goto next_state;
		};
		return result;
		;
	case 937:
		result = true;
		lexer->result_symbol = aux_sym__multiline_variable_name_token1;
		lexer->mark_end(lexer);
		;
		{
			static const uint16_t map[] = {
				'!', 669, '"', 788, '#', 816, '$', 780, ')', 655, '*', 637, '-',
					632, '0', 945, '?', 760, '@', 941, '\\', 132, '_', 948, '|',
					590,
			};
			for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
			{
				if (map[i] == lookahead)
				{
					state = map[i + 1];
					goto next_state;
				}
			}
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 448;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
		{
			state = 879;
			goto next_state;
		};
		return result;
		;
	case 938:
		result = true;
		lexer->result_symbol = aux_sym__multiline_variable_name_token1;
		lexer->mark_end(lexer);
		;
		{
			static const uint16_t map[] = {
				'!', 669, '"', 788, '#', 816, '$', 780, '*', 637, '-', 632, '0',
					945, '?', 760, '@', 941, '\\', 134, '_', 948,
			};
			for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
			{
				if (map[i] == lookahead)
				{
					state = map[i + 1];
					goto next_state;
				}
			}
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 450;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
		{
			state = 879;
			goto next_state;
		};
		return result;
		;
	case 939:
		result = true;
		lexer->result_symbol = aux_sym__multiline_variable_name_token1;
		lexer->mark_end(lexer);
		;
		{
			static const uint16_t map[] = {
				'!', 669, '#', 816, '$', 780, '*', 637, '-', 632, '0', 945, '?',
					760, '@', 941, '\\', 138, '_', 948,
			};
			for (uint32_t i = 0; i < sizeof(map) / sizeof(map[0]); i += 2)
			{
				if (map[i] == lookahead)
				{
					state = map[i + 1];
					goto next_state;
				}
			}
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 453;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
		{
			state = 879;
			goto next_state;
		};
		return result;
		;
	case 940:
		result = true;
		lexer->result_symbol = aux_sym__multiline_variable_name_token1;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\\')
		{
			state = 16;
			goto next_state;
		};
		if (('0' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || lookahead == '_' || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 940;
			goto next_state;
		};
		return result;
		;
	case 941:
		result = true;
		lexer->result_symbol = anon_sym_AT2;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 942:
		result = true;
		lexer->result_symbol = anon_sym_AT2;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\\')
		{
			state = 518;
			goto next_state;
		};
		if ((!eof && set_contains(sym__comment_word_character_set_1, 12,
					lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 943:
		result = true;
		lexer->result_symbol = anon_sym_0;
		lexer->mark_end(lexer);
		;
		if (lookahead == '#')
		{
			state = 814;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 17;
			goto next_state;
		};
		if (lookahead == 'x')
		{
			state = 872;
			goto next_state;
		};
		if (('0' <= lookahead && lookahead <= '9'))
		{
			state = 807;
			goto next_state;
		};
		if (('A' <= lookahead && lookahead <= 'Z') || lookahead == '_'
			|| ('a' <= lookahead && lookahead <= 'z'))
		{
			state = 873;
			goto next_state;
		};
		if ((!eof && set_contains(sym_word_character_set_1, 11, lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 944:
		result = true;
		lexer->result_symbol = anon_sym_0;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\\')
		{
			state = 518;
			goto next_state;
		};
		if ((!eof && set_contains(sym__comment_word_character_set_1, 12,
					lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 945:
		result = true;
		lexer->result_symbol = anon_sym_0;
		lexer->mark_end(lexer);
		;
		if (('0' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || lookahead == '_' || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 879;
			goto next_state;
		};
		return result;
		;
	case 946:
		result = true;
		lexer->result_symbol = anon_sym__;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\\')
		{
			state = 518;
			goto next_state;
		};
		if ((!eof && set_contains(sym__comment_word_character_set_1, 12,
					lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 947:
		result = true;
		lexer->result_symbol = anon_sym__;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\\')
		{
			state = 17;
			goto next_state;
		};
		if (('0' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || lookahead == '_' || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 873;
			goto next_state;
		};
		if ((!eof && set_contains(sym__comment_word_character_set_1, 12,
					lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 948:
		result = true;
		lexer->result_symbol = anon_sym__;
		lexer->mark_end(lexer);
		;
		if (('0' <= lookahead && lookahead <= '9') || ('A' <= lookahead
				&& lookahead <= 'Z') || lookahead == '_' || ('a' <= lookahead
				&& lookahead <= 'z'))
		{
			state = 879;
			goto next_state;
		};
		return result;
		;
	case 949:
		result = true;
		lexer->result_symbol = sym_word;
		lexer->mark_end(lexer);
		;
		if (lookahead == '.')
		{
			state = 777;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 518;
			goto next_state;
		};
		if ((!eof && set_contains(sym__comment_word_character_set_1, 12,
					lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 950:
		result = true;
		lexer->result_symbol = sym_word;
		lexer->mark_end(lexer);
		;
		if (lookahead == '0')
		{
			state = 803;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 518;
			goto next_state;
		};
		if (('1' <= lookahead && lookahead <= '9'))
		{
			state = 805;
			goto next_state;
		};
		if ((!eof && set_contains(sym__comment_word_character_set_1, 12,
					lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 951:
		result = true;
		lexer->result_symbol = sym_word;
		lexer->mark_end(lexer);
		;
		if (lookahead == '=')
		{
			state = 606;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 518;
			goto next_state;
		};
		if ((!eof && set_contains(sym__comment_word_character_set_1, 12,
					lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 952:
		result = true;
		lexer->result_symbol = sym_word;
		lexer->mark_end(lexer);
		;
		if (lookahead == '=')
		{
			state = 604;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			state = 518;
			goto next_state;
		};
		if (lookahead == '~')
		{
			state = 679;
			goto next_state;
		};
		if ((!eof && set_contains(sym__comment_word_character_set_1, 12,
					lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 953:
		result = true;
		lexer->result_symbol = sym_word;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\\')
		{
			state = 518;
			goto next_state;
		};
		if (lookahead == 'a')
		{
			state = 954;
			goto next_state;
		};
		if ((!eof && set_contains(sym__comment_word_character_set_1, 12,
					lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 954:
		result = true;
		lexer->result_symbol = sym_word;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\\')
		{
			state = 518;
			goto next_state;
		};
		if (lookahead == 'c')
		{
			state = 659;
			goto next_state;
		};
		if ((!eof && set_contains(sym__comment_word_character_set_1, 12,
					lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 955:
		result = true;
		lexer->result_symbol = sym_word;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\\')
		{
			state = 518;
			goto next_state;
		};
		if (lookahead == 'n')
		{
			state = 549;
			goto next_state;
		};
		if ((!eof && set_contains(sym__comment_word_character_set_1, 12,
					lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 956:
		result = true;
		lexer->result_symbol = sym_word;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\\')
		{
			state = 518;
			goto next_state;
		};
		if (lookahead == 's')
		{
			state = 953;
			goto next_state;
		};
		if ((!eof && set_contains(sym__comment_word_character_set_1, 12,
					lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 957:
		result = true;
		lexer->result_symbol = sym_word;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\\')
		{
			state = 518;
			goto next_state;
		};
		if (('0' <= lookahead && lookahead <= '9'))
		{
			state = 805;
			goto next_state;
		};
		if ((!eof && set_contains(sym__comment_word_character_set_1, 12,
					lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	case 958:
		result = true;
		lexer->result_symbol = sym_word;
		lexer->mark_end(lexer);
		;
		if (lookahead == '\\')
		{
			state = 518;
			goto next_state;
		};
		if ((!eof && set_contains(sym__comment_word_character_set_1, 12,
					lookahead)))
		{
			state = 958;
			goto next_state;
		};
		return result;
		;
	default:
		return false;
	}
}

static
# 15361 "parser.c" 3 4
	_Bool
# 15361 "parser.c"
	ts_lex_keywords(TSLexer *lexer, TSStateId state)
{
	int32_t	lookahead;

# 15362 "parser.c" 3 4
	_Bool
# 15362 "parser.c"
		result = false;
# 15362 "parser.c" 3 4
	_Bool
# 15362 "parser.c"
		skip = false;
	__attribute__((unused))
# 15362 "parser.c" 3 4
	_Bool
# 15362 "parser.c"
		eof = false;
	goto start;
next_state:
	lexer->advance(lexer, skip);
start:
	skip = false;
	lookahead = lexer->lookahead;
	;
	eof = lexer->eof(lexer);
	switch (state)
	{
	case 0:
		if (lookahead == 'A')
		{
			state = 1;
			goto next_state;
		};
		if (lookahead == 'E')
		{
			state = 2;
			goto next_state;
		};
		if (lookahead == 'K')
		{
			state = 3;
			goto next_state;
		};
		if (lookahead == 'L')
		{
			state = 4;
			goto next_state;
		};
		if (lookahead == 'P')
		{
			state = 5;
			goto next_state;
		};
		if (lookahead == 'Q')
		{
			state = 6;
			goto next_state;
		};
		if (lookahead == 'U')
		{
			state = 7;
			goto next_state;
		};
		if (lookahead == '\\')
		{
			skip = true;
			state = 8;
			goto next_state;
		};
		if (lookahead == 'a')
		{
			state = 9;
			goto next_state;
		};
		if (lookahead == 'c')
		{
			state = 10;
			goto next_state;
		};
		if (lookahead == 'd')
		{
			state = 11;
			goto next_state;
		};
		if (lookahead == 'e')
		{
			state = 12;
			goto next_state;
		};
		if (lookahead == 'f')
		{
			state = 13;
			goto next_state;
		};
		if (lookahead == 'i')
		{
			state = 14;
			goto next_state;
		};
		if (lookahead == 'k')
		{
			state = 15;
			goto next_state;
		};
		if (lookahead == 'l')
		{
			state = 16;
			goto next_state;
		};
		if (lookahead == 'r')
		{
			state = 17;
			goto next_state;
		};
		if (lookahead == 's')
		{
			state = 18;
			goto next_state;
		};
		if (lookahead == 't')
		{
			state = 19;
			goto next_state;
		};
		if (lookahead == 'u')
		{
			state = 20;
			goto next_state;
		};
		if (lookahead == 'w')
		{
			state = 21;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 22;
			goto next_state;
		};
		return result;
		;
	case 1:
		result = true;
		lexer->result_symbol = anon_sym_A;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 2:
		result = true;
		lexer->result_symbol = anon_sym_E;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 3:
		result = true;
		lexer->result_symbol = anon_sym_K;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 4:
		result = true;
		lexer->result_symbol = anon_sym_L;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 5:
		result = true;
		lexer->result_symbol = anon_sym_P;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 6:
		result = true;
		lexer->result_symbol = anon_sym_Q;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 7:
		result = true;
		lexer->result_symbol = anon_sym_U;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 8:
		if (lookahead == '\r')
		{
			skip = true;
			state = 23;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
		{
			skip = true;
			state = 22;
			goto next_state;
		};
		return result;
		;
	case 9:
		result = true;
		lexer->result_symbol = anon_sym_a;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 10:
		if (lookahead == 'a')
		{
			state = 24;
			goto next_state;
		};
		return result;
		;
	case 11:
		if (lookahead == 'e')
		{
			state = 25;
			goto next_state;
		};
		if (lookahead == 'o')
		{
			state = 26;
			goto next_state;
		};
		return result;
		;
	case 12:
		if (lookahead == 'l')
		{
			state = 27;
			goto next_state;
		};
		if (lookahead == 'x')
		{
			state = 28;
			goto next_state;
		};
		return result;
		;
	case 13:
		if (lookahead == 'i')
		{
			state = 29;
			goto next_state;
		};
		if (lookahead == 'o')
		{
			state = 30;
			goto next_state;
		};
		if (lookahead == 'u')
		{
			state = 31;
			goto next_state;
		};
		return result;
		;
	case 14:
		if (lookahead == 'f')
		{
			state = 32;
			goto next_state;
		};
		return result;
		;
	case 15:
		result = true;
		lexer->result_symbol = anon_sym_k;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 16:
		if (lookahead == 'o')
		{
			state = 33;
			goto next_state;
		};
		return result;
		;
	case 17:
		if (lookahead == 'e')
		{
			state = 34;
			goto next_state;
		};
		return result;
		;
	case 18:
		if (lookahead == 'e')
		{
			state = 35;
			goto next_state;
		};
		return result;
		;
	case 19:
		if (lookahead == 'h')
		{
			state = 36;
			goto next_state;
		};
		if (lookahead == 'y')
		{
			state = 37;
			goto next_state;
		};
		return result;
		;
	case 20:
		result = true;
		lexer->result_symbol = anon_sym_u;
		lexer->mark_end(lexer);
		;
		if (lookahead == 'n')
		{
			state = 38;
			goto next_state;
		};
		return result;
		;
	case 21:
		if (lookahead == 'h')
		{
			state = 39;
			goto next_state;
		};
		return result;
		;
	case 22:
		if (lookahead == '\\')
		{
			skip = true;
			state = 8;
			goto next_state;
		};
		if (lookahead == 'c')
		{
			state = 10;
			goto next_state;
		};
		if (lookahead == 'd')
		{
			state = 11;
			goto next_state;
		};
		if (lookahead == 'e')
		{
			state = 12;
			goto next_state;
		};
		if (lookahead == 'f')
		{
			state = 13;
			goto next_state;
		};
		if (lookahead == 'i')
		{
			state = 14;
			goto next_state;
		};
		if (lookahead == 'l')
		{
			state = 16;
			goto next_state;
		};
		if (lookahead == 'r')
		{
			state = 17;
			goto next_state;
		};
		if (lookahead == 's')
		{
			state = 18;
			goto next_state;
		};
		if (lookahead == 't')
		{
			state = 19;
			goto next_state;
		};
		if (lookahead == 'u')
		{
			state = 40;
			goto next_state;
		};
		if (lookahead == 'w')
		{
			state = 21;
			goto next_state;
		};
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
		{
			skip = true;
			state = 22;
			goto next_state;
		};
		return result;
		;
	case 23:
		if (lookahead == '\n')
		{
			skip = true;
			state = 22;
			goto next_state;
		};
		return result;
		;
	case 24:
		if (lookahead == 's')
		{
			state = 41;
			goto next_state;
		};
		return result;
		;
	case 25:
		if (lookahead == 'c')
		{
			state = 42;
			goto next_state;
		};
		return result;
		;
	case 26:
		result = true;
		lexer->result_symbol = anon_sym_do;
		lexer->mark_end(lexer);
		;
		if (lookahead == 'n')
		{
			state = 43;
			goto next_state;
		};
		return result;
		;
	case 27:
		if (lookahead == 'i')
		{
			state = 44;
			goto next_state;
		};
		if (lookahead == 's')
		{
			state = 45;
			goto next_state;
		};
		return result;
		;
	case 28:
		if (lookahead == 'p')
		{
			state = 46;
			goto next_state;
		};
		return result;
		;
	case 29:
		result = true;
		lexer->result_symbol = anon_sym_fi;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 30:
		if (lookahead == 'r')
		{
			state = 47;
			goto next_state;
		};
		return result;
		;
	case 31:
		if (lookahead == 'n')
		{
			state = 48;
			goto next_state;
		};
		return result;
		;
	case 32:
		result = true;
		lexer->result_symbol = anon_sym_if;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 33:
		if (lookahead == 'c')
		{
			state = 49;
			goto next_state;
		};
		return result;
		;
	case 34:
		if (lookahead == 'a')
		{
			state = 50;
			goto next_state;
		};
		return result;
		;
	case 35:
		if (lookahead == 'l')
		{
			state = 51;
			goto next_state;
		};
		return result;
		;
	case 36:
		if (lookahead == 'e')
		{
			state = 52;
			goto next_state;
		};
		return result;
		;
	case 37:
		if (lookahead == 'p')
		{
			state = 53;
			goto next_state;
		};
		return result;
		;
	case 38:
		if (lookahead == 's')
		{
			state = 54;
			goto next_state;
		};
		if (lookahead == 't')
		{
			state = 55;
			goto next_state;
		};
		return result;
		;
	case 39:
		if (lookahead == 'i')
		{
			state = 56;
			goto next_state;
		};
		return result;
		;
	case 40:
		if (lookahead == 'n')
		{
			state = 38;
			goto next_state;
		};
		return result;
		;
	case 41:
		if (lookahead == 'e')
		{
			state = 57;
			goto next_state;
		};
		return result;
		;
	case 42:
		if (lookahead == 'l')
		{
			state = 58;
			goto next_state;
		};
		return result;
		;
	case 43:
		if (lookahead == 'e')
		{
			state = 59;
			goto next_state;
		};
		return result;
		;
	case 44:
		if (lookahead == 'f')
		{
			state = 60;
			goto next_state;
		};
		return result;
		;
	case 45:
		if (lookahead == 'e')
		{
			state = 61;
			goto next_state;
		};
		return result;
		;
	case 46:
		if (lookahead == 'o')
		{
			state = 62;
			goto next_state;
		};
		return result;
		;
	case 47:
		result = true;
		lexer->result_symbol = anon_sym_for;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 48:
		if (lookahead == 'c')
		{
			state = 63;
			goto next_state;
		};
		return result;
		;
	case 49:
		if (lookahead == 'a')
		{
			state = 64;
			goto next_state;
		};
		return result;
		;
	case 50:
		if (lookahead == 'd')
		{
			state = 65;
			goto next_state;
		};
		return result;
		;
	case 51:
		if (lookahead == 'e')
		{
			state = 66;
			goto next_state;
		};
		return result;
		;
	case 52:
		if (lookahead == 'n')
		{
			state = 67;
			goto next_state;
		};
		return result;
		;
	case 53:
		if (lookahead == 'e')
		{
			state = 68;
			goto next_state;
		};
		return result;
		;
	case 54:
		if (lookahead == 'e')
		{
			state = 69;
			goto next_state;
		};
		return result;
		;
	case 55:
		if (lookahead == 'i')
		{
			state = 70;
			goto next_state;
		};
		return result;
		;
	case 56:
		if (lookahead == 'l')
		{
			state = 71;
			goto next_state;
		};
		return result;
		;
	case 57:
		result = true;
		lexer->result_symbol = anon_sym_case;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 58:
		if (lookahead == 'a')
		{
			state = 72;
			goto next_state;
		};
		return result;
		;
	case 59:
		result = true;
		lexer->result_symbol = anon_sym_done;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 60:
		result = true;
		lexer->result_symbol = anon_sym_elif;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 61:
		result = true;
		lexer->result_symbol = anon_sym_else;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 62:
		if (lookahead == 'r')
		{
			state = 73;
			goto next_state;
		};
		return result;
		;
	case 63:
		if (lookahead == 't')
		{
			state = 74;
			goto next_state;
		};
		return result;
		;
	case 64:
		if (lookahead == 'l')
		{
			state = 75;
			goto next_state;
		};
		return result;
		;
	case 65:
		if (lookahead == 'o')
		{
			state = 76;
			goto next_state;
		};
		return result;
		;
	case 66:
		if (lookahead == 'c')
		{
			state = 77;
			goto next_state;
		};
		return result;
		;
	case 67:
		result = true;
		lexer->result_symbol = anon_sym_then;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 68:
		if (lookahead == 's')
		{
			state = 78;
			goto next_state;
		};
		return result;
		;
	case 69:
		if (lookahead == 't')
		{
			state = 79;
			goto next_state;
		};
		return result;
		;
	case 70:
		if (lookahead == 'l')
		{
			state = 80;
			goto next_state;
		};
		return result;
		;
	case 71:
		if (lookahead == 'e')
		{
			state = 81;
			goto next_state;
		};
		return result;
		;
	case 72:
		if (lookahead == 'r')
		{
			state = 82;
			goto next_state;
		};
		return result;
		;
	case 73:
		if (lookahead == 't')
		{
			state = 83;
			goto next_state;
		};
		return result;
		;
	case 74:
		if (lookahead == 'i')
		{
			state = 84;
			goto next_state;
		};
		return result;
		;
	case 75:
		result = true;
		lexer->result_symbol = anon_sym_local;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 76:
		if (lookahead == 'n')
		{
			state = 85;
			goto next_state;
		};
		return result;
		;
	case 77:
		if (lookahead == 't')
		{
			state = 86;
			goto next_state;
		};
		return result;
		;
	case 78:
		if (lookahead == 'e')
		{
			state = 87;
			goto next_state;
		};
		return result;
		;
	case 79:
		result = true;
		lexer->result_symbol = anon_sym_unset;
		lexer->mark_end(lexer);
		;
		if (lookahead == 'e')
		{
			state = 88;
			goto next_state;
		};
		return result;
		;
	case 80:
		result = true;
		lexer->result_symbol = anon_sym_until;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 81:
		result = true;
		lexer->result_symbol = anon_sym_while;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 82:
		if (lookahead == 'e')
		{
			state = 89;
			goto next_state;
		};
		return result;
		;
	case 83:
		result = true;
		lexer->result_symbol = anon_sym_export;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 84:
		if (lookahead == 'o')
		{
			state = 90;
			goto next_state;
		};
		return result;
		;
	case 85:
		if (lookahead == 'l')
		{
			state = 91;
			goto next_state;
		};
		return result;
		;
	case 86:
		result = true;
		lexer->result_symbol = anon_sym_select;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 87:
		if (lookahead == 't')
		{
			state = 92;
			goto next_state;
		};
		return result;
		;
	case 88:
		if (lookahead == 'n')
		{
			state = 93;
			goto next_state;
		};
		return result;
		;
	case 89:
		result = true;
		lexer->result_symbol = anon_sym_declare;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 90:
		if (lookahead == 'n')
		{
			state = 94;
			goto next_state;
		};
		return result;
		;
	case 91:
		if (lookahead == 'y')
		{
			state = 95;
			goto next_state;
		};
		return result;
		;
	case 92:
		result = true;
		lexer->result_symbol = anon_sym_typeset;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 93:
		if (lookahead == 'v')
		{
			state = 96;
			goto next_state;
		};
		return result;
		;
	case 94:
		result = true;
		lexer->result_symbol = anon_sym_function;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 95:
		result = true;
		lexer->result_symbol = anon_sym_readonly;
		lexer->mark_end(lexer);
		;
		return result;
		;
	case 96:
		result = true;
		lexer->result_symbol = anon_sym_unsetenv;
		lexer->mark_end(lexer);
		;
		return result;
		;
	default:
		return false;
	}
}
