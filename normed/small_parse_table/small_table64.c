/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs64.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table320(t_small_table *v)
{
	v->arr[4799] = sym_command_substitution;
	v->arr[4800] = sym_process_substitution;
	v->arr[4801] = 1486;
	v->arr[4802] = 19;
	v->arr[4803] = anon_sym_SEMI;
	v->arr[4804] = anon_sym_PIPE_PIPE;
	v->arr[4805] = anon_sym_AMP_AMP;
	v->arr[4806] = anon_sym_PIPE;
	v->arr[4807] = anon_sym_AMP;
	v->arr[4808] = anon_sym_LT;
	v->arr[4809] = anon_sym_GT;
	v->arr[4810] = anon_sym_LT_LT;
	v->arr[4811] = anon_sym_GT_GT;
	v->arr[4812] = anon_sym_SEMI_SEMI;
	v->arr[4813] = anon_sym_PIPE_AMP;
	init_small_table321(v);
}

void	init_small_table321(t_small_table *v)
{
	v->arr[4814] = anon_sym_AMP_GT;
	v->arr[4815] = anon_sym_AMP_GT_GT;
	v->arr[4816] = anon_sym_LT_AMP;
	v->arr[4817] = anon_sym_GT_AMP;
	v->arr[4818] = anon_sym_GT_PIPE;
	v->arr[4819] = anon_sym_LT_AMP_DASH;
	v->arr[4820] = anon_sym_GT_AMP_DASH;
	v->arr[4821] = anon_sym_LT_LT_DASH;
	v->arr[4823] = 6;
	v->arr[4823] = 3;
	v->arr[4824] = 1;
	v->arr[4825] = sym_comment;
	v->arr[4826] = 1474;
	v->arr[4827] = 1;
	v->arr[4828] = aux_sym__literal_repeat1;
	init_small_table322(v);
}

void	init_small_table322(t_small_table *v)
{
	v->arr[4829] = 583;
	v->arr[4830] = 2;
	v->arr[4831] = sym_concatenation;
	v->arr[4832] = aux_sym_for_statement_repeat1;
	v->arr[4833] = 2096;
	v->arr[4834] = 5;
	v->arr[4835] = sym_file_descriptor;
	v->arr[4836] = sym_variable_name;
	v->arr[4837] = sym_test_operator;
	v->arr[4838] = sym__brace_start;
	v->arr[4839] = aux_sym_heredoc_redirect_token1;
	v->arr[4840] = 1158;
	v->arr[4841] = 9;
	v->arr[4842] = sym_arithmetic_expansion;
	v->arr[4843] = sym_brace_expression;
	init_small_table323(v);
}

void	init_small_table323(t_small_table *v)
{
	v->arr[4844] = sym_string;
	v->arr[4845] = sym_translated_string;
	v->arr[4846] = sym_number;
	v->arr[4847] = sym_simple_expansion;
	v->arr[4848] = sym_expansion;
	v->arr[4849] = sym_command_substitution;
	v->arr[4850] = sym_process_substitution;
	v->arr[4851] = 2094;
	v->arr[4852] = 40;
	v->arr[4853] = anon_sym_LPAREN_LPAREN;
	v->arr[4854] = anon_sym_SEMI;
	v->arr[4855] = anon_sym_PIPE_PIPE;
	v->arr[4856] = anon_sym_AMP_AMP;
	v->arr[4857] = anon_sym_PIPE;
	v->arr[4858] = anon_sym_AMP;
	init_small_table324(v);
}

void	init_small_table324(t_small_table *v)
{
	v->arr[4859] = anon_sym_LT;
	v->arr[4860] = anon_sym_GT;
	v->arr[4861] = anon_sym_LT_LT;
	v->arr[4862] = anon_sym_GT_GT;
	v->arr[4863] = anon_sym_esac;
	v->arr[4864] = anon_sym_SEMI_SEMI;
	v->arr[4865] = anon_sym_SEMI_AMP;
	v->arr[4866] = anon_sym_SEMI_SEMI_AMP;
	v->arr[4867] = anon_sym_PIPE_AMP;
	v->arr[4868] = anon_sym_AMP_GT;
	v->arr[4869] = anon_sym_AMP_GT_GT;
	v->arr[4870] = anon_sym_LT_AMP;
	v->arr[4871] = anon_sym_GT_AMP;
	v->arr[4872] = anon_sym_GT_PIPE;
	v->arr[4873] = anon_sym_LT_AMP_DASH;
	init_small_table325(v);
}

// file funcs64.c
