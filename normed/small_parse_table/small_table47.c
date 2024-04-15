/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs47.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table235(t_small_table *v)
{
	v->arr[3524] = 3;
	v->arr[3525] = sym_raw_string;
	v->arr[3526] = sym_ansi_c_string;
	v->arr[3527] = sym_word;
	v->arr[3528] = 1023;
	v->arr[3529] = 9;
	v->arr[3530] = sym_arithmetic_expansion;
	v->arr[3531] = sym_brace_expression;
	v->arr[3532] = sym_string;
	v->arr[3533] = sym_translated_string;
	v->arr[3534] = sym_number;
	v->arr[3535] = sym_simple_expansion;
	v->arr[3536] = sym_expansion;
	v->arr[3537] = sym_command_substitution;
	v->arr[3538] = sym_process_substitution;
	init_small_table236(v);
}

void	init_small_table236(t_small_table *v)
{
	v->arr[3539] = 1613;
	v->arr[3540] = 20;
	v->arr[3541] = anon_sym_SEMI;
	v->arr[3542] = anon_sym_PIPE_PIPE;
	v->arr[3543] = anon_sym_AMP_AMP;
	v->arr[3544] = anon_sym_PIPE;
	v->arr[3545] = anon_sym_AMP;
	v->arr[3546] = anon_sym_LT;
	v->arr[3547] = anon_sym_GT;
	v->arr[3548] = anon_sym_LT_LT;
	v->arr[3549] = anon_sym_GT_GT;
	v->arr[3550] = anon_sym_RPAREN;
	v->arr[3551] = anon_sym_SEMI_SEMI;
	v->arr[3552] = anon_sym_PIPE_AMP;
	v->arr[3553] = anon_sym_AMP_GT;
	init_small_table237(v);
}

void	init_small_table237(t_small_table *v)
{
	v->arr[3554] = anon_sym_AMP_GT_GT;
	v->arr[3555] = anon_sym_LT_AMP;
	v->arr[3556] = anon_sym_GT_AMP;
	v->arr[3557] = anon_sym_GT_PIPE;
	v->arr[3558] = anon_sym_LT_AMP_DASH;
	v->arr[3559] = anon_sym_GT_AMP_DASH;
	v->arr[3560] = anon_sym_LT_LT_DASH;
	v->arr[3562] = 27;
	v->arr[3562] = 3;
	v->arr[3563] = 1;
	v->arr[3564] = sym_comment;
	v->arr[3565] = 1491;
	v->arr[3566] = 1;
	v->arr[3567] = aux_sym_heredoc_redirect_token1;
	v->arr[3568] = 1868;
	init_small_table238(v);
}

void	init_small_table238(t_small_table *v)
{
	v->arr[3569] = 1;
	v->arr[3570] = anon_sym_LT_LT_LT;
	v->arr[3571] = 1871;
	v->arr[3572] = 1;
	v->arr[3573] = anon_sym_DOLLAR_LBRACK;
	v->arr[3574] = 1874;
	v->arr[3575] = 1;
	v->arr[3576] = anon_sym_DOLLAR;
	v->arr[3577] = 1877;
	v->arr[3578] = 1;
	v->arr[3579] = sym__special_character;
	v->arr[3580] = 1880;
	v->arr[3581] = 1;
	v->arr[3582] = anon_sym_DQUOTE;
	v->arr[3583] = 1883;
	init_small_table239(v);
}

void	init_small_table239(t_small_table *v)
{
	v->arr[3584] = 1;
	v->arr[3585] = aux_sym_number_token1;
	v->arr[3586] = 1886;
	v->arr[3587] = 1;
	v->arr[3588] = aux_sym_number_token2;
	v->arr[3589] = 1889;
	v->arr[3590] = 1;
	v->arr[3591] = anon_sym_DOLLAR_LBRACE;
	v->arr[3592] = 1892;
	v->arr[3593] = 1;
	v->arr[3594] = anon_sym_DOLLAR_LPAREN;
	v->arr[3595] = 1895;
	v->arr[3596] = 1;
	v->arr[3597] = anon_sym_BQUOTE;
	v->arr[3598] = 1898;
	init_small_table240(v);
}

// file funcs47.c
