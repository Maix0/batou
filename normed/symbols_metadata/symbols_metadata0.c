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

void	init_sym_metadata0(t_symbols_metadata *v)
{
	v->arr[0] = (t_sm){.visible = 0, .named = 1};
	v->arr[sym_word] = (t_sm){.visible = 1, .named = 1};
	v->arr[anon_sym_for] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_select] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_in] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_LPAREN_LPAREN] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_RPAREN_RPAREN] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_SEMI] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_COMMA] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_EQ] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_PLUS_PLUS] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_DASH_DASH] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_PLUS_EQ] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_DASH_EQ] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_STAR_EQ] = (t_sm){.visible = 1, .named = 0};
	init_sym_metadata1(v);
}

void	init_sym_metadata1(t_symbols_metadata *v)
{
	v->arr[anon_sym_SLASH_EQ] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_PERCENT_EQ] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_STAR_STAR_EQ] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_LT_LT_EQ] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_GT_GT_EQ] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_AMP_EQ] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_CARET_EQ] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_PIPE_EQ] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_PIPE_PIPE] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_DASHo] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_AMP_AMP] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_DASHa] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_PIPE] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_CARET] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_AMP] = (t_sm){.visible = 1, .named = 0};
	init_sym_metadata2(v);
}

void	init_sym_metadata2(t_symbols_metadata *v)
{
	v->arr[anon_sym_EQ_EQ] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_BANG_EQ] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_LT] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_GT] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_LT_EQ] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_GT_EQ] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_LT_LT] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_GT_GT] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_PLUS] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_DASH] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_STAR] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_SLASH] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_PERCENT] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_STAR_STAR] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_LPAREN] = (t_sm){.visible = 1, .named = 0};
	init_sym_metadata3(v);
}

void	init_sym_metadata3(t_symbols_metadata *v)
{
	v->arr[anon_sym_RPAREN] = (t_sm){.visible = 1, .named = 0};
	v->arr[aux_sym__c_word_token1] = (t_sm){.visible = 1, .named = 1};
	v->arr[anon_sym_while] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_until] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_do] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_done] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_if] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_then] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_fi] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_elif] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_else] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_case] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_esac] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_SEMI_SEMI] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_SEMI_AMP] = (t_sm){.visible = 1, .named = 0};
	init_sym_metadata4(v);
}

void	init_sym_metadata4(t_symbols_metadata *v)
{
	v->arr[anon_sym_SEMI_SEMI_AMP] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_function] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_LBRACE] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_RBRACE] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_PIPE_AMP] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_BANG] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_LBRACK] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_RBRACK] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_LBRACK_LBRACK] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_RBRACK_RBRACK] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_declare] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_typeset] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_export] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_readonly] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_local] = (t_sm){.visible = 1, .named = 0};
	init_sym_metadata5(v);
}

// file funcs0.c
