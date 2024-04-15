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

void	lex_modes0(t_lex_modes *v)
{
	v->arr[0] = (t_lex_mode){.lex_state = 0, .external_lex_state = 1};
	v->arr[1] = (t_lex_mode){.lex_state = 546, .external_lex_state = 2};
	v->arr[2] = (t_lex_mode){.lex_state = 418, .external_lex_state = 2};
	v->arr[3] = (t_lex_mode){.lex_state = 418, .external_lex_state = 2};
	v->arr[4] = (t_lex_mode){.lex_state = 419, .external_lex_state = 3};
	v->arr[5] = (t_lex_mode){.lex_state = 419, .external_lex_state = 3};
	v->arr[6] = (t_lex_mode){.lex_state = 419, .external_lex_state = 3};
	v->arr[7] = (t_lex_mode){.lex_state = 419, .external_lex_state = 3};
	v->arr[8] = (t_lex_mode){.lex_state = 419, .external_lex_state = 3};
	v->arr[9] = (t_lex_mode){.lex_state = 419, .external_lex_state = 3};
	v->arr[10] = (t_lex_mode){.lex_state = 419, .external_lex_state = 3};
	v->arr[11] = (t_lex_mode){.lex_state = 419, .external_lex_state = 3};
	v->arr[12] = (t_lex_mode){.lex_state = 6, .external_lex_state = 4};
	v->arr[13] = (t_lex_mode){.lex_state = 546, .external_lex_state = 2};
	v->arr[14] = (t_lex_mode){.lex_state = 546, .external_lex_state = 2};
	lex_modes1(v);
}

void	lex_modes1(t_lex_modes *v)
{
	v->arr[15] = (t_lex_mode){.lex_state = 546, .external_lex_state = 2};
	v->arr[16] = (t_lex_mode){.lex_state = 403, .external_lex_state = 5};
	v->arr[17] = (t_lex_mode){.lex_state = 546, .external_lex_state = 2};
	v->arr[18] = (t_lex_mode){.lex_state = 546, .external_lex_state = 2};
	v->arr[19] = (t_lex_mode){.lex_state = 546, .external_lex_state = 2};
	v->arr[20] = (t_lex_mode){.lex_state = 546, .external_lex_state = 2};
	v->arr[21] = (t_lex_mode){.lex_state = 546, .external_lex_state = 2};
	v->arr[22] = (t_lex_mode){.lex_state = 421, .external_lex_state = 6};
	v->arr[23] = (t_lex_mode){.lex_state = 421, .external_lex_state = 6};
	v->arr[24] = (t_lex_mode){.lex_state = 421, .external_lex_state = 6};
	v->arr[25] = (t_lex_mode){.lex_state = 421, .external_lex_state = 6};
	v->arr[26] = (t_lex_mode){.lex_state = 421, .external_lex_state = 6};
	v->arr[27] = (t_lex_mode){.lex_state = 421, .external_lex_state = 6};
	v->arr[28] = (t_lex_mode){.lex_state = 421, .external_lex_state = 6};
	v->arr[29] = (t_lex_mode){.lex_state = 421, .external_lex_state = 6};
	lex_modes2(v);
}

void	lex_modes2(t_lex_modes *v)
{
	v->arr[30] = (t_lex_mode){.lex_state = 421, .external_lex_state = 6};
	v->arr[31] = (t_lex_mode){.lex_state = 421, .external_lex_state = 6};
	v->arr[32] = (t_lex_mode){.lex_state = 421, .external_lex_state = 6};
	v->arr[33] = (t_lex_mode){.lex_state = 421, .external_lex_state = 6};
	v->arr[34] = (t_lex_mode){.lex_state = 546, .external_lex_state = 2};
	v->arr[35] = (t_lex_mode){.lex_state = 546, .external_lex_state = 2};
	v->arr[36] = (t_lex_mode){.lex_state = 546, .external_lex_state = 2};
	v->arr[37] = (t_lex_mode){.lex_state = 546, .external_lex_state = 2};
	v->arr[38] = (t_lex_mode){.lex_state = 546, .external_lex_state = 2};
	v->arr[39] = (t_lex_mode){.lex_state = 546, .external_lex_state = 2};
	v->arr[40] = (t_lex_mode){.lex_state = 546, .external_lex_state = 2};
	v->arr[41] = (t_lex_mode){.lex_state = 546, .external_lex_state = 2};
	v->arr[42] = (t_lex_mode){.lex_state = 546, .external_lex_state = 2};
	v->arr[43] = (t_lex_mode){.lex_state = 546, .external_lex_state = 2};
	v->arr[44] = (t_lex_mode){.lex_state = 546, .external_lex_state = 2};
	lex_modes3(v);
}

void	lex_modes3(t_lex_modes *v)
{
	v->arr[45] = (t_lex_mode){.lex_state = 546, .external_lex_state = 2};
	v->arr[46] = (t_lex_mode){.lex_state = 546, .external_lex_state = 2};
	v->arr[47] = (t_lex_mode){.lex_state = 546, .external_lex_state = 2};
	v->arr[48] = (t_lex_mode){.lex_state = 546, .external_lex_state = 2};
	v->arr[49] = (t_lex_mode){.lex_state = 546, .external_lex_state = 2};
	v->arr[50] = (t_lex_mode){.lex_state = 546, .external_lex_state = 2};
	v->arr[51] = (t_lex_mode){.lex_state = 546, .external_lex_state = 2};
	v->arr[52] = (t_lex_mode){.lex_state = 546, .external_lex_state = 2};
	v->arr[53] = (t_lex_mode){.lex_state = 546, .external_lex_state = 2};
	v->arr[54] = (t_lex_mode){.lex_state = 546, .external_lex_state = 2};
	v->arr[55] = (t_lex_mode){.lex_state = 546, .external_lex_state = 2};
	v->arr[56] = (t_lex_mode){.lex_state = 546, .external_lex_state = 2};
	v->arr[57] = (t_lex_mode){.lex_state = 546, .external_lex_state = 2};
	v->arr[58] = (t_lex_mode){.lex_state = 546, .external_lex_state = 2};
	v->arr[59] = (t_lex_mode){.lex_state = 546, .external_lex_state = 2};
	lex_modes4(v);
}

void	lex_modes4(t_lex_modes *v)
{
	v->arr[60] = (t_lex_mode){.lex_state = 546, .external_lex_state = 2};
	v->arr[61] = (t_lex_mode){.lex_state = 546, .external_lex_state = 2};
	v->arr[62] = (t_lex_mode){.lex_state = 422, .external_lex_state = 2};
	v->arr[63] = (t_lex_mode){.lex_state = 422, .external_lex_state = 2};
	v->arr[64] = (t_lex_mode){.lex_state = 546, .external_lex_state = 2};
	v->arr[65] = (t_lex_mode){.lex_state = 546, .external_lex_state = 2};
	v->arr[66] = (t_lex_mode){.lex_state = 546, .external_lex_state = 2};
	v->arr[67] = (t_lex_mode){.lex_state = 546, .external_lex_state = 2};
	v->arr[68] = (t_lex_mode){.lex_state = 422, .external_lex_state = 2};
	v->arr[69] = (t_lex_mode){.lex_state = 546, .external_lex_state = 2};
	v->arr[70] = (t_lex_mode){.lex_state = 546, .external_lex_state = 2};
	v->arr[71] = (t_lex_mode){.lex_state = 546, .external_lex_state = 2};
	v->arr[72] = (t_lex_mode){.lex_state = 422, .external_lex_state = 2};
	v->arr[73] = (t_lex_mode){.lex_state = 546, .external_lex_state = 2};
	v->arr[74] = (t_lex_mode){.lex_state = 422, .external_lex_state = 2};
	lex_modes5(v);
}

// file funcs0.c
