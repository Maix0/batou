/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   symbol_names.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 17:18:51 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 17:28:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/symbols.h"

t_symbol_names	*get_symbols_names(void)
{
	static t_symbol_names	symbols_names;

	return (&symbols_names);
}

void			init_symbol_names(t_symbol_names *v);
void			init_symbol_names2(t_symbol_names *v);
void			init_symbol_names3(t_symbol_names *v);
void			init_symbol_names4(t_symbol_names *v);
void			init_symbol_names5(t_symbol_names *v);
void			init_symbol_names6(t_symbol_names *v);
void			init_symbol_names7(t_symbol_names *v);
void			init_symbol_names8(t_symbol_names *v);
void			init_symbol_names9(t_symbol_names *v);
void			init_symbol_names10(t_symbol_names *v);
void			init_symbol_names11(t_symbol_names *v);
void			init_symbol_names12(t_symbol_names *v);
void			init_symbol_names13(t_symbol_names *v);

void	init_symbol_names(t_symbol_names *v)
{
	v->arr[0] = "end";
	v->arr[sym_word] = "word";
	v->arr[anon_sym_for] = "for";
	v->arr[anon_sym_select] = "select";
	v->arr[anon_sym_in] = "in";
	v->arr[anon_sym_LPAREN_LPAREN] = "((";
	v->arr[anon_sym_RPAREN_RPAREN] = "))";
	v->arr[anon_sym_SEMI] = ";";
	v->arr[anon_sym_COMMA] = ";";
	v->arr[anon_sym_EQ] = "=";
	v->arr[anon_sym_PLUS_PLUS] = "++";
	v->arr[anon_sym_DASH_DASH] = "--";
	v->arr[anon_sym_PLUS_EQ] = "+=";
	v->arr[anon_sym_DASH_EQ] = "-=";
	v->arr[anon_sym_STAR_EQ] = "*=";
	v->arr[anon_sym_SLASH_EQ] = "/=";
	v->arr[anon_sym_PERCENT_EQ] = "%=";
	v->arr[anon_sym_STAR_STAR_EQ] = "**=";
	v->arr[anon_sym_LT_LT_EQ] = "<<=";
	v->arr[anon_sym_GT_GT_EQ] = ">>=";
	v->arr[anon_sym_AMP_EQ] = "&=";
	v->arr[anon_sym_CARET_EQ] = "^=";
	v->arr[anon_sym_PIPE_EQ] = "|=";
	init_symbol_names2(v);
}

void	init_symbol_names2(t_symbol_names *v)
{
	v->arr[anon_sym_DASHo] = "-o";
	v->arr[anon_sym_AMP_AMP] = "&&";
	v->arr[anon_sym_DASHa] = "-a";
	v->arr[anon_sym_PIPE] = "|";
	v->arr[anon_sym_CARET] = "^";
	v->arr[anon_sym_AMP] = "&";
	v->arr[anon_sym_EQ_EQ] = "==";
	v->arr[anon_sym_BANG_EQ] = "!=";
	v->arr[anon_sym_LT] = "<";
	v->arr[anon_sym_GT] = ">";
	v->arr[anon_sym_LT_EQ] = "<=";
	v->arr[anon_sym_GT_EQ] = ">=";
	v->arr[anon_sym_LT_LT] = "<<";
	v->arr[anon_sym_GT_GT] = ">>";
	v->arr[anon_sym_PLUS] = "+";
	v->arr[anon_sym_DASH] = "-";
	v->arr[anon_sym_STAR] = "*";
	v->arr[anon_sym_SLASH] = "/";
	v->arr[anon_sym_PERCENT] = "%";
	v->arr[anon_sym_STAR_STAR] = "**";
	v->arr[anon_sym_LPAREN] = "(";
	v->arr[anon_sym_RPAREN] = ")";
	v->arr[aux_sym__c_word_token1] = "word";
	init_symbol_names3(v);
}

void	init_symbol_names3(t_symbol_names *v)
{
	v->arr[anon_sym_until] = "until";
	v->arr[anon_sym_do] = "do";
	v->arr[anon_sym_done] = "done";
	v->arr[anon_sym_if] = "if";
	v->arr[anon_sym_then] = "then";
	v->arr[anon_sym_fi] = "fi";
	v->arr[anon_sym_elif] = "elif";
	v->arr[anon_sym_else] = "else";
	v->arr[anon_sym_case] = "case";
	v->arr[anon_sym_esac] = "esac";
	v->arr[anon_sym_SEMI_SEMI] = ";;";
	v->arr[anon_sym_SEMI_AMP] = ";&";
	v->arr[anon_sym_SEMI_SEMI_AMP] = ";;&";
	v->arr[anon_sym_function] = "function";
	v->arr[anon_sym_LBRACE] = "{";
	v->arr[anon_sym_RBRACE] = "}";
	v->arr[anon_sym_PIPE_AMP] = "|&";
	v->arr[anon_sym_BANG] = "!";
	v->arr[anon_sym_LBRACK] = "v[";
	v->arr[anon_sym_RBRACK] = "]";
	v->arr[anon_sym_LBRACK_LBRACK] = "v[v[";
	v->arr[anon_sym_RBRACK_RBRACK] = "]]";
	init_symbol_names4(v);
}

void	init_symbol_names4(t_symbol_names *v)
{
	v->arr[anon_sym_export] = "export";
	v->arr[anon_sym_readonly] = "readonly";
	v->arr[anon_sym_local] = "local";
	v->arr[anon_sym_unset] = "unset";
	v->arr[anon_sym_unsetenv] = "unsetenv";
	v->arr[anon_sym_EQ_TILDE] = "=~";
	v->arr[anon_sym_AMP_GT] = "&>";
	v->arr[anon_sym_AMP_GT_GT] = "&>>";
	v->arr[anon_sym_LT_AMP] = "<&";
	v->arr[anon_sym_GT_AMP] = ">&";
	v->arr[anon_sym_GT_PIPE] = ">|";
	v->arr[anon_sym_LT_AMP_DASH] = "<&-";
	v->arr[anon_sym_GT_AMP_DASH] = ">&-";
	v->arr[anon_sym_LT_LT_DASH] = "<<-";
	v->arr[aux_sym_heredoc_redirect_token1] = "heredoc_redirect_token1";
	v->arr[anon_sym_LT_LT_LT] = "<<<";
	v->arr[anon_sym_QMARK] = "\?";
	v->arr[anon_sym_COLON] = ":";
	v->arr[anon_sym_PLUS_PLUS2] = "++";
	v->arr[anon_sym_DASH_DASH2] = "--";
	v->arr[anon_sym_DASH2] = "-";
	v->arr[anon_sym_PLUS2] = "+";
	v->arr[anon_sym_TILDE] = "~";
	v->arr[anon_sym_DOLLAR_LPAREN_LPAREN] = "$((";
	init_symbol_names5(v);
}
