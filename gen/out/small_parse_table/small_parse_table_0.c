/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_0.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_0(t_small_parse_table_array *v)
{
	v->a[0] = 28;
	v->a[1] = actions(3);
	v->a[2] = 1;
	v->a[3] = actions(415);
	v->a[4] = 1;
	v->a[5] = actions(1410);
	v->a[6] = 1;
	v->a[7] = actions(1412);
	v->a[8] = 1;
	v->a[9] = actions(1414);
	v->a[10] = 1;
	v->a[11] = actions(1416);
	v->a[12] = 1;
	v->a[13] = actions(1418);
	v->a[14] = 1;
	v->a[15] = actions(1420);
	v->a[16] = 1;
	v->a[17] = actions(1422);
	v->a[18] = 1;
	v->a[19] = actions(1424);
	small_parse_table_1(v);
}

void	small_parse_table_1(t_small_parse_table_array *v)
{
	v->a[20] = 1;
	v->a[21] = actions(1426);
	v->a[22] = 1;
	v->a[23] = actions(1428);
	v->a[24] = 1;
	v->a[25] = actions(1430);
	v->a[26] = 1;
	v->a[27] = actions(1434);
	v->a[28] = 1;
	v->a[29] = actions(1436);
	v->a[30] = 1;
	v->a[31] = actions(1438);
	v->a[32] = 1;
	v->a[33] = state(540);
	v->a[34] = 1;
	v->a[35] = state(1045);
	v->a[36] = 1;
	v->a[37] = state(1181);
	v->a[38] = 1;
	v->a[39] = state(1182);
	small_parse_table_2(v);
}

void	small_parse_table_2(t_small_parse_table_array *v)
{
	v->a[40] = 1;
	v->a[41] = state(4991);
	v->a[42] = 1;
	v->a[43] = actions(1402);
	v->a[44] = 2;
	v->a[45] = actions(1406);
	v->a[46] = 2;
	v->a[47] = actions(1408);
	v->a[48] = 2;
	v->a[49] = actions(1432);
	v->a[50] = 2;
	v->a[51] = actions(1400);
	v->a[52] = 3;
	v->a[53] = state(874);
	v->a[54] = 9;
	v->a[55] = actions(1404);
	v->a[56] = 22;
	v->a[120] = 28;
	v->a[121] = actions(3);
	v->a[122] = 1;
	small_parse_table_3(v);
}

void	small_parse_table_3(t_small_parse_table_array *v)
{
	v->a[123] = actions(415);
	v->a[124] = 1;
	v->a[125] = actions(1410);
	v->a[126] = 1;
	v->a[127] = actions(1412);
	v->a[128] = 1;
	v->a[129] = actions(1414);
	v->a[130] = 1;
	v->a[131] = actions(1416);
	v->a[132] = 1;
	v->a[133] = actions(1418);
	v->a[134] = 1;
	v->a[135] = actions(1420);
	v->a[136] = 1;
	v->a[137] = actions(1422);
	v->a[138] = 1;
	v->a[139] = actions(1424);
	v->a[140] = 1;
	v->a[141] = actions(1426);
	v->a[142] = 1;
	small_parse_table_4(v);
}

void	small_parse_table_4(t_small_parse_table_array *v)
{
	v->a[143] = actions(1428);
	v->a[144] = 1;
	v->a[145] = actions(1430);
	v->a[146] = 1;
	v->a[147] = actions(1434);
	v->a[148] = 1;
	v->a[149] = actions(1436);
	v->a[150] = 1;
	v->a[151] = actions(1438);
	v->a[152] = 1;
	v->a[153] = state(535);
	v->a[154] = 1;
	v->a[155] = state(1045);
	v->a[156] = 1;
	v->a[157] = state(1181);
	v->a[158] = 1;
	v->a[159] = state(1182);
	v->a[160] = 1;
	v->a[161] = state(4977);
	v->a[162] = 1;
	small_parse_table_5(v);
}

/* EOF small_parse_table_0.c */
