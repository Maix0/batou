/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_519.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2595(t_small_parse_table_array *v)
{
	v->a[51900] = anon_sym_LT;
	v->a[51901] = anon_sym_GT;
	v->a[51902] = anon_sym_LT_LT;
	v->a[51903] = anon_sym_GT_GT;
	v->a[51904] = anon_sym_RPAREN;
	v->a[51905] = anon_sym_SEMI_SEMI;
	v->a[51906] = anon_sym_PIPE_AMP;
	v->a[51907] = anon_sym_EQ_TILDE;
	v->a[51908] = anon_sym_AMP_GT;
	v->a[51909] = anon_sym_AMP_GT_GT;
	v->a[51910] = anon_sym_LT_AMP;
	v->a[51911] = anon_sym_GT_AMP;
	v->a[51912] = anon_sym_GT_PIPE;
	v->a[51913] = anon_sym_LT_AMP_DASH;
	v->a[51914] = anon_sym_GT_AMP_DASH;
	v->a[51915] = anon_sym_LT_LT_DASH;
	v->a[51916] = anon_sym_LT_LT_LT;
	v->a[51917] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[51918] = anon_sym_DOLLAR_LBRACK;
	v->a[51919] = aux_sym_concatenation_token1;
	small_parse_table_2596(v);
}

void	small_parse_table_2596(t_small_parse_table_array *v)
{
	v->a[51920] = anon_sym_DOLLAR;
	v->a[51921] = sym__special_character;
	v->a[51922] = anon_sym_DQUOTE;
	v->a[51923] = sym_raw_string;
	v->a[51924] = sym_ansi_c_string;
	v->a[51925] = aux_sym_number_token1;
	v->a[51926] = aux_sym_number_token2;
	v->a[51927] = anon_sym_DOLLAR_LBRACE;
	v->a[51928] = anon_sym_DOLLAR_LPAREN;
	v->a[51929] = anon_sym_BQUOTE;
	v->a[51930] = anon_sym_DOLLAR_BQUOTE;
	v->a[51931] = anon_sym_LT_LPAREN;
	v->a[51932] = anon_sym_GT_LPAREN;
	v->a[51933] = sym_word;
	v->a[51934] = 8;
	v->a[51935] = actions(3);
	v->a[51936] = 1;
	v->a[51937] = sym_comment;
	v->a[51938] = actions(1235);
	v->a[51939] = 1;
	small_parse_table_2597(v);
}

void	small_parse_table_2597(t_small_parse_table_array *v)
{
	v->a[51940] = sym_test_operator;
	v->a[51941] = actions(5086);
	v->a[51942] = 1;
	v->a[51943] = anon_sym_DQUOTE;
	v->a[51944] = actions(5090);
	v->a[51945] = 1;
	v->a[51946] = sym_variable_name;
	v->a[51947] = state(2442);
	v->a[51948] = 1;
	v->a[51949] = sym_string;
	v->a[51950] = actions(5088);
	v->a[51951] = 2;
	v->a[51952] = aux_sym__simple_variable_name_token1;
	v->a[51953] = aux_sym__multiline_variable_name_token1;
	v->a[51954] = actions(5084);
	v->a[51955] = 9;
	v->a[51956] = anon_sym_DASH;
	v->a[51957] = anon_sym_STAR;
	v->a[51958] = anon_sym_BANG;
	v->a[51959] = anon_sym_QMARK;
	small_parse_table_2598(v);
}

void	small_parse_table_2598(t_small_parse_table_array *v)
{
	v->a[51960] = anon_sym_DOLLAR;
	v->a[51961] = anon_sym_POUND;
	v->a[51962] = anon_sym_AT2;
	v->a[51963] = anon_sym_0;
	v->a[51964] = anon_sym__;
	v->a[51965] = actions(1227);
	v->a[51966] = 32;
	v->a[51967] = anon_sym_EQ;
	v->a[51968] = anon_sym_PLUS_PLUS;
	v->a[51969] = anon_sym_DASH_DASH;
	v->a[51970] = anon_sym_PLUS_EQ;
	v->a[51971] = anon_sym_DASH_EQ;
	v->a[51972] = anon_sym_STAR_EQ;
	v->a[51973] = anon_sym_SLASH_EQ;
	v->a[51974] = anon_sym_PERCENT_EQ;
	v->a[51975] = anon_sym_STAR_STAR_EQ;
	v->a[51976] = anon_sym_LT_LT_EQ;
	v->a[51977] = anon_sym_GT_GT_EQ;
	v->a[51978] = anon_sym_AMP_EQ;
	v->a[51979] = anon_sym_CARET_EQ;
	small_parse_table_2599(v);
}

void	small_parse_table_2599(t_small_parse_table_array *v)
{
	v->a[51980] = anon_sym_PIPE_EQ;
	v->a[51981] = anon_sym_PIPE_PIPE;
	v->a[51982] = anon_sym_AMP_AMP;
	v->a[51983] = anon_sym_PIPE;
	v->a[51984] = anon_sym_CARET;
	v->a[51985] = anon_sym_AMP;
	v->a[51986] = anon_sym_EQ_EQ;
	v->a[51987] = anon_sym_BANG_EQ;
	v->a[51988] = anon_sym_LT;
	v->a[51989] = anon_sym_GT;
	v->a[51990] = anon_sym_LT_EQ;
	v->a[51991] = anon_sym_GT_EQ;
	v->a[51992] = anon_sym_LT_LT;
	v->a[51993] = anon_sym_GT_GT;
	v->a[51994] = anon_sym_PLUS;
	v->a[51995] = anon_sym_SLASH;
	v->a[51996] = anon_sym_PERCENT;
	v->a[51997] = anon_sym_STAR_STAR;
	v->a[51998] = anon_sym_EQ_TILDE;
	v->a[51999] = 3;
	small_parse_table_2600(v);
}

/* EOF small_parse_table_519.c */
