/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs48.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table240(t_small_table *v)
{
	v->arr[3599] = 1;
	v->arr[3600] = anon_sym_DOLLAR_BQUOTE;
	v->arr[3601] = 1904;
	v->arr[3602] = 1;
	v->arr[3603] = sym_file_descriptor;
	v->arr[3604] = 1907;
	v->arr[3605] = 1;
	v->arr[3606] = sym_test_operator;
	v->arr[3607] = 1910;
	v->arr[3608] = 1;
	v->arr[3609] = sym__bare_dollar;
	v->arr[3610] = 1913;
	v->arr[3611] = 1;
	v->arr[3612] = sym__brace_start;
	v->arr[3613] = 562;
	init_small_table241(v);
}

void	init_small_table241(t_small_table *v)
{
	v->arr[3614] = 1;
	v->arr[3615] = aux_sym_command_repeat2;
	v->arr[3616] = 1321;
	v->arr[3617] = 1;
	v->arr[3618] = aux_sym__literal_repeat1;
	v->arr[3619] = 1712;
	v->arr[3620] = 1;
	v->arr[3621] = sym_herestring_redirect;
	v->arr[3622] = 1716;
	v->arr[3623] = 1;
	v->arr[3624] = sym_concatenation;
	v->arr[3625] = 1862;
	v->arr[3626] = 2;
	v->arr[3627] = anon_sym_LPAREN_LPAREN;
	v->arr[3628] = anon_sym_DOLLAR_LPAREN_LPAREN;
	init_small_table242(v);
}

void	init_small_table242(t_small_table *v)
{
	v->arr[3629] = 1865;
	v->arr[3630] = 2;
	v->arr[3631] = anon_sym_EQ_EQ;
	v->arr[3632] = anon_sym_EQ_TILDE;
	v->arr[3633] = 1901;
	v->arr[3634] = 2;
	v->arr[3635] = anon_sym_LT_LPAREN;
	v->arr[3636] = anon_sym_GT_LPAREN;
	v->arr[3637] = 1859;
	v->arr[3638] = 3;
	v->arr[3639] = sym_raw_string;
	v->arr[3640] = sym_ansi_c_string;
	v->arr[3641] = sym_word;
	v->arr[3642] = 1023;
	v->arr[3643] = 9;
	init_small_table243(v);
}

void	init_small_table243(t_small_table *v)
{
	v->arr[3644] = sym_arithmetic_expansion;
	v->arr[3645] = sym_brace_expression;
	v->arr[3646] = sym_string;
	v->arr[3647] = sym_translated_string;
	v->arr[3648] = sym_number;
	v->arr[3649] = sym_simple_expansion;
	v->arr[3650] = sym_expansion;
	v->arr[3651] = sym_command_substitution;
	v->arr[3652] = sym_process_substitution;
	v->arr[3653] = 1486;
	v->arr[3654] = 20;
	v->arr[3655] = anon_sym_SEMI;
	v->arr[3656] = anon_sym_PIPE_PIPE;
	v->arr[3657] = anon_sym_AMP_AMP;
	v->arr[3658] = anon_sym_PIPE;
	init_small_table244(v);
}

void	init_small_table244(t_small_table *v)
{
	v->arr[3659] = anon_sym_AMP;
	v->arr[3660] = anon_sym_LT;
	v->arr[3661] = anon_sym_GT;
	v->arr[3662] = anon_sym_LT_LT;
	v->arr[3663] = anon_sym_GT_GT;
	v->arr[3664] = anon_sym_RPAREN;
	v->arr[3665] = anon_sym_SEMI_SEMI;
	v->arr[3666] = anon_sym_PIPE_AMP;
	v->arr[3667] = anon_sym_AMP_GT;
	v->arr[3668] = anon_sym_AMP_GT_GT;
	v->arr[3669] = anon_sym_LT_AMP;
	v->arr[3670] = anon_sym_GT_AMP;
	v->arr[3671] = anon_sym_GT_PIPE;
	v->arr[3672] = anon_sym_LT_AMP_DASH;
	v->arr[3673] = anon_sym_GT_AMP_DASH;
	init_small_table245(v);
}

// file funcs48.c
