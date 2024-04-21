/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fmap_entries3.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/15 13:26:01 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_fmap_entries15(t_fmap_entries *v)
{
	v->arr[226] = (t_fme){field_update, 5, .inherited = false};
	v->arr[227] = (t_fme){field_condition, 1, .inherited = false};
	v->arr[228] = (t_fme){field_condition, 2, .inherited = false};
	v->arr[229] = (t_fme){field_update, 4, .inherited = false};
	v->arr[230] = (t_fme){field_update, 5, .inherited = false};
	v->arr[231] = (t_fme){field_termination, 4, .inherited = false};
	v->arr[232] = (t_fme){field_value, 0, .inherited = false};
	v->arr[233] = (t_fme){field_value, 1, .inherited = true};
	v->arr[234] = (t_fme){field_fallthrough, 4, .inherited = false};
	v->arr[235] = (t_fme){field_value, 0, .inherited = false};
	v->arr[236] = (t_fme){field_value, 1, .inherited = true};
	v->arr[237] = (t_fme){field_termination, 4, .inherited = false};
	v->arr[238] = (t_fme){field_value, 1, .inherited = false};
	v->arr[239] = (t_fme){field_fallthrough, 4, .inherited = false};
	v->arr[240] = (t_fme){field_value, 1, .inherited = false};
	init_fmap_entries16(v);
}

void	init_fmap_entries16(t_fmap_entries *v)
{
	v->arr[241] = (t_fme){field_termination, 4, .inherited = false};
	v->arr[242] = (t_fme){field_value, 1, .inherited = false};
	v->arr[243] = (t_fme){field_value, 2, .inherited = true};
	v->arr[244] = (t_fme){field_fallthrough, 4, .inherited = false};
	v->arr[245] = (t_fme){field_value, 1, .inherited = false};
	v->arr[246] = (t_fme){field_value, 2, .inherited = true};
	v->arr[247] = (t_fme){field_operator, 0, .inherited = false};
	v->arr[248] = (t_fme){field_operator, 2, .inherited = false};
	v->arr[249] = (t_fme){field_operator, 5, .inherited = false};
	v->arr[250] = (t_fme){field_operator, 0, .inherited = false};
	v->arr[251] = (t_fme){field_operator, 3, .inherited = false};
	v->arr[252] = (t_fme){field_operator, 5, .inherited = false};
	v->arr[253] = (t_fme){field_descriptor, 0, .inherited = false};
	v->arr[254] = (t_fme){field_operator, 4, .inherited = true};
	v->arr[255] = (t_fme){field_redirect, 3, .inherited = false};
	init_fmap_entries17(v);
}

void	init_fmap_entries17(t_fmap_entries *v)
{
	v->arr[256] = (t_fme){field_right, 4, .inherited = true};
	v->arr[257] = (t_fme){field_condition, 2, .inherited = false};
	v->arr[258] = (t_fme){field_condition, 3, .inherited = false};
	v->arr[259] = (t_fme){field_initializer, 0, .inherited = false};
	v->arr[260] = (t_fme){field_update, 5, .inherited = false};
	v->arr[261] = (t_fme){field_update, 6, .inherited = false};
	v->arr[262] = (t_fme){field_condition, 3, .inherited = false};
	v->arr[263] = (t_fme){field_initializer, 0, .inherited = false};
	v->arr[264] = (t_fme){field_initializer, 1, .inherited = false};
	v->arr[265] = (t_fme){field_update, 5, .inherited = false};
	v->arr[266] = (t_fme){field_update, 6, .inherited = false};
	v->arr[267] = (t_fme){field_condition, 3, .inherited = false};
	v->arr[268] = (t_fme){field_condition, 4, .inherited = false};
	v->arr[269] = (t_fme){field_initializer, 0, .inherited = false};
	v->arr[270] = (t_fme){field_initializer, 1, .inherited = false};
	init_fmap_entries18(v);
}

void	init_fmap_entries18(t_fmap_entries *v)
{
	v->arr[271] = (t_fme){field_update, 6, .inherited = false};
	v->arr[272] = (t_fme){field_termination, 5, .inherited = false};
	v->arr[273] = (t_fme){field_value, 1, .inherited = false};
	v->arr[274] = (t_fme){field_value, 2, .inherited = true};
	v->arr[275] = (t_fme){field_fallthrough, 5, .inherited = false};
	v->arr[276] = (t_fme){field_value, 1, .inherited = false};
	v->arr[277] = (t_fme){field_value, 2, .inherited = true};
	v->arr[278] = (t_fme){field_operator, 0, .inherited = false};
	v->arr[279] = (t_fme){field_operator, 3, .inherited = false};
	v->arr[280] = (t_fme){field_operator, 6, .inherited = false};
	v->arr[281] = (t_fme){field_condition, 3, .inherited = false};
	v->arr[282] = (t_fme){field_condition, 4, .inherited = false};
	v->arr[283] = (t_fme){field_initializer, 0, .inherited = false};
	v->arr[284] = (t_fme){field_initializer, 1, .inherited = false};
	v->arr[285] = (t_fme){field_update, 6, .inherited = false};
	init_fmap_entries19(v);
}

void	init_fmap_entries19(t_fmap_entries *v)
{
	v->arr[286] = (t_fme){field_update, 7, .inherited = false};
}

// file funcs3.c
