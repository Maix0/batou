/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs54.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table270(t_small_table *v)
{
	v->arr[4049] = sym_brace_expression;
	v->arr[4050] = sym_string;
	v->arr[4051] = sym_translated_string;
	v->arr[4052] = sym_number;
	v->arr[4053] = sym_simple_expansion;
	v->arr[4054] = sym_expansion;
	v->arr[4055] = sym_command_substitution;
	v->arr[4056] = sym_process_substitution;
	v->arr[4057] = 1625;
	v->arr[4058] = 20;
	v->arr[4059] = anon_sym_SEMI;
	v->arr[4060] = anon_sym_PIPE_PIPE;
	v->arr[4061] = anon_sym_AMP_AMP;
	v->arr[4062] = anon_sym_PIPE;
	v->arr[4063] = anon_sym_AMP;
	init_small_table271(v);
}

void	init_small_table271(t_small_table *v)
{
	v->arr[4064] = anon_sym_LT;
	v->arr[4065] = anon_sym_GT;
	v->arr[4066] = anon_sym_LT_LT;
	v->arr[4067] = anon_sym_GT_GT;
	v->arr[4068] = anon_sym_RPAREN;
	v->arr[4069] = anon_sym_SEMI_SEMI;
	v->arr[4070] = anon_sym_PIPE_AMP;
	v->arr[4071] = anon_sym_AMP_GT;
	v->arr[4072] = anon_sym_AMP_GT_GT;
	v->arr[4073] = anon_sym_LT_AMP;
	v->arr[4074] = anon_sym_GT_AMP;
	v->arr[4075] = anon_sym_GT_PIPE;
	v->arr[4076] = anon_sym_LT_AMP_DASH;
	v->arr[4077] = anon_sym_GT_AMP_DASH;
	v->arr[4078] = anon_sym_LT_LT_DASH;
	init_small_table272(v);
}

void	init_small_table272(t_small_table *v)
{
	v->arr[4080] = 8;
	v->arr[4080] = 3;
	v->arr[4081] = 1;
	v->arr[4082] = sym_comment;
	v->arr[4083] = 1458;
	v->arr[4084] = 1;
	v->arr[4085] = anon_sym_DQUOTE;
	v->arr[4086] = 1973;
	v->arr[4087] = 1;
	v->arr[4088] = sym_variable_name;
	v->arr[4089] = 1130;
	v->arr[4090] = 1;
	v->arr[4091] = sym_string;
	v->arr[4092] = 1971;
	v->arr[4093] = 2;
	init_small_table273(v);
}

void	init_small_table273(t_small_table *v)
{
	v->arr[4094] = aux_sym__simple_variable_name_token1;
	v->arr[4095] = aux_sym__multiline_variable_name_token1;
	v->arr[4096] = 1235;
	v->arr[4097] = 4;
	v->arr[4098] = sym_file_descriptor;
	v->arr[4099] = sym_test_operator;
	v->arr[4100] = sym__bare_dollar;
	v->arr[4101] = sym__brace_start;
	v->arr[4102] = 1969;
	v->arr[4103] = 9;
	v->arr[4104] = anon_sym_DASH;
	v->arr[4105] = anon_sym_STAR;
	v->arr[4106] = anon_sym_BANG;
	v->arr[4107] = anon_sym_QMARK;
	v->arr[4108] = anon_sym_DOLLAR;
	init_small_table274(v);
}

void	init_small_table274(t_small_table *v)
{
	v->arr[4109] = anon_sym_POUND;
	v->arr[4110] = anon_sym_AT2;
	v->arr[4111] = anon_sym_0;
	v->arr[4112] = anon_sym__;
	v->arr[4113] = 1227;
	v->arr[4114] = 40;
	v->arr[4115] = anon_sym_LPAREN_LPAREN;
	v->arr[4116] = anon_sym_SEMI;
	v->arr[4117] = anon_sym_PIPE_PIPE;
	v->arr[4118] = anon_sym_AMP_AMP;
	v->arr[4119] = anon_sym_PIPE;
	v->arr[4120] = anon_sym_AMP;
	v->arr[4121] = anon_sym_EQ_EQ;
	v->arr[4122] = anon_sym_LT;
	v->arr[4123] = anon_sym_GT;
	init_small_table275(v);
}

// file funcs54.c
