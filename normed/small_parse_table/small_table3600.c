/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs3600.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table18000(t_small_table *v)
{
	v->arr[269999] = sym_comment;
	v->arr[270000] = 11808;
	v->arr[270001] = 1;
	v->arr[270002] = anon_sym_LPAREN;
	v->arr[270003] = 11810;
	v->arr[270004] = 1;
	v->arr[270005] = aux_sym__c_word_token1;
	v->arr[270006] = 11812;
	v->arr[270007] = 1;
	v->arr[270008] = anon_sym_DOLLAR;
	v->arr[270009] = 11814;
	v->arr[270010] = 1;
	v->arr[270011] = anon_sym_DQUOTE;
	v->arr[270012] = 11816;
	v->arr[270013] = 1;
	init_small_table18001(v);
}

void	init_small_table18001(t_small_table *v)
{
	v->arr[270014] = aux_sym_number_token1;
	v->arr[270015] = 11818;
	v->arr[270016] = 1;
	v->arr[270017] = aux_sym_number_token2;
	v->arr[270018] = 11820;
	v->arr[270019] = 1;
	v->arr[270020] = anon_sym_DOLLAR_LBRACE;
	v->arr[270021] = 11822;
	v->arr[270022] = 1;
	v->arr[270023] = anon_sym_DOLLAR_LPAREN;
	v->arr[270024] = 11824;
	v->arr[270025] = 1;
	v->arr[270026] = anon_sym_BQUOTE;
	v->arr[270027] = 11826;
	v->arr[270028] = 1;
	init_small_table18002(v);
}

void	init_small_table18002(t_small_table *v)
{
	v->arr[270029] = anon_sym_DOLLAR_BQUOTE;
	v->arr[270030] = 3285;
	v->arr[270031] = 1;
	v->arr[270032] = sym__c_postfix_expression;
	v->arr[270033] = 3286;
	v->arr[270034] = 1;
	v->arr[270035] = sym__c_binary_expression;
	v->arr[270036] = 3290;
	v->arr[270037] = 1;
	v->arr[270038] = sym__c_unary_expression;
	v->arr[270039] = 6741;
	v->arr[270040] = 1;
	v->arr[270041] = sym__c_expression;
	v->arr[270042] = 6768;
	v->arr[270043] = 1;
	init_small_table18003(v);
}

void	init_small_table18003(t_small_table *v)
{
	v->arr[270044] = sym__c_variable_assignment;
	v->arr[270045] = 11806;
	v->arr[270046] = 2;
	v->arr[270047] = anon_sym_PLUS_PLUS;
	v->arr[270048] = anon_sym_DASH_DASH;
	v->arr[270049] = 3292;
	v->arr[270050] = 7;
	v->arr[270051] = sym__c_expression_not_assignment;
	v->arr[270052] = sym__c_parenthesized_expression;
	v->arr[270053] = sym_string;
	v->arr[270054] = sym_number;
	v->arr[270055] = sym_simple_expansion;
	v->arr[270056] = sym_expansion;
	v->arr[270057] = sym_command_substitution;
	v->arr[270059] = 3;
	init_small_table18004(v);
}

void	init_small_table18004(t_small_table *v)
{
	v->arr[270059] = 3;
	v->arr[270060] = 1;
	v->arr[270061] = sym_comment;
	v->arr[270062] = 12119;
	v->arr[270063] = 3;
	v->arr[270064] = sym_file_descriptor;
	v->arr[270065] = 0;
	v->arr[270066] = aux_sym_heredoc_redirect_token1;
	v->arr[270067] = 12117;
	v->arr[270068] = 21;
	v->arr[270069] = anon_sym_SEMI;
	v->arr[270070] = anon_sym_PIPE_PIPE;
	v->arr[270071] = anon_sym_AMP_AMP;
	v->arr[270072] = anon_sym_PIPE;
	v->arr[270073] = anon_sym_AMP;
	init_small_table18005(v);
}

// file funcs3600.c
