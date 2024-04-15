/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/15 13:40:00 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCS_H
# define FUNCS_H

# include "../headers/parser.h"
# include "../headers/field.h"

typedef struct s_fmap_slices {
	t_field_map_slice	arr[159];
}	t_fmap_slices;

typedef t_field_map_slice	t_fms;

void	init_fmap_slices0(t_fmap_slices *v);
void	init_fmap_slices1(t_fmap_slices *v);
void	init_fmap_slices2(t_fmap_slices *v);
void	init_fmap_slices3(t_fmap_slices *v);
void	init_fmap_slices4(t_fmap_slices *v);
void	init_fmap_slices5(t_fmap_slices *v);
void	init_fmap_slices6(t_fmap_slices *v);
void	init_fmap_slices7(t_fmap_slices *v);
void	init_fmap_slices8(t_fmap_slices *v);
void	init_fmap_slices9(t_fmap_slices *v);
void	init_fmap_slices10(t_fmap_slices *v);

#endif // FUNCS_H
