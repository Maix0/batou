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

void	init_fmap_entries0(t_fmap_entries *v)
{
	v->arr[1] = (t_fme){field_redirect, 0, .inherited = false};
	v->arr[2] = (t_fme){field_descriptor, 0, .inherited = false};
	v->arr[3] = (t_fme){field_left, 0, .inherited = true};
	v->arr[4] = (t_fme){field_operator, 0, .inherited = true};
	v->arr[5] = (t_fme){field_right, 0, .inherited = true};
	v->arr[6] = (t_fme){field_alternative, 0, .inherited = true};
	v->arr[7] = (t_fme){field_condition, 0, .inherited = true};
	v->arr[8] = (t_fme){field_consequence, 0, .inherited = true};
	v->arr[9] = (t_fme){field_operator, 0, .inherited = true};
	v->arr[10] = (t_fme){field_destination, 1, .inherited = false};
	v->arr[11] = (t_fme){field_operator, 0, .inherited = false};
	v->arr[12] = (t_fme){field_body, 0, .inherited = false};
	v->arr[13] = (t_fme){field_redirect, 1, .inherited = false};
	v->arr[14] = (t_fme){field_body, 0, .inherited = false};
	v->arr[15] = (t_fme){field_argument, 0, .inherited = false};
	init_fmap_entries1(v);
}

void	init_fmap_entries1(t_fmap_entries *v)
{
	v->arr[16] = (t_fme){field_argument, 1, .inherited = true};
	v->arr[17] = (t_fme){field_name, 0, .inherited = false};
	v->arr[18] = (t_fme){field_redirect, 1, .inherited = true};
	v->arr[19] = (t_fme){field_name, 1, .inherited = false};
	v->arr[20] = (t_fme){field_redirect, 0, .inherited = true};
	v->arr[21] = (t_fme){field_redirect, 0, .inherited = true};
	v->arr[22] = (t_fme){field_redirect, 1, .inherited = true};
	v->arr[23] = (t_fme){field_descriptor, 0, .inherited = false};
	v->arr[24] = (t_fme){field_destination, 2, .inherited = false};
	v->arr[25] = (t_fme){field_name, 0, .inherited = false};
	v->arr[26] = (t_fme){field_value, 2, .inherited = false};
	v->arr[27] = (t_fme){field_name, 0, .inherited = true};
	v->arr[28] = (t_fme){field_value, 0, .inherited = true};
	v->arr[29] = (t_fme){field_operator, 1, .inherited = false};
	v->arr[30] = (t_fme){field_body, 2, .inherited = false};
	init_fmap_entries2(v);
}

void	init_fmap_entries2(t_fmap_entries *v)
{
	v->arr[31] = (t_fme){field_condition, 1, .inherited = false};
	v->arr[32] = (t_fme){field_body, 2, .inherited = false};
	v->arr[33] = (t_fme){field_name, 1, .inherited = false};
	v->arr[34] = (t_fme){field_left, 1, .inherited = true};
	v->arr[35] = (t_fme){field_operator, 1, .inherited = true};
	v->arr[36] = (t_fme){field_right, 1, .inherited = true};
	v->arr[37] = (t_fme){field_operator, 1, .inherited = true};
	v->arr[38] = (t_fme){field_operator, 0, .inherited = true};
	v->arr[39] = (t_fme){field_operator, 1, .inherited = true};
	v->arr[40] = (t_fme){field_redirect, 1, .inherited = false};
	v->arr[41] = (t_fme){field_argument, 0, .inherited = false};
	v->arr[42] = (t_fme){field_argument, 1, .inherited = false};
	v->arr[43] = (t_fme){field_argument, 0, .inherited = true};
	v->arr[44] = (t_fme){field_argument, 1, .inherited = true};
	v->arr[45] = (t_fme){field_redirect, 0, .inherited = true};
	init_fmap_entries3(v);
}

void	init_fmap_entries3(t_fmap_entries *v)
{
	v->arr[46] = (t_fme){field_redirect, 1, .inherited = true};
	v->arr[47] = (t_fme){field_argument, 2, .inherited = true};
	v->arr[48] = (t_fme){field_name, 1, .inherited = false};
	v->arr[49] = (t_fme){field_redirect, 0, .inherited = true};
	v->arr[50] = (t_fme){field_redirect, 2, .inherited = true};
	v->arr[51] = (t_fme){field_index, 2, .inherited = false};
	v->arr[52] = (t_fme){field_name, 0, .inherited = false};
	v->arr[53] = (t_fme){field_body, 3, .inherited = false};
	v->arr[54] = (t_fme){field_variable, 1, .inherited = false};
	v->arr[55] = (t_fme){field_left, 0, .inherited = false};
	v->arr[56] = (t_fme){field_operator, 1, .inherited = false};
	v->arr[57] = (t_fme){field_right, 2, .inherited = false};
	v->arr[58] = (t_fme){field_condition, 1, .inherited = false};
	v->arr[59] = (t_fme){field_value, 1, .inherited = false};
	v->arr[60] = (t_fme){field_body, 2, .inherited = false};
	init_fmap_entries4(v);
}

void	init_fmap_entries4(t_fmap_entries *v)
{
	v->arr[61] = (t_fme){field_name, 1, .inherited = false};
	v->arr[62] = (t_fme){field_redirect, 3, .inherited = false};
	v->arr[63] = (t_fme){field_operator, 0, .inherited = false};
	v->arr[64] = (t_fme){field_operator, 1, .inherited = false};
	v->arr[65] = (t_fme){field_operator, 0, .inherited = false};
	v->arr[66] = (t_fme){field_operator, 1, .inherited = true};
	v->arr[67] = (t_fme){field_operator, 0, .inherited = false};
	v->arr[68] = (t_fme){field_operator, 2, .inherited = false};
	v->arr[69] = (t_fme){field_operator, 0, .inherited = false};
	v->arr[70] = (t_fme){field_operator, 2, .inherited = true};
	v->arr[71] = (t_fme){field_body, 3, .inherited = false};
	v->arr[72] = (t_fme){field_name, 0, .inherited = false};
	v->arr[73] = (t_fme){field_body, 4, .inherited = false};
	v->arr[74] = (t_fme){field_condition, 2, .inherited = true};
	v->arr[75] = (t_fme){field_initializer, 2, .inherited = true};
	init_fmap_entries5(v);
}

// file funcs0.c
