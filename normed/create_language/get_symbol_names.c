/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_symbol_names.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 20:37:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/21 20:47:33 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/parser.h"
#include "../headers/symbols.h"

void init_symbol_names(t_symbol_names *v);
void init_symbol_names2(t_symbol_names *v);
void init_symbol_names3(t_symbol_names *v);
void init_symbol_names4(t_symbol_names *v);
void init_symbol_names5(t_symbol_names *v);
void init_symbol_names6(t_symbol_names *v);
void init_symbol_names7(t_symbol_names *v);
void init_symbol_names8(t_symbol_names *v);
void init_symbol_names9(t_symbol_names *v);
void init_symbol_names10(t_symbol_names *v);
void init_symbol_names11(t_symbol_names *v);
void init_symbol_names12(t_symbol_names *v);
void init_symbol_names13(t_symbol_names *v);

const char *const *get_symbol_names(void)
{
	static t_symbol_names table = {};
	static bool			  init = false;

	if (!init)
	{
		init_symbol_names(&table);
		init = true;
	}
	return ((const char *const *)&table.arr[0]);
}
