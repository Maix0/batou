/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs4000.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table20000(t_small_table *v)
{
	v->arr[299999] = 6127;
	v->arr[300000] = 4;
	v->arr[300001] = sym_arithmetic_expansion;
	v->arr[300002] = sym_simple_expansion;
	v->arr[300003] = sym_expansion;
	v->arr[300004] = sym_command_substitution;
	v->arr[300006] = 12;
	v->arr[300006] = 3;
	v->arr[300007] = 1;
	v->arr[300008] = sym_comment;
	v->arr[300009] = 13060;
	v->arr[300010] = 1;
	v->arr[300011] = anon_sym_DOLLAR_LBRACK;
	v->arr[300012] = 13066;
	v->arr[300013] = 1;
	init_small_table20001(v);
}

void	init_small_table20001(t_small_table *v)
{
	v->arr[300014] = sym_string_content;
	v->arr[300015] = 13068;
	v->arr[300016] = 1;
	v->arr[300017] = anon_sym_DOLLAR_LBRACE;
	v->arr[300018] = 13070;
	v->arr[300019] = 1;
	v->arr[300020] = anon_sym_DOLLAR_LPAREN;
	v->arr[300021] = 13072;
	v->arr[300022] = 1;
	v->arr[300023] = anon_sym_BQUOTE;
	v->arr[300024] = 13074;
	v->arr[300025] = 1;
	v->arr[300026] = anon_sym_DOLLAR_BQUOTE;
	v->arr[300027] = 13658;
	v->arr[300028] = 1;
	init_small_table20002(v);
}

void	init_small_table20002(t_small_table *v)
{
	v->arr[300029] = anon_sym_DOLLAR;
	v->arr[300030] = 13660;
	v->arr[300031] = 1;
	v->arr[300032] = anon_sym_DQUOTE;
	v->arr[300033] = 5768;
	v->arr[300034] = 1;
	v->arr[300035] = aux_sym_string_repeat1;
	v->arr[300036] = 13058;
	v->arr[300037] = 2;
	v->arr[300038] = anon_sym_LPAREN_LPAREN;
	v->arr[300039] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->arr[300040] = 6127;
	v->arr[300041] = 4;
	v->arr[300042] = sym_arithmetic_expansion;
	v->arr[300043] = sym_simple_expansion;
	init_small_table20003(v);
}

void	init_small_table20003(t_small_table *v)
{
	v->arr[300044] = sym_expansion;
	v->arr[300045] = sym_command_substitution;
	v->arr[300047] = 12;
	v->arr[300047] = 3;
	v->arr[300048] = 1;
	v->arr[300049] = sym_comment;
	v->arr[300050] = 13060;
	v->arr[300051] = 1;
	v->arr[300052] = anon_sym_DOLLAR_LBRACK;
	v->arr[300053] = 13066;
	v->arr[300054] = 1;
	v->arr[300055] = sym_string_content;
	v->arr[300056] = 13068;
	v->arr[300057] = 1;
	v->arr[300058] = anon_sym_DOLLAR_LBRACE;
	init_small_table20004(v);
}

void	init_small_table20004(t_small_table *v)
{
	v->arr[300059] = 13070;
	v->arr[300060] = 1;
	v->arr[300061] = anon_sym_DOLLAR_LPAREN;
	v->arr[300062] = 13072;
	v->arr[300063] = 1;
	v->arr[300064] = anon_sym_BQUOTE;
	v->arr[300065] = 13074;
	v->arr[300066] = 1;
	v->arr[300067] = anon_sym_DOLLAR_BQUOTE;
	v->arr[300068] = 13662;
	v->arr[300069] = 1;
	v->arr[300070] = anon_sym_DOLLAR;
	v->arr[300071] = 13664;
	v->arr[300072] = 1;
	v->arr[300073] = anon_sym_DQUOTE;
	init_small_table20005(v);
}

// file funcs4000.c
