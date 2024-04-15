/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs50.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table250(t_small_table *v)
{
	v->arr[3749] = 1171;
	v->arr[3750] = 9;
	v->arr[3751] = sym_arithmetic_expansion;
	v->arr[3752] = sym_brace_expression;
	v->arr[3753] = sym_string;
	v->arr[3754] = sym_translated_string;
	v->arr[3755] = sym_number;
	v->arr[3756] = sym_simple_expansion;
	v->arr[3757] = sym_expansion;
	v->arr[3758] = sym_command_substitution;
	v->arr[3759] = sym_process_substitution;
	v->arr[3760] = 1755;
	v->arr[3761] = 21;
	v->arr[3762] = anon_sym_SEMI;
	v->arr[3763] = anon_sym_PIPE_PIPE;
	init_small_table251(v);
}

void	init_small_table251(t_small_table *v)
{
	v->arr[3764] = anon_sym_AMP_AMP;
	v->arr[3765] = anon_sym_PIPE;
	v->arr[3766] = anon_sym_AMP;
	v->arr[3767] = anon_sym_LT;
	v->arr[3768] = anon_sym_GT;
	v->arr[3769] = anon_sym_LT_LT;
	v->arr[3770] = anon_sym_GT_GT;
	v->arr[3771] = anon_sym_SEMI_SEMI;
	v->arr[3772] = anon_sym_SEMI_AMP;
	v->arr[3773] = anon_sym_SEMI_SEMI_AMP;
	v->arr[3774] = anon_sym_PIPE_AMP;
	v->arr[3775] = anon_sym_AMP_GT;
	v->arr[3776] = anon_sym_AMP_GT_GT;
	v->arr[3777] = anon_sym_LT_AMP;
	v->arr[3778] = anon_sym_GT_AMP;
	init_small_table252(v);
}

void	init_small_table252(t_small_table *v)
{
	v->arr[3779] = anon_sym_GT_PIPE;
	v->arr[3780] = anon_sym_LT_AMP_DASH;
	v->arr[3781] = anon_sym_GT_AMP_DASH;
	v->arr[3782] = anon_sym_LT_LT_DASH;
	v->arr[3784] = 8;
	v->arr[3784] = 3;
	v->arr[3785] = 1;
	v->arr[3786] = sym_comment;
	v->arr[3787] = 1811;
	v->arr[3788] = 1;
	v->arr[3789] = anon_sym_DQUOTE;
	v->arr[3790] = 1815;
	v->arr[3791] = 1;
	v->arr[3792] = sym_variable_name;
	v->arr[3793] = 1061;
	init_small_table253(v);
}

void	init_small_table253(t_small_table *v)
{
	v->arr[3794] = 1;
	v->arr[3795] = sym_string;
	v->arr[3796] = 1813;
	v->arr[3797] = 2;
	v->arr[3798] = aux_sym__simple_variable_name_token1;
	v->arr[3799] = aux_sym__multiline_variable_name_token1;
	v->arr[3800] = 1241;
	v->arr[3801] = 4;
	v->arr[3802] = sym_file_descriptor;
	v->arr[3803] = sym_test_operator;
	v->arr[3804] = sym__bare_dollar;
	v->arr[3805] = sym__brace_start;
	v->arr[3806] = 1809;
	v->arr[3807] = 9;
	v->arr[3808] = anon_sym_DASH;
	init_small_table254(v);
}

void	init_small_table254(t_small_table *v)
{
	v->arr[3809] = anon_sym_STAR;
	v->arr[3810] = anon_sym_BANG;
	v->arr[3811] = anon_sym_QMARK;
	v->arr[3812] = anon_sym_DOLLAR;
	v->arr[3813] = anon_sym_POUND;
	v->arr[3814] = anon_sym_AT2;
	v->arr[3815] = anon_sym_0;
	v->arr[3816] = anon_sym__;
	v->arr[3817] = 1239;
	v->arr[3818] = 40;
	v->arr[3819] = anon_sym_LPAREN_LPAREN;
	v->arr[3820] = anon_sym_SEMI;
	v->arr[3821] = anon_sym_PIPE_PIPE;
	v->arr[3822] = anon_sym_AMP_AMP;
	v->arr[3823] = anon_sym_PIPE;
	init_small_table255(v);
}

// file funcs50.c
