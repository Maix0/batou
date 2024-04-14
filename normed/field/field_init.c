/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   field_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 17:07:07 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 17:07:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/field.h"

t_field_names	*get_field_names(void)
{
	static t_field_names	field_names;

	field_names = {};
	return (&field_names);
}

void	init_field_names(t_field_names *v)
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
