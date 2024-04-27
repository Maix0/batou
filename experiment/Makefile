# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/03 13:20:01 by maiboyer          #+#    #+#              #
#    Updated: 2024/04/27 17:08:34 by maiboyer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

define_module = $(addprefix $(1)/, $(2))

BUILD_DIR		=	../build
SRC_DIR			=	src
INCLUDE_DIR		=	include output/include
GENERIC_DIR		=	output/src
GENERIC_INCLUDE	=	output/include

BONUS_FLAGS		=
NAME			=	test
LIB_NAME		?=
TARGET			=	$(NAME)
CC				=	clang
CFLAGS			=	-Wall -Wextra -Werror -g2 -lbsd -L. -L$(BUILD_DIR) -lgmr -Wno-unused-command-line-argument -MMD -Wno-unused-parameter -Wno-unused-variable
BONUS_FILES		=
SUBJECT_URL		=	'https://cdn.intra.42.fr/pdf/pdf/105445/en.subject.pdf'

GENERIC_FILES	=	$(shell cat generic_files.list)
SRC_FILES		=	$(shell cat source_files.list)

BONUS			=	$(addsuffix .c,$(addprefix $(SRC_DIR)/,$(BONUS_FILES)))
SRC			=	$(addsuffix .c,$(addprefix $(SRC_DIR)/,$(SRC_FILES))) \
				$(addsuffix .c,$(addprefix $(GENERIC_DIR)/,$(GENERIC_FILES)))

BONUS_OBJ		=	$(addsuffix .o,$(addprefix $(BUILD_DIR)/,$(BONUS_FILES)))

OBJ			=	$(addsuffix .o,$(addprefix $(BUILD_DIR)/,$(SRC_FILES))) \
				$(addsuffix .o,$(addprefix $(BUILD_DIR)/,$(GENERIC_FILES)))

DEPS			=	$(addsuffix .d,$(addprefix $(BUILD_DIR)/,$(SRC_FILES))) \
				$(addsuffix .d,$(addprefix $(BUILD_DIR)/,$(GENERIC_FILES)))

LIBS			=	$(addprefix $(LIBS_DIR)/,$(LIBS_NAME))
INCLUDES		=	$(addprefix -I,$(foreach P,$(INCLUDE_DIR) $(GENERIC_INCLUDE),$(realpath $(P))))
COL_GRAY		=	\\e[90m
COL_WHITE		=	\\e[37m
COL_GREEN		=	\\e[32m
COL_BOLD		=	\\e[1m
COL_RESET		=	\\e[0m

LIBGMR_DIR 		=	../gen

.PHONY: all
.PHONY: libs_build
.PHONY: bonus
.PHONY: clean
.PHONY: fclean
.PHONY: re
.PHONY: format
.PHONY: subject
.PHONY: submit
.PHONY: so

all: $(NAME)

$(NAME): $(OBJ) $(BUILD_DIR)/libgmr.a
	@echo -e "\\n$(COL_GRAY)Building Output $(COL_WHITE)$(COL_BOLD)$(NAME)$(COL_RESET)..."
	@$(CC) $(INCLUDES) $(OBJ) $(CFLAGS) $(BONUS_FLAGS) -o $(NAME)
	@#ar rcs $(BUILD_DIR)/$(NAME) $(OBJ)

$(BUILD_DIR)/libgmr.a:
	@$(MAKE) -C $(LIBGMR_DIR) all


$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(dir $@)
	@echo -e "$(COL_GRAY)Building $(COL_BOLD)$(COL_WHITE)$(LIB_NAME)$<$(COL_RESET)..."
	@$(CC) $(CFLAGS) $(WERROR) $(BONUS_FLAGS) $(INCLUDES) -c $< -o $@

$(BUILD_DIR)/%.o: $(GENERIC_DIR)/%.c
	@mkdir -p $(dir $@)
	@echo -e "$(COL_GRAY)Building $(COL_BOLD)$(COL_WHITE)$(LIB_NAME)$<$(COL_RESET)..."
	@$(CC) $(CFLAGS) $(WERROR) $(BONUS_FLAGS) $(INCLUDES) -c $< -o $@

clean:
	@- $(foreach LIB,$(LIBS), \
		make clean LIB_NAME=$(LIB)/ BUILD_DIR=$(realpath $(BUILD_DIR)) -C $(LIB) --no-print-directory || true;\
	)
	@- $(if $(LIB_NAME),,\
		echo -e "$(COL_WHITE)Clearing Artefacts $(COL_GRAY)$(BUILD_DIR)$(COL_RESET)..."; \
		rm -rf $(BUILD_DIR); \
	)
	@echo >/dev/null

fclean: clean
	@- $(foreach LIB,$(LIBS), \
		make fclean LIB_NAME=$(LIB)/ BUILD_DIR=$(realpath $(BUILD_DIR)) -C $(LIB) --no-print-directory || true;\
	)
	@echo -e "$(COL_WHITE)Clearing Output $(COL_GRAY)$(LIB_NAME)/$(NAME)$(COL_RESET)..."
	@rm -f $(NAME)

re: 
	@$(MAKE) --no-print-directory fclean
	@$(MAKE) --no-print-directory all

subject: subject.txt
	@bat --plain subject.txt

subject.txt:
	@curl $(SUBJECT_URL) | pdftotext -layout -nopgbrk - subject.txt

generate_filelist:
	@/usr/bin/env zsh -c "tree -iFf --noreport output | rg '^output/src/(.*)\.c\$$' --replace '\$$1' | sort -u" > ./generic_files.list
	@/usr/bin/env zsh -c "tree -iFf --noreport src | rg '^src/(.*)\.c\$$' --replace '\$$1' | sort -u" > ./source_files.list

-include $(DEPS)
