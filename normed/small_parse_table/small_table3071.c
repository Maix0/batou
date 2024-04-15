/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs3071.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table15355(t_small_table *v)
{
	v->arr[230324] = sym_simple_expansion;
	v->arr[230325] = sym_expansion;
	v->arr[230326] = sym_command_substitution;
	v->arr[230327] = sym_process_substitution;
	v->arr[230329] = 18;
	v->arr[230329] = 3;
	v->arr[230330] = 1;
	v->arr[230331] = sym_comment;
	v->arr[230332] = 2636;
	v->arr[230333] = 1;
	v->arr[230334] = anon_sym_DOLLAR_LBRACK;
	v->arr[230335] = 2642;
	v->arr[230336] = 1;
	v->arr[230337] = anon_sym_DQUOTE;
	v->arr[230338] = 2646;
	init_small_table15356(v);
}

void	init_small_table15356(t_small_table *v)
{
	v->arr[230339] = 1;
	v->arr[230340] = aux_sym_number_token1;
	v->arr[230341] = 2648;
	v->arr[230342] = 1;
	v->arr[230343] = aux_sym_number_token2;
	v->arr[230344] = 2650;
	v->arr[230345] = 1;
	v->arr[230346] = anon_sym_DOLLAR_LBRACE;
	v->arr[230347] = 2652;
	v->arr[230348] = 1;
	v->arr[230349] = anon_sym_DOLLAR_LPAREN;
	v->arr[230350] = 2654;
	v->arr[230351] = 1;
	v->arr[230352] = anon_sym_BQUOTE;
	v->arr[230353] = 2656;
	init_small_table15357(v);
}

void	init_small_table15357(t_small_table *v)
{
	v->arr[230354] = 1;
	v->arr[230355] = anon_sym_DOLLAR_BQUOTE;
	v->arr[230356] = 2664;
	v->arr[230357] = 1;
	v->arr[230358] = sym__brace_start;
	v->arr[230359] = 9620;
	v->arr[230360] = 1;
	v->arr[230361] = sym_word;
	v->arr[230362] = 9626;
	v->arr[230363] = 1;
	v->arr[230364] = sym__comment_word;
	v->arr[230365] = 10900;
	v->arr[230366] = 1;
	v->arr[230367] = anon_sym_DOLLAR;
	v->arr[230368] = 2630;
	init_small_table15358(v);
}

void	init_small_table15358(t_small_table *v)
{
	v->arr[230369] = 2;
	v->arr[230370] = anon_sym_LPAREN_LPAREN;
	v->arr[230371] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->arr[230372] = 2658;
	v->arr[230373] = 2;
	v->arr[230374] = anon_sym_LT_LPAREN;
	v->arr[230375] = anon_sym_GT_LPAREN;
	v->arr[230376] = 9622;
	v->arr[230377] = 2;
	v->arr[230378] = sym_test_operator;
	v->arr[230379] = sym__special_character;
	v->arr[230380] = 9624;
	v->arr[230381] = 3;
	v->arr[230382] = sym__bare_dollar;
	v->arr[230383] = sym_raw_string;
	init_small_table15359(v);
}

void	init_small_table15359(t_small_table *v)
{
	v->arr[230384] = sym_ansi_c_string;
	v->arr[230385] = 2344;
	v->arr[230386] = 9;
	v->arr[230387] = sym_arithmetic_expansion;
	v->arr[230388] = sym_brace_expression;
	v->arr[230389] = sym_string;
	v->arr[230390] = sym_translated_string;
	v->arr[230391] = sym_number;
	v->arr[230392] = sym_simple_expansion;
	v->arr[230393] = sym_expansion;
	v->arr[230394] = sym_command_substitution;
	v->arr[230395] = sym_process_substitution;
	v->arr[230397] = 21;
	v->arr[230397] = 71;
	v->arr[230398] = 1;
	init_small_table15360(v);
}

// file funcs3071.c
