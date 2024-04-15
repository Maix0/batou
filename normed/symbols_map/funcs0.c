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

void	init_symbols_map0(t_symbols_map *v)
{
	v->arr[0] = 0;
	v->arr[sym_word] = sym_word;
	v->arr[anon_sym_for] = anon_sym_for;
	v->arr[anon_sym_select] = anon_sym_select;
	v->arr[anon_sym_in] = anon_sym_in;
	v->arr[anon_sym_LPAREN_LPAREN] = anon_sym_LPAREN_LPAREN;
	v->arr[anon_sym_RPAREN_RPAREN] = anon_sym_RPAREN_RPAREN;
	v->arr[anon_sym_SEMI] = anon_sym_SEMI;
	v->arr[anon_sym_COMMA] = anon_sym_COMMA;
	v->arr[anon_sym_EQ] = anon_sym_EQ;
	v->arr[anon_sym_PLUS_PLUS] = anon_sym_PLUS_PLUS;
	v->arr[anon_sym_DASH_DASH] = anon_sym_DASH_DASH;
	v->arr[anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ;
	v->arr[anon_sym_DASH_EQ] = anon_sym_DASH_EQ;
	v->arr[anon_sym_STAR_EQ] = anon_sym_STAR_EQ;
	init_symbols_map1(v);
}

void	init_symbols_map1(t_symbols_map *v)
{
	v->arr[anon_sym_SLASH_EQ] = anon_sym_SLASH_EQ;
	v->arr[anon_sym_PERCENT_EQ] = anon_sym_PERCENT_EQ;
	v->arr[anon_sym_STAR_STAR_EQ] = anon_sym_STAR_STAR_EQ;
	v->arr[anon_sym_LT_LT_EQ] = anon_sym_LT_LT_EQ;
	v->arr[anon_sym_GT_GT_EQ] = anon_sym_GT_GT_EQ;
	v->arr[anon_sym_AMP_EQ] = anon_sym_AMP_EQ;
	v->arr[anon_sym_CARET_EQ] = anon_sym_CARET_EQ;
	v->arr[anon_sym_PIPE_EQ] = anon_sym_PIPE_EQ;
	v->arr[anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE;
	v->arr[anon_sym_DASHo] = anon_sym_DASHo;
	v->arr[anon_sym_AMP_AMP] = anon_sym_AMP_AMP;
	v->arr[anon_sym_DASHa] = anon_sym_DASHa;
	v->arr[anon_sym_PIPE] = anon_sym_PIPE;
	v->arr[anon_sym_CARET] = anon_sym_CARET;
	v->arr[anon_sym_AMP] = anon_sym_AMP;
	init_symbols_map2(v);
}

void	init_symbols_map2(t_symbols_map *v)
{
	v->arr[anon_sym_EQ_EQ] = anon_sym_EQ_EQ;
	v->arr[anon_sym_BANG_EQ] = anon_sym_BANG_EQ;
	v->arr[anon_sym_LT] = anon_sym_LT;
	v->arr[anon_sym_GT] = anon_sym_GT;
	v->arr[anon_sym_LT_EQ] = anon_sym_LT_EQ;
	v->arr[anon_sym_GT_EQ] = anon_sym_GT_EQ;
	v->arr[anon_sym_LT_LT] = anon_sym_LT_LT;
	v->arr[anon_sym_GT_GT] = anon_sym_GT_GT;
	v->arr[anon_sym_PLUS] = anon_sym_PLUS;
	v->arr[anon_sym_DASH] = anon_sym_DASH;
	v->arr[anon_sym_STAR] = anon_sym_STAR;
	v->arr[anon_sym_SLASH] = anon_sym_SLASH;
	v->arr[anon_sym_PERCENT] = anon_sym_PERCENT;
	v->arr[anon_sym_STAR_STAR] = anon_sym_STAR_STAR;
	v->arr[anon_sym_LPAREN] = anon_sym_LPAREN;
	init_symbols_map3(v);
}

void	init_symbols_map3(t_symbols_map *v)
{
	v->arr[anon_sym_RPAREN] = anon_sym_RPAREN;
	v->arr[aux_sym__c_word_token1] = sym_word;
	v->arr[anon_sym_while] = anon_sym_while;
	v->arr[anon_sym_until] = anon_sym_until;
	v->arr[anon_sym_do] = anon_sym_do;
	v->arr[anon_sym_done] = anon_sym_done;
	v->arr[anon_sym_if] = anon_sym_if;
	v->arr[anon_sym_then] = anon_sym_then;
	v->arr[anon_sym_fi] = anon_sym_fi;
	v->arr[anon_sym_elif] = anon_sym_elif;
	v->arr[anon_sym_else] = anon_sym_else;
	v->arr[anon_sym_case] = anon_sym_case;
	v->arr[anon_sym_esac] = anon_sym_esac;
	v->arr[anon_sym_SEMI_SEMI] = anon_sym_SEMI_SEMI;
	v->arr[anon_sym_SEMI_AMP] = anon_sym_SEMI_AMP;
	init_symbols_map4(v);
}

void	init_symbols_map4(t_symbols_map *v)
{
	v->arr[anon_sym_SEMI_SEMI_AMP] = anon_sym_SEMI_SEMI_AMP;
	v->arr[anon_sym_function] = anon_sym_function;
	v->arr[anon_sym_LBRACE] = anon_sym_LBRACE;
	v->arr[anon_sym_RBRACE] = anon_sym_RBRACE;
	v->arr[anon_sym_PIPE_AMP] = anon_sym_PIPE_AMP;
	v->arr[anon_sym_BANG] = anon_sym_BANG;
	v->arr[anon_sym_LBRACK] = anon_sym_LBRACK;
	v->arr[anon_sym_RBRACK] = anon_sym_RBRACK;
	v->arr[anon_sym_LBRACK_LBRACK] = anon_sym_LBRACK_LBRACK;
	v->arr[anon_sym_RBRACK_RBRACK] = anon_sym_RBRACK_RBRACK;
	v->arr[anon_sym_declare] = anon_sym_declare;
	v->arr[anon_sym_typeset] = anon_sym_typeset;
	v->arr[anon_sym_export] = anon_sym_export;
	v->arr[anon_sym_readonly] = anon_sym_readonly;
	v->arr[anon_sym_local] = anon_sym_local;
	init_symbols_map5(v);
}

// file funcs0.c
