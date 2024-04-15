/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs0.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_parse_table0(t_parse_table *v)
{
	v->arr[0][0] = 1;
	v->arr[0][sym_word] = 1;
	v->arr[0][anon_sym_for] = 1;
	v->arr[0][anon_sym_select] = 1;
	v->arr[0][anon_sym_in] = 1;
	v->arr[0][anon_sym_LPAREN_LPAREN] = 1;
	v->arr[0][anon_sym_SEMI] = 1;
	v->arr[0][anon_sym_COMMA] = 1;
	v->arr[0][anon_sym_EQ] = 1;
	v->arr[0][anon_sym_STAR_EQ] = 1;
	v->arr[0][anon_sym_SLASH_EQ] = 1;
	v->arr[0][anon_sym_PERCENT_EQ] = 1;
	v->arr[0][anon_sym_STAR_STAR_EQ] = 1;
	v->arr[0][anon_sym_LT_LT_EQ] = 1;
	v->arr[0][anon_sym_GT_GT_EQ] = 1;
	init_parse_table1(v);
}

void	init_parse_table1(t_parse_table *v)
{
	v->arr[0][anon_sym_AMP_EQ] = 1;
	v->arr[0][anon_sym_CARET_EQ] = 1;
	v->arr[0][anon_sym_PIPE_EQ] = 1;
	v->arr[0][anon_sym_PIPE_PIPE] = 1;
	v->arr[0][anon_sym_AMP_AMP] = 1;
	v->arr[0][anon_sym_PIPE] = 1;
	v->arr[0][anon_sym_CARET] = 1;
	v->arr[0][anon_sym_AMP] = 1;
	v->arr[0][anon_sym_BANG_EQ] = 1;
	v->arr[0][anon_sym_LT] = 1;
	v->arr[0][anon_sym_GT] = 1;
	v->arr[0][anon_sym_LT_EQ] = 1;
	v->arr[0][anon_sym_GT_EQ] = 1;
	v->arr[0][anon_sym_LT_LT] = 1;
	v->arr[0][anon_sym_GT_GT] = 1;
	init_parse_table2(v);
}

void	init_parse_table2(t_parse_table *v)
{
	v->arr[0][anon_sym_PLUS] = 1;
	v->arr[0][anon_sym_DASH] = 1;
	v->arr[0][anon_sym_STAR] = 1;
	v->arr[0][anon_sym_SLASH] = 1;
	v->arr[0][anon_sym_PERCENT] = 1;
	v->arr[0][anon_sym_STAR_STAR] = 1;
	v->arr[0][anon_sym_LPAREN] = 1;
	v->arr[0][anon_sym_RPAREN] = 1;
	v->arr[0][anon_sym_while] = 1;
	v->arr[0][anon_sym_until] = 1;
	v->arr[0][anon_sym_do] = 1;
	v->arr[0][anon_sym_done] = 1;
	v->arr[0][anon_sym_if] = 1;
	v->arr[0][anon_sym_then] = 1;
	v->arr[0][anon_sym_fi] = 1;
	init_parse_table3(v);
}

void	init_parse_table3(t_parse_table *v)
{
	v->arr[0][anon_sym_elif] = 1;
	v->arr[0][anon_sym_else] = 1;
	v->arr[0][anon_sym_case] = 1;
	v->arr[0][anon_sym_esac] = 1;
	v->arr[0][anon_sym_SEMI_SEMI] = 1;
	v->arr[0][anon_sym_SEMI_AMP] = 1;
	v->arr[0][anon_sym_SEMI_SEMI_AMP] = 1;
	v->arr[0][anon_sym_function] = 1;
	v->arr[0][anon_sym_LBRACE] = 1;
	v->arr[0][anon_sym_RBRACE] = 1;
	v->arr[0][anon_sym_PIPE_AMP] = 1;
	v->arr[0][anon_sym_BANG] = 1;
	v->arr[0][anon_sym_LBRACK] = 1;
	v->arr[0][anon_sym_RBRACK] = 1;
	v->arr[0][anon_sym_LBRACK_LBRACK] = 1;
	init_parse_table4(v);
}

void	init_parse_table4(t_parse_table *v)
{
	v->arr[0][anon_sym_declare] = 1;
	v->arr[0][anon_sym_typeset] = 1;
	v->arr[0][anon_sym_export] = 1;
	v->arr[0][anon_sym_readonly] = 1;
	v->arr[0][anon_sym_local] = 1;
	v->arr[0][anon_sym_unset] = 1;
	v->arr[0][anon_sym_unsetenv] = 1;
	v->arr[0][anon_sym_AMP_GT] = 1;
	v->arr[0][anon_sym_AMP_GT_GT] = 1;
	v->arr[0][anon_sym_LT_AMP] = 1;
	v->arr[0][anon_sym_GT_AMP] = 1;
	v->arr[0][anon_sym_GT_PIPE] = 1;
	v->arr[0][anon_sym_LT_AMP_DASH] = 1;
	v->arr[0][anon_sym_GT_AMP_DASH] = 1;
	v->arr[0][anon_sym_LT_LT_DASH] = 1;
	init_parse_table5(v);
}

// file funcs0.c
