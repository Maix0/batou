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
	v[0] = 0;
	v[1] = 1;
	v[2] = 2;
	v[3] = 2;
	v[4] = 4;
	v[5] = 4;
	v[6] = 4;
	v[7] = 4;
	v[8] = 4;
	v[9] = 4;
	v[10] = 4;
	v[11] = 4;
	v[12] = 12;
	v[13] = 13;
	v[14] = 13;
	init_state_ids1(v);
}

void	init_state_ids1(t_state_ids *v)
{
	v[15] = 13;
	v[16] = 12;
	v[17] = 17;
	v[18] = 17;
	v[19] = 17;
	v[20] = 13;
	v[21] = 17;
	v[22] = 22;
	v[23] = 23;
	v[24] = 24;
	v[25] = 25;
	v[26] = 26;
	v[27] = 27;
	v[28] = 28;
	v[29] = 29;
	init_state_ids2(v);
}

void	init_state_ids2(t_state_ids *v)
{
	v[30] = 30;
	v[31] = 31;
	v[32] = 32;
	v[33] = 33;
	v[34] = 34;
	v[35] = 35;
	v[36] = 36;
	v[37] = 37;
	v[38] = 38;
	v[39] = 39;
	v[40] = 40;
	v[41] = 41;
	v[42] = 42;
	v[43] = 43;
	v[44] = 44;
	init_state_ids3(v);
}

void	init_state_ids3(t_state_ids *v)
{
	v[45] = 45;
	v[46] = 46;
	v[47] = 47;
	v[48] = 48;
	v[49] = 49;
	v[50] = 50;
	v[51] = 50;
	v[52] = 49;
	v[53] = 49;
	v[54] = 50;
	v[55] = 49;
	v[56] = 49;
	v[57] = 49;
	v[58] = 49;
	v[59] = 50;
	init_state_ids4(v);
}

void	init_state_ids4(t_state_ids *v)
{
	v[60] = 49;
	v[61] = 61;
	v[62] = 34;
	v[63] = 63;
	v[64] = 64;
	v[65] = 61;
	v[66] = 66;
	v[67] = 67;
	v[68] = 68;
	v[69] = 64;
	v[70] = 70;
	v[71] = 71;
	v[72] = 63;
	v[73] = 61;
	v[74] = 68;
	init_state_ids5(v);
}

// file funcs0.c