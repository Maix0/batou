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

void	init_fmap_slices0(t_fmap_slices *v)
{
	v->arr[2] = (t_fms){.index = 0, .length = 1};
	v->arr[3] = (t_fms){.index = 1, .length = 1};
	v->arr[4] = (t_fms){.index = 2, .length = 1};
	v->arr[5] = (t_fms){.index = 3, .length = 3};
	v->arr[6] = (t_fms){.index = 6, .length = 3};
	v->arr[7] = (t_fms){.index = 9, .length = 1};
	v->arr[8] = (t_fms){.index = 10, .length = 1};
	v->arr[9] = (t_fms){.index = 10, .length = 1};
	v->arr[12] = (t_fms){.index = 11, .length = 1};
	v->arr[14] = (t_fms){.index = 12, .length = 2};
	v->arr[15] = (t_fms){.index = 14, .length = 1};
	v->arr[16] = (t_fms){.index = 15, .length = 1};
	v->arr[17] = (t_fms){.index = 15, .length = 1};
	v->arr[18] = (t_fms){.index = 16, .length = 3};
	v->arr[19] = (t_fms){.index = 19, .length = 2};
	init_fmap_slices1(v);
}

void	init_fmap_slices1(t_fmap_slices *v)
{
	v->arr[20] = (t_fms){.index = 21, .length = 2};
	v->arr[21] = (t_fms){.index = 23, .length = 2};
	v->arr[22] = (t_fms){.index = 23, .length = 2};
	v->arr[23] = (t_fms){.index = 2, .length = 1};
	v->arr[24] = (t_fms){.index = 25, .length = 2};
	v->arr[25] = (t_fms){.index = 25, .length = 2};
	v->arr[26] = (t_fms){.index = 27, .length = 2};
	v->arr[27] = (t_fms){.index = 29, .length = 1};
	v->arr[28] = (t_fms){.index = 30, .length = 2};
	v->arr[29] = (t_fms){.index = 32, .length = 2};
	v->arr[30] = (t_fms){.index = 34, .length = 3};
	v->arr[31] = (t_fms){.index = 37, .length = 1};
	v->arr[32] = (t_fms){.index = 37, .length = 1};
	v->arr[33] = (t_fms){.index = 11, .length = 1};
	v->arr[34] = (t_fms){.index = 38, .length = 2};
	init_fmap_slices2(v);
}

void	init_fmap_slices2(t_fmap_slices *v)
{
	v->arr[35] = (t_fms){.index = 40, .length = 1};
	v->arr[36] = (t_fms){.index = 41, .length = 2};
	v->arr[37] = (t_fms){.index = 41, .length = 2};
	v->arr[38] = (t_fms){.index = 43, .length = 4};
	v->arr[39] = (t_fms){.index = 47, .length = 4};
	v->arr[40] = (t_fms){.index = 51, .length = 2};
	v->arr[41] = (t_fms){.index = 51, .length = 2};
	v->arr[42] = (t_fms){.index = 53, .length = 2};
	v->arr[43] = (t_fms){.index = 55, .length = 3};
	v->arr[44] = (t_fms){.index = 58, .length = 1};
	v->arr[45] = (t_fms){.index = 59, .length = 1};
	v->arr[46] = (t_fms){.index = 59, .length = 1};
	v->arr[47] = (t_fms){.index = 60, .length = 3};
	v->arr[49] = (t_fms){.index = 63, .length = 2};
	v->arr[50] = (t_fms){.index = 65, .length = 2};
	init_fmap_slices3(v);
}

void	init_fmap_slices3(t_fmap_slices *v)
{
	v->arr[51] = (t_fms){.index = 67, .length = 2};
	v->arr[52] = (t_fms){.index = 69, .length = 2};
	v->arr[53] = (t_fms){.index = 69, .length = 2};
	v->arr[54] = (t_fms){.index = 71, .length = 2};
	v->arr[55] = (t_fms){.index = 25, .length = 2};
	v->arr[56] = (t_fms){.index = 73, .length = 4};
	v->arr[57] = (t_fms){.index = 77, .length = 1};
	v->arr[58] = (t_fms){.index = 78, .length = 1};
	v->arr[59] = (t_fms){.index = 79, .length = 1};
	v->arr[60] = (t_fms){.index = 79, .length = 1};
	v->arr[61] = (t_fms){.index = 80, .length = 2};
	v->arr[62] = (t_fms){.index = 63, .length = 2};
	v->arr[63] = (t_fms){.index = 82, .length = 3};
	v->arr[64] = (t_fms){.index = 85, .length = 3};
	v->arr[65] = (t_fms){.index = 88, .length = 3};
	init_fmap_slices4(v);
}

void	init_fmap_slices4(t_fmap_slices *v)
{
	v->arr[66] = (t_fms){.index = 91, .length = 2};
	v->arr[67] = (t_fms){.index = 93, .length = 2};
	v->arr[68] = (t_fms){.index = 95, .length = 4};
	v->arr[69] = (t_fms){.index = 99, .length = 2};
	v->arr[70] = (t_fms){.index = 101, .length = 2};
	v->arr[71] = (t_fms){.index = 103, .length = 2};
	v->arr[72] = (t_fms){.index = 105, .length = 2};
	v->arr[73] = (t_fms){.index = 107, .length = 2};
	v->arr[74] = (t_fms){.index = 109, .length = 2};
	v->arr[75] = (t_fms){.index = 111, .length = 3};
	v->arr[76] = (t_fms){.index = 114, .length = 3};
	v->arr[77] = (t_fms){.index = 117, .length = 2};
	v->arr[78] = (t_fms){.index = 119, .length = 2};
	v->arr[79] = (t_fms){.index = 121, .length = 2};
	v->arr[80] = (t_fms){.index = 123, .length = 2};
	init_fmap_slices5(v);
}

// file funcs0.c
