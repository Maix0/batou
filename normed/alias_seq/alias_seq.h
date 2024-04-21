/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alias_seq.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 16:12:10 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/21 21:42:02 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALIAS_SEQ_H
# define ALIAS_SEQ_H

# include "../headers/parser.h"
# include "../headers/symbols.h"

typedef struct s_alias_seq
{
	t_symbol	arr[159][8];
}				t_alias_seq;

void	init_alias_seq(t_alias_seq *v);

#endif /* ALIAS_SEQ_H */
