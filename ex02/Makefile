# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ymehlil <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/08 15:13:45 by ymehlil           #+#    #+#              #
#    Updated: 2023/08/08 16:32:06 by ymehlil          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Project name (to be changed)
NAME = brain


# Compiler and flags
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98


# Source files and path
SRCS_PATH = srcs/
SRCS_RAW_ALL = $(shell find $(SRCS_PATH) -type f -name "*.cpp")
SRCS_ALL = $(patsubst srcs/%,%,$(SRCS_RAW_ALL))


# Object files and path
OBJS_PATH = objs/
OBJS_NAME = $(SRCS_ALL:.cpp=.o)
OBJS = $(addprefix $(OBJS_PATH), $(OBJS_NAME))


# Header files and path
HDR_PATH = includes/
HDR_NAME = $(shell find $(HDR_PATH) -type f -name "*.hpp")
HDR_INCLUDE = -I $(HDR_PATH)


# Terminal colors for stylish output
RESET = \033[0m
BOLD = \033[1m
RED = \033[31m
GREEN = \033[32m
YELLOW = \033[33m
BLUE = \033[34m
PURPLE = \033[35m
CYAN = \033[36m
WHITE = \033[37m


# Removing command
RM = rm -rf


# Compilation rules
all: $(NAME) $(HDR_NAME)
	@echo "$(GREEN)Compilation finished!$(RESET)"


# Object directory creation
$(OBJS_PATH):
	@mkdir -p $(OBJS_PATH)
	@echo "$(CYAN)Created objects directory.$(RESET)"


# Object files compilation
$(OBJS_PATH)%.o: $(SRCS_PATH)%.cpp $(HDR_NAME)
	@$(CC) $(CFLAGS) $(HDR_INCLUDE) -o $@ -c $<
	@echo "$(GREEN)Compiled: $(WHITE)$<$(RESET)"


# Executable compilation
$(NAME): $(OBJS_PATH) $(OBJS) $(HDR_NAME)
	@$(CC) $(CFLAGS) $(OBJS) $(HDR_INCLUDE) -o $@
	@echo "$(BLUE)Created executable: $(BOLD)$(NAME)$(RESET)"
	@echo "$(YELLOW)Compiling project...$(RESET)"


# Cleaning rules
clean:
	@$(RM) $(OBJS) $(OBJS_PATH)
	@echo "$(RED)Removed object files and directory.$(RESET)"


fclean: clean
	@$(RM) $(NAME)
	@echo "$(RED)Removed executable: $(NAME)$(RESET)"


# Recompile everything
re: fclean all
	@echo "$(PURPLE)Recompiled.$(RESET)"


.PHONY: all clean fclean re




