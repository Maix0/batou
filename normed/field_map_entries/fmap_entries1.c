/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_fmap_entries5(t_fmap_entries *v)
{
	v->arr[76] = (t_fme){field_update, 2, .inherited = true};
	v->arr[77] = (t_fme){field_initializer, 0, .inherited = false};
	v->arr[78] = (t_fme){field_update, 2, .inherited = false};
	v->arr[79] = (t_fme){field_value, 0, .inherited = false};
	v->arr[80] = (t_fme){field_body, 4, .inherited = false};
	v->arr[81] = (t_fme){field_name, 1, .inherited = false};
	v->arr[82] = (t_fme){field_operator, 0, .inherited = false};
	v->arr[83] = (t_fme){field_operator, 1, .inherited = false};
	v->arr[84] = (t_fme){field_operator, 2, .inherited = true};
	v->arr[85] = (t_fme){field_operator, 0, .inherited = false};
	v->arr[86] = (t_fme){field_operator, 1, .inherited = true};
	v->arr[87] = (t_fme){field_operator, 2, .inherited = false};
	v->arr[88] = (t_fme){field_body, 3, .inherited = false};
	v->arr[89] = (t_fme){field_name, 0, .inherited = false};
	v->arr[90] = (t_fme){field_redirect, 4, .inherited = false};
	init_fmap_entries6(v);
}

void	init_fmap_entries6(t_fmap_entries *v)
{
	v->arr[91] = (t_fme){field_operator, 0, .inherited = false};
	v->arr[92] = (t_fme){field_right, 1, .inherited = false};
	v->arr[93] = (t_fme){field_argument, 0, .inherited = true};
	v->arr[94] = (t_fme){field_argument, 1, .inherited = true};
	v->arr[95] = (t_fme){field_body, 5, .inherited = false};
	v->arr[96] = (t_fme){field_condition, 2, .inherited = true};
	v->arr[97] = (t_fme){field_initializer, 2, .inherited = true};
	v->arr[98] = (t_fme){field_update, 2, .inherited = true};
	v->arr[99] = (t_fme){field_condition, 2, .inherited = false};
	v->arr[100] = (t_fme){field_initializer, 0, .inherited = false};
	v->arr[101] = (t_fme){field_initializer, 0, .inherited = false};
	v->arr[102] = (t_fme){field_update, 3, .inherited = false};
	v->arr[103] = (t_fme){field_initializer, 0, .inherited = false};
	v->arr[104] = (t_fme){field_initializer, 1, .inherited = false};
	v->arr[105] = (t_fme){field_condition, 1, .inherited = false};
	init_fmap_entries7(v);
}

void	init_fmap_entries7(t_fmap_entries *v)
{
	v->arr[106] = (t_fme){field_update, 3, .inherited = false};
	v->arr[107] = (t_fme){field_condition, 1, .inherited = false};
	v->arr[108] = (t_fme){field_condition, 2, .inherited = false};
	v->arr[109] = (t_fme){field_update, 2, .inherited = false};
	v->arr[110] = (t_fme){field_update, 3, .inherited = false};
	v->arr[111] = (t_fme){field_body, 5, .inherited = false};
	v->arr[112] = (t_fme){field_value, 3, .inherited = false};
	v->arr[113] = (t_fme){field_variable, 1, .inherited = false};
	v->arr[114] = (t_fme){field_alternative, 4, .inherited = false};
	v->arr[115] = (t_fme){field_condition, 0, .inherited = false};
	v->arr[116] = (t_fme){field_consequence, 2, .inherited = false};
	v->arr[117] = (t_fme){field_termination, 2, .inherited = false};
	v->arr[118] = (t_fme){field_value, 0, .inherited = false};
	v->arr[119] = (t_fme){field_fallthrough, 2, .inherited = false};
	v->arr[120] = (t_fme){field_value, 0, .inherited = false};
	init_fmap_entries8(v);
}

void	init_fmap_entries8(t_fmap_entries *v)
{
	v->arr[121] = (t_fme){field_value, 0, .inherited = false};
	v->arr[122] = (t_fme){field_value, 1, .inherited = true};
	v->arr[123] = (t_fme){field_value, 0, .inherited = true};
	v->arr[124] = (t_fme){field_value, 1, .inherited = true};
	v->arr[125] = (t_fme){field_body, 4, .inherited = false};
	v->arr[126] = (t_fme){field_name, 1, .inherited = false};
	v->arr[127] = (t_fme){field_redirect, 5, .inherited = false};
	v->arr[128] = (t_fme){field_operator, 0, .inherited = false};
	v->arr[129] = (t_fme){field_operator, 1, .inherited = false};
	v->arr[130] = (t_fme){field_operator, 3, .inherited = false};
	v->arr[131] = (t_fme){field_operator, 0, .inherited = false};
	v->arr[132] = (t_fme){field_operator, 3, .inherited = false};
	v->arr[133] = (t_fme){field_operator, 0, .inherited = false};
	v->arr[134] = (t_fme){field_operator, 2, .inherited = false};
	v->arr[135] = (t_fme){field_operator, 3, .inherited = true};
	init_fmap_entries9(v);
}

void	init_fmap_entries9(t_fmap_entries *v)
{
	v->arr[136] = (t_fme){field_operator, 0, .inherited = false};
	v->arr[137] = (t_fme){field_operator, 1, .inherited = false};
	v->arr[138] = (t_fme){field_operator, 3, .inherited = true};
	v->arr[139] = (t_fme){field_operator, 0, .inherited = false};
	v->arr[140] = (t_fme){field_operator, 1, .inherited = true};
	v->arr[141] = (t_fme){field_operator, 2, .inherited = false};
	v->arr[142] = (t_fme){field_operator, 3, .inherited = true};
	v->arr[143] = (t_fme){field_operator, 2, .inherited = true};
	v->arr[144] = (t_fme){field_right, 2, .inherited = true};
	v->arr[145] = (t_fme){field_argument, 2, .inherited = true};
	v->arr[146] = (t_fme){field_redirect, 2, .inherited = false};
	v->arr[147] = (t_fme){field_condition, 2, .inherited = false};
	v->arr[148] = (t_fme){field_initializer, 0, .inherited = false};
	v->arr[149] = (t_fme){field_update, 4, .inherited = false};
	v->arr[150] = (t_fme){field_condition, 2, .inherited = false};
	init_fmap_entries10(v);
}

// file funcs1.c
