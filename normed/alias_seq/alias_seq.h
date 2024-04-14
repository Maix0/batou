/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alias_seq.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 16:12:10 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 16:59:57 by maiboyer         ###   ########.fr       */
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

t_alias_seq		*get_alias_sequences(void);
void			init_alias_sequences(t_alias_seq *v);

#endif /* ALIAS_SEQ_H */
