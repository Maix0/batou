/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs0.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_state_ids0(t_state_ids *v)
{
	v->arr[0] = 0;
	v->arr[1] = 1;
	v->arr[2] = 2;
	v->arr[3] = 2;
	v->arr[4] = 4;
	v->arr[5] = 4;
	v->arr[6] = 4;
	v->arr[7] = 4;
	v->arr[8] = 4;
	v->arr[9] = 4;
	v->arr[10] = 4;
	v->arr[11] = 4;
	v->arr[12] = 12;
	v->arr[13] = 13;
	v->arr[14] = 13;
	init_state_ids1(v);
}

void	init_state_ids1(t_state_ids *v)
{
	v->arr[15] = 13;
	v->arr[16] = 12;
	v->arr[17] = 17;
	v->arr[18] = 17;
	v->arr[19] = 17;
	v->arr[20] = 13;
	v->arr[21] = 17;
	v->arr[22] = 22;
	v->arr[23] = 23;
	v->arr[24] = 24;
	v->arr[25] = 25;
	v->arr[26] = 26;
	v->arr[27] = 27;
	v->arr[28] = 28;
	v->arr[29] = 29;
	init_state_ids2(v);
}

void	init_state_ids2(t_state_ids *v)
{
	v->arr[30] = 30;
	v->arr[31] = 31;
	v->arr[32] = 32;
	v->arr[33] = 33;
	v->arr[34] = 34;
	v->arr[35] = 35;
	v->arr[36] = 36;
	v->arr[37] = 37;
	v->arr[38] = 38;
	v->arr[39] = 39;
	v->arr[40] = 40;
	v->arr[41] = 41;
	v->arr[42] = 42;
	v->arr[43] = 43;
	v->arr[44] = 44;
	init_state_ids3(v);
}

void	init_state_ids3(t_state_ids *v)
{
	v->arr[45] = 45;
	v->arr[46] = 46;
	v->arr[47] = 47;
	v->arr[48] = 48;
	v->arr[49] = 49;
	v->arr[50] = 50;
	v->arr[51] = 50;
	v->arr[52] = 49;
	v->arr[53] = 49;
	v->arr[54] = 50;
	v->arr[55] = 49;
	v->arr[56] = 49;
	v->arr[57] = 49;
	v->arr[58] = 49;
	v->arr[59] = 50;
	init_state_ids4(v);
}

void	init_state_ids4(t_state_ids *v)
{
	v->arr[60] = 49;
	v->arr[61] = 61;
	v->arr[62] = 34;
	v->arr[63] = 63;
	v->arr[64] = 64;
	v->arr[65] = 61;
	v->arr[66] = 66;
	v->arr[67] = 67;
	v->arr[68] = 68;
	v->arr[69] = 64;
	v->arr[70] = 70;
	v->arr[71] = 71;
	v->arr[72] = 63;
	v->arr[73] = 61;
	v->arr[74] = 68;
	init_state_ids5(v);
}

// file funcs0.c
