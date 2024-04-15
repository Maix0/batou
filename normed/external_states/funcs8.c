/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs8.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/15 16:33:16 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_ext_scanner_states40(t_external_scanner_states *v)
{
	v->arr[115][ts_external_token__concat] = true;
	v->arr[116][ts_external_token_heredoc_content] = true;
	v->arr[116][ts_external_token_heredoc_end] = true;
	v->arr[117][ts_external_token__regex_no_slash] = true;
	v->arr[117][ts_external_token_RBRACE] = true;
	v->arr[118][ts_external_token__concat] = true;
	v->arr[118][ts_external_token_heredoc_redirect_token1] = true;
	v->arr[119][ts_external_token_regex] = true;
	v->arr[119][ts_external_token_RBRACE] = true;
	v->arr[120][ts_external_token_heredoc_redirect_token1] = true;
	v->arr[121][ts_external_token__concat] = true;
	v->arr[121][ts_external_token__expansion_word] = true;
	v->arr[121][ts_external_token_RBRACE] = true;
	v->arr[122][ts_external_token_simple_heredoc_body] = true;
	v->arr[122][ts_external_token__heredoc_body_beginning] = true;
	init_ext_scanner_states41(v);
}

void	init_ext_scanner_states41(t_external_scanner_states *v)
{
	v->arr[123][ts_external_token__concat] = true;
	v->arr[123][ts_external_token__external_expansion_sym_hash] = true;
	v->arr[123][ts_external_token__external_expansion_sym_bang] = true;
	v->arr[123][ts_external_token__external_expansion_sym_equal] = true;
	v->arr[123][ts_external_token_RBRACE] = true;
	v->arr[124][ts_external_token__concat] = true;
	v->arr[124][ts_external_token_RBRACE] = true;
	v->arr[125][ts_external_token__external_expansion_sym_hash] = true;
	v->arr[125][ts_external_token__external_expansion_sym_bang] = true;
	v->arr[125][ts_external_token__external_expansion_sym_equal] = true;
	v->arr[125][ts_external_token_RBRACE] = true;
	v->arr[126][ts_external_token_esac] = true;
	v->arr[127][ts_external_token_extglob_pattern] = true;
	v->arr[128][ts_external_token_heredoc_end] = true;
	v->arr[129][ts_external_token_RBRACK] = true;
	init_ext_scanner_states42(v);
}

void	init_ext_scanner_states42(t_external_scanner_states *v)
{
	v->arr[130][ts_external_token_heredoc_start] = true;
}

// file funcs8.c
