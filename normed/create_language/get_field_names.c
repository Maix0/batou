/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_field_names.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 20:37:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/21 20:47:54 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/field.h"
#include "../headers/parser.h"

static void	init_field_names(t_field_names *v)
{
	v->arr[0] = 0;
	v->arr[field_alternative] = "alternative";
	v->arr[field_argument] = "argument";
	v->arr[field_body] = "body";
	v->arr[field_condition] = "condition";
	v->arr[field_consequence] = "consequence";
	v->arr[field_descriptor] = "descriptor";
	v->arr[field_destination] = "destination";
	v->arr[field_fallthrough] = "fallthrough";
	v->arr[field_index] = "index";
	v->arr[field_initializer] = "initializer";
	v->arr[field_left] = "left";
	v->arr[field_name] = "name";
	v->arr[field_operator] = "operator";
	v->arr[field_redirect] = "redirect";
	v->arr[field_right] = "right";
	v->arr[field_termination] = "termination";
	v->arr[field_update] = "update";
	v->arr[field_value] = "value";
	v->arr[field_variable] = "variable";
}

const char *const	*get_field_names(void)
{
	static t_field_names	table = {};
	static bool				init = false;

	if (!init)
	{
		init_field_names(&table);
		init = true;
	}
	return ((const char *const *)&table.arr[0]);
}
