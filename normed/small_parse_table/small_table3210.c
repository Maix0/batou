/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs3210.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table16050(t_small_table *v)
{
	v->arr[240749] = 1;
	v->arr[240750] = sym__c_postfix_expression;
	v->arr[240751] = 3116;
	v->arr[240752] = 1;
	v->arr[240753] = sym__c_binary_expression;
	v->arr[240754] = 3118;
	v->arr[240755] = 1;
	v->arr[240756] = sym__c_unary_expression;
	v->arr[240757] = 4721;
	v->arr[240758] = 1;
	v->arr[240759] = sym__c_terminator;
	v->arr[240760] = 6300;
	v->arr[240761] = 1;
	v->arr[240762] = sym__c_expression;
	v->arr[240763] = 6493;
	init_small_table16051(v);
}

void	init_small_table16051(t_small_table *v)
{
	v->arr[240764] = 1;
	v->arr[240765] = sym__c_variable_assignment;
	v->arr[240766] = 11248;
	v->arr[240767] = 2;
	v->arr[240768] = anon_sym_PLUS_PLUS;
	v->arr[240769] = anon_sym_DASH_DASH;
	v->arr[240770] = 11339;
	v->arr[240771] = 2;
	v->arr[240772] = anon_sym_SEMI;
	v->arr[240773] = anon_sym_AMP;
	v->arr[240774] = 3119;
	v->arr[240775] = 7;
	v->arr[240776] = sym__c_expression_not_assignment;
	v->arr[240777] = sym__c_parenthesized_expression;
	v->arr[240778] = sym_string;
	init_small_table16052(v);
}

void	init_small_table16052(t_small_table *v)
{
	v->arr[240779] = sym_number;
	v->arr[240780] = sym_simple_expansion;
	v->arr[240781] = sym_expansion;
	v->arr[240782] = sym_command_substitution;
	v->arr[240784] = 6;
	v->arr[240784] = 3;
	v->arr[240785] = 1;
	v->arr[240786] = sym_comment;
	v->arr[240787] = 11272;
	v->arr[240788] = 1;
	v->arr[240789] = aux_sym_concatenation_token1;
	v->arr[240790] = 11274;
	v->arr[240791] = 1;
	v->arr[240792] = sym__concat;
	v->arr[240793] = 4245;
	init_small_table16053(v);
}

void	init_small_table16053(t_small_table *v)
{
	v->arr[240794] = 1;
	v->arr[240795] = aux_sym_concatenation_repeat1;
	v->arr[240796] = 4372;
	v->arr[240797] = 2;
	v->arr[240798] = sym_file_descriptor;
	v->arr[240799] = aux_sym_heredoc_redirect_token1;
	v->arr[240800] = 4370;
	v->arr[240801] = 23;
	v->arr[240802] = anon_sym_SEMI;
	v->arr[240803] = anon_sym_PIPE_PIPE;
	v->arr[240804] = anon_sym_AMP_AMP;
	v->arr[240805] = anon_sym_PIPE;
	v->arr[240806] = anon_sym_AMP;
	v->arr[240807] = anon_sym_LT;
	v->arr[240808] = anon_sym_GT;
	init_small_table16054(v);
}

void	init_small_table16054(t_small_table *v)
{
	v->arr[240809] = anon_sym_LT_LT;
	v->arr[240810] = anon_sym_GT_GT;
	v->arr[240811] = anon_sym_esac;
	v->arr[240812] = anon_sym_SEMI_SEMI;
	v->arr[240813] = anon_sym_SEMI_AMP;
	v->arr[240814] = anon_sym_SEMI_SEMI_AMP;
	v->arr[240815] = anon_sym_PIPE_AMP;
	v->arr[240816] = anon_sym_AMP_GT;
	v->arr[240817] = anon_sym_AMP_GT_GT;
	v->arr[240818] = anon_sym_LT_AMP;
	v->arr[240819] = anon_sym_GT_AMP;
	v->arr[240820] = anon_sym_GT_PIPE;
	v->arr[240821] = anon_sym_LT_AMP_DASH;
	v->arr[240822] = anon_sym_GT_AMP_DASH;
	v->arr[240823] = anon_sym_LT_LT_DASH;
	init_small_table16055(v);
}

// file funcs3210.c
