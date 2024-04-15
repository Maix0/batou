/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs104.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table520(t_small_table *v)
{
	v->arr[7799] = sym_brace_expression;
	v->arr[7800] = sym_string;
	v->arr[7801] = sym_translated_string;
	v->arr[7802] = sym_number;
	v->arr[7803] = sym_simple_expansion;
	v->arr[7804] = sym_expansion;
	v->arr[7805] = sym_command_substitution;
	v->arr[7806] = sym_process_substitution;
	v->arr[7807] = 2498;
	v->arr[7808] = 40;
	v->arr[7809] = anon_sym_LPAREN_LPAREN;
	v->arr[7810] = anon_sym_SEMI;
	v->arr[7811] = anon_sym_PIPE_PIPE;
	v->arr[7812] = anon_sym_AMP_AMP;
	v->arr[7813] = anon_sym_PIPE;
	init_small_table521(v);
}

void	init_small_table521(t_small_table *v)
{
	v->arr[7814] = anon_sym_AMP;
	v->arr[7815] = anon_sym_LT;
	v->arr[7816] = anon_sym_GT;
	v->arr[7817] = anon_sym_LT_LT;
	v->arr[7818] = anon_sym_GT_GT;
	v->arr[7819] = anon_sym_esac;
	v->arr[7820] = anon_sym_SEMI_SEMI;
	v->arr[7821] = anon_sym_SEMI_AMP;
	v->arr[7822] = anon_sym_SEMI_SEMI_AMP;
	v->arr[7823] = anon_sym_PIPE_AMP;
	v->arr[7824] = anon_sym_AMP_GT;
	v->arr[7825] = anon_sym_AMP_GT_GT;
	v->arr[7826] = anon_sym_LT_AMP;
	v->arr[7827] = anon_sym_GT_AMP;
	v->arr[7828] = anon_sym_GT_PIPE;
	init_small_table522(v);
}

void	init_small_table522(t_small_table *v)
{
	v->arr[7829] = anon_sym_LT_AMP_DASH;
	v->arr[7830] = anon_sym_GT_AMP_DASH;
	v->arr[7831] = anon_sym_LT_LT_DASH;
	v->arr[7832] = anon_sym_LT_LT_LT;
	v->arr[7833] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->arr[7834] = anon_sym_DOLLAR_LBRACK;
	v->arr[7835] = anon_sym_DOLLAR;
	v->arr[7836] = sym__special_character;
	v->arr[7837] = anon_sym_DQUOTE;
	v->arr[7838] = sym_raw_string;
	v->arr[7839] = sym_ansi_c_string;
	v->arr[7840] = aux_sym_number_token1;
	v->arr[7841] = aux_sym_number_token2;
	v->arr[7842] = anon_sym_DOLLAR_LBRACE;
	v->arr[7843] = anon_sym_DOLLAR_LPAREN;
	init_small_table523(v);
}

void	init_small_table523(t_small_table *v)
{
	v->arr[7844] = anon_sym_BQUOTE;
	v->arr[7845] = anon_sym_DOLLAR_BQUOTE;
	v->arr[7846] = anon_sym_LT_LPAREN;
	v->arr[7847] = anon_sym_GT_LPAREN;
	v->arr[7848] = sym_word;
	v->arr[7850] = 8;
	v->arr[7850] = 3;
	v->arr[7851] = 1;
	v->arr[7852] = sym_comment;
	v->arr[7853] = 1555;
	v->arr[7854] = 1;
	v->arr[7855] = anon_sym_DQUOTE;
	v->arr[7856] = 2070;
	v->arr[7857] = 1;
	v->arr[7858] = sym_variable_name;
	init_small_table524(v);
}

void	init_small_table524(t_small_table *v)
{
	v->arr[7859] = 1176;
	v->arr[7860] = 1;
	v->arr[7861] = sym_string;
	v->arr[7862] = 2068;
	v->arr[7863] = 2;
	v->arr[7864] = aux_sym__simple_variable_name_token1;
	v->arr[7865] = aux_sym__multiline_variable_name_token1;
	v->arr[7866] = 1241;
	v->arr[7867] = 4;
	v->arr[7868] = sym_file_descriptor;
	v->arr[7869] = sym_test_operator;
	v->arr[7870] = sym__bare_dollar;
	v->arr[7871] = sym__brace_start;
	v->arr[7872] = 2066;
	v->arr[7873] = 9;
	init_small_table525(v);
}

// file funcs104.c
