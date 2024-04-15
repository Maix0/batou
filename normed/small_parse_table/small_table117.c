/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs117.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table585(t_small_table *v)
{
	v->arr[8774] = sym_brace_expression;
	v->arr[8775] = sym_string;
	v->arr[8776] = sym_translated_string;
	v->arr[8777] = sym_number;
	v->arr[8778] = sym_simple_expansion;
	v->arr[8779] = sym_expansion;
	v->arr[8780] = sym_command_substitution;
	v->arr[8781] = sym_process_substitution;
	v->arr[8782] = 1442;
	v->arr[8783] = 10;
	v->arr[8784] = sym_file_descriptor;
	v->arr[8785] = anon_sym_PIPE_PIPE;
	v->arr[8786] = anon_sym_AMP_AMP;
	v->arr[8787] = anon_sym_GT_GT;
	v->arr[8788] = anon_sym_PIPE_AMP;
	init_small_table586(v);
}

void	init_small_table586(t_small_table *v)
{
	v->arr[8789] = anon_sym_AMP_GT_GT;
	v->arr[8790] = anon_sym_GT_PIPE;
	v->arr[8791] = anon_sym_LT_AMP_DASH;
	v->arr[8792] = anon_sym_GT_AMP_DASH;
	v->arr[8793] = anon_sym_LT_LT_DASH;
	v->arr[8795] = 37;
	v->arr[8795] = 13;
	v->arr[8796] = 1;
	v->arr[8797] = anon_sym_LPAREN_LPAREN;
	v->arr[8798] = 19;
	v->arr[8799] = 1;
	v->arr[8800] = anon_sym_LPAREN;
	v->arr[8801] = 33;
	v->arr[8802] = 1;
	v->arr[8803] = anon_sym_LBRACK;
	init_small_table587(v);
}

void	init_small_table587(t_small_table *v)
{
	v->arr[8804] = 35;
	v->arr[8805] = 1;
	v->arr[8806] = anon_sym_LBRACK_LBRACK;
	v->arr[8807] = 45;
	v->arr[8808] = 1;
	v->arr[8809] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->arr[8810] = 47;
	v->arr[8811] = 1;
	v->arr[8812] = anon_sym_DOLLAR_LBRACK;
	v->arr[8813] = 49;
	v->arr[8814] = 1;
	v->arr[8815] = anon_sym_DOLLAR;
	v->arr[8816] = 51;
	v->arr[8817] = 1;
	v->arr[8818] = sym__special_character;
	init_small_table588(v);
}

void	init_small_table588(t_small_table *v)
{
	v->arr[8819] = 53;
	v->arr[8820] = 1;
	v->arr[8821] = anon_sym_DQUOTE;
	v->arr[8822] = 57;
	v->arr[8823] = 1;
	v->arr[8824] = aux_sym_number_token1;
	v->arr[8825] = 59;
	v->arr[8826] = 1;
	v->arr[8827] = aux_sym_number_token2;
	v->arr[8828] = 61;
	v->arr[8829] = 1;
	v->arr[8830] = anon_sym_DOLLAR_LBRACE;
	v->arr[8831] = 63;
	v->arr[8832] = 1;
	v->arr[8833] = anon_sym_DOLLAR_LPAREN;
	init_small_table589(v);
}

void	init_small_table589(t_small_table *v)
{
	v->arr[8834] = 65;
	v->arr[8835] = 1;
	v->arr[8836] = anon_sym_BQUOTE;
	v->arr[8837] = 67;
	v->arr[8838] = 1;
	v->arr[8839] = anon_sym_DOLLAR_BQUOTE;
	v->arr[8840] = 71;
	v->arr[8841] = 1;
	v->arr[8842] = sym_comment;
	v->arr[8843] = 75;
	v->arr[8844] = 1;
	v->arr[8845] = sym_variable_name;
	v->arr[8846] = 77;
	v->arr[8847] = 1;
	v->arr[8848] = sym_test_operator;
	init_small_table590(v);
}

// file funcs117.c
