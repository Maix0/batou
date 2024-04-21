/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_fmap_entries10(t_fmap_entries *v)
{
	v->arr[151] = (t_fme){field_condition, 3, .inherited = false};
	v->arr[152] = (t_fme){field_initializer, 0, .inherited = false};
	v->arr[153] = (t_fme){field_initializer, 0, .inherited = false};
	v->arr[154] = (t_fme){field_update, 3, .inherited = false};
	v->arr[155] = (t_fme){field_update, 4, .inherited = false};
	v->arr[156] = (t_fme){field_condition, 3, .inherited = false};
	v->arr[157] = (t_fme){field_initializer, 0, .inherited = false};
	v->arr[158] = (t_fme){field_initializer, 1, .inherited = false};
	v->arr[159] = (t_fme){field_initializer, 0, .inherited = false};
	v->arr[160] = (t_fme){field_initializer, 1, .inherited = false};
	v->arr[161] = (t_fme){field_update, 4, .inherited = false};
	v->arr[162] = (t_fme){field_condition, 1, .inherited = false};
	v->arr[163] = (t_fme){field_update, 3, .inherited = false};
	v->arr[164] = (t_fme){field_update, 4, .inherited = false};
	v->arr[165] = (t_fme){field_condition, 1, .inherited = false};
	init_fmap_entries11(v);
}

void	init_fmap_entries11(t_fmap_entries *v)
{
	v->arr[166] = (t_fme){field_condition, 2, .inherited = false};
	v->arr[167] = (t_fme){field_update, 4, .inherited = false};
	v->arr[168] = (t_fme){field_termination, 3, .inherited = false};
	v->arr[169] = (t_fme){field_value, 0, .inherited = false};
	v->arr[170] = (t_fme){field_fallthrough, 3, .inherited = false};
	v->arr[171] = (t_fme){field_value, 0, .inherited = false};
	v->arr[172] = (t_fme){field_termination, 3, .inherited = false};
	v->arr[173] = (t_fme){field_value, 0, .inherited = false};
	v->arr[174] = (t_fme){field_value, 1, .inherited = true};
	v->arr[175] = (t_fme){field_fallthrough, 3, .inherited = false};
	v->arr[176] = (t_fme){field_value, 0, .inherited = false};
	v->arr[177] = (t_fme){field_value, 1, .inherited = true};
	v->arr[178] = (t_fme){field_termination, 3, .inherited = false};
	v->arr[179] = (t_fme){field_value, 1, .inherited = false};
	v->arr[180] = (t_fme){field_fallthrough, 3, .inherited = false};
	init_fmap_entries12(v);
}

void	init_fmap_entries12(t_fmap_entries *v)
{
	v->arr[181] = (t_fme){field_value, 1, .inherited = false};
	v->arr[182] = (t_fme){field_value, 1, .inherited = false};
	v->arr[183] = (t_fme){field_value, 2, .inherited = true};
	v->arr[184] = (t_fme){field_operator, 0, .inherited = false};
	v->arr[185] = (t_fme){field_operator, 2, .inherited = false};
	v->arr[186] = (t_fme){field_operator, 4, .inherited = false};
	v->arr[187] = (t_fme){field_operator, 0, .inherited = false};
	v->arr[188] = (t_fme){field_operator, 1, .inherited = false};
	v->arr[189] = (t_fme){field_operator, 4, .inherited = false};
	v->arr[190] = (t_fme){field_operator, 0, .inherited = false};
	v->arr[191] = (t_fme){field_operator, 2, .inherited = false};
	v->arr[192] = (t_fme){field_operator, 4, .inherited = true};
	v->arr[193] = (t_fme){field_operator, 0, .inherited = false};
	v->arr[194] = (t_fme){field_operator, 1, .inherited = true};
	v->arr[195] = (t_fme){field_operator, 2, .inherited = false};
	init_fmap_entries13(v);
}

void	init_fmap_entries13(t_fmap_entries *v)
{
	v->arr[196] = (t_fme){field_operator, 4, .inherited = true};
	v->arr[197] = (t_fme){field_descriptor, 0, .inherited = false};
	v->arr[198] = (t_fme){field_operator, 3, .inherited = true};
	v->arr[199] = (t_fme){field_right, 3, .inherited = true};
	v->arr[200] = (t_fme){field_argument, 3, .inherited = true};
	v->arr[201] = (t_fme){field_descriptor, 0, .inherited = false};
	v->arr[202] = (t_fme){field_descriptor, 0, .inherited = false};
	v->arr[203] = (t_fme){field_redirect, 3, .inherited = false};
	v->arr[204] = (t_fme){field_operator, 3, .inherited = true};
	v->arr[205] = (t_fme){field_redirect, 2, .inherited = false};
	v->arr[206] = (t_fme){field_right, 3, .inherited = true};
	v->arr[207] = (t_fme){field_condition, 2, .inherited = false};
	v->arr[208] = (t_fme){field_initializer, 0, .inherited = false};
	v->arr[209] = (t_fme){field_update, 4, .inherited = false};
	v->arr[210] = (t_fme){field_update, 5, .inherited = false};
	init_fmap_entries14(v);
}

void	init_fmap_entries14(t_fmap_entries *v)
{
	v->arr[211] = (t_fme){field_condition, 2, .inherited = false};
	v->arr[212] = (t_fme){field_condition, 3, .inherited = false};
	v->arr[213] = (t_fme){field_initializer, 0, .inherited = false};
	v->arr[214] = (t_fme){field_update, 5, .inherited = false};
	v->arr[215] = (t_fme){field_condition, 3, .inherited = false};
	v->arr[216] = (t_fme){field_initializer, 0, .inherited = false};
	v->arr[217] = (t_fme){field_initializer, 1, .inherited = false};
	v->arr[218] = (t_fme){field_update, 5, .inherited = false};
	v->arr[219] = (t_fme){field_condition, 3, .inherited = false};
	v->arr[220] = (t_fme){field_condition, 4, .inherited = false};
	v->arr[221] = (t_fme){field_initializer, 0, .inherited = false};
	v->arr[222] = (t_fme){field_initializer, 1, .inherited = false};
	v->arr[223] = (t_fme){field_initializer, 0, .inherited = false};
	v->arr[224] = (t_fme){field_initializer, 1, .inherited = false};
	v->arr[225] = (t_fme){field_update, 4, .inherited = false};
	init_fmap_entries15(v);
}

// file funcs2.c
