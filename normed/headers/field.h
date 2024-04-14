/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   field.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 17:03:16 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 17:07:02 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIELD_H
# define FIELD_H

typedef struct s_field_names
{
	const char	*arr[20];
}				t_field_names;

enum			e_field_identifiers
{
	field_alternative = 1,
	field_argument = 2,
	field_body = 3,
	field_condition = 4,
	field_consequence = 5,
	field_descriptor = 6,
	field_destination = 7,
	field_fallthrough = 8,
	field_index = 9,
	field_initializer = 10,
	field_left = 11,
	field_name = 12,
	field_operator = 13,
	field_redirect = 14,
	field_right = 15,
	field_termination = 16,
	field_update = 17,
	field_value = 18,
	field_variable = 19,
};

#endif /* FIELD_H */
