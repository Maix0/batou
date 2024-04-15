/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs1385.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table6925(t_small_table *v)
{
	v->arr[103874] = 2;
	v->arr[103875] = sym_raw_string;
	v->arr[103876] = sym_ansi_c_string;
	v->arr[103877] = 2594;
	v->arr[103878] = 6;
	v->arr[103879] = sym_binary_expression;
	v->arr[103880] = sym_ternary_expression;
	v->arr[103881] = sym_unary_expression;
	v->arr[103882] = sym_postfix_expression;
	v->arr[103883] = sym_parenthesized_expression;
	v->arr[103884] = sym_concatenation;
	v->arr[103885] = 2456;
	v->arr[103886] = 9;
	v->arr[103887] = sym_arithmetic_expansion;
	v->arr[103888] = sym_brace_expression;
	init_small_table6926(v);
}

void	init_small_table6926(t_small_table *v)
{
	v->arr[103889] = sym_string;
	v->arr[103890] = sym_translated_string;
	v->arr[103891] = sym_number;
	v->arr[103892] = sym_simple_expansion;
	v->arr[103893] = sym_expansion;
	v->arr[103894] = sym_command_substitution;
	v->arr[103895] = sym_process_substitution;
	v->arr[103897] = 26;
	v->arr[103897] = 71;
	v->arr[103898] = 1;
	v->arr[103899] = sym_comment;
	v->arr[103900] = 363;
	v->arr[103901] = 1;
	v->arr[103902] = anon_sym_DOLLAR_LBRACK;
	v->arr[103903] = 367;
	init_small_table6927(v);
}

void	init_small_table6927(t_small_table *v)
{
	v->arr[103904] = 1;
	v->arr[103905] = anon_sym_DOLLAR;
	v->arr[103906] = 371;
	v->arr[103907] = 1;
	v->arr[103908] = anon_sym_DQUOTE;
	v->arr[103909] = 375;
	v->arr[103910] = 1;
	v->arr[103911] = aux_sym_number_token1;
	v->arr[103912] = 377;
	v->arr[103913] = 1;
	v->arr[103914] = aux_sym_number_token2;
	v->arr[103915] = 379;
	v->arr[103916] = 1;
	v->arr[103917] = anon_sym_DOLLAR_LBRACE;
	v->arr[103918] = 381;
	init_small_table6928(v);
}

void	init_small_table6928(t_small_table *v)
{
	v->arr[103919] = 1;
	v->arr[103920] = anon_sym_DOLLAR_LPAREN;
	v->arr[103921] = 385;
	v->arr[103922] = 1;
	v->arr[103923] = anon_sym_DOLLAR_BQUOTE;
	v->arr[103924] = 391;
	v->arr[103925] = 1;
	v->arr[103926] = sym__brace_start;
	v->arr[103927] = 1091;
	v->arr[103928] = 1;
	v->arr[103929] = sym_word;
	v->arr[103930] = 1093;
	v->arr[103931] = 1;
	v->arr[103932] = anon_sym_LPAREN;
	v->arr[103933] = 1095;
	init_small_table6929(v);
}

void	init_small_table6929(t_small_table *v)
{
	v->arr[103934] = 1;
	v->arr[103935] = anon_sym_BANG;
	v->arr[103936] = 1103;
	v->arr[103937] = 1;
	v->arr[103938] = anon_sym_TILDE;
	v->arr[103939] = 1113;
	v->arr[103940] = 1;
	v->arr[103941] = sym_test_operator;
	v->arr[103942] = 5809;
	v->arr[103943] = 1;
	v->arr[103944] = anon_sym_BQUOTE;
	v->arr[103945] = 5916;
	v->arr[103946] = 1;
	v->arr[103947] = sym__special_character;
	v->arr[103948] = 2472;
	init_small_table6930(v);
}

// file funcs1385.c
