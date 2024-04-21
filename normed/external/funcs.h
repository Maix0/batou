/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 15:08:08 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/21 22:20:25 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCS_H
# define FUNCS_H

# include "../headers/external.h"
# include "../headers/parser.h"
# include "../headers/symbols.h"

typedef struct s_scanner_states {
	t_symbol	arr[29];
}	t_scanner_states;

void	init_scanner_states0(t_scanner_states *v);

#endif /* FUNCS_H */
