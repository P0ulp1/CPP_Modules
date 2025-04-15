# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: phautena <phautena@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/15 13:59:07 by phautena          #+#    #+#              #
#    Updated: 2025/04/15 14:00:28 by phautena         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = test

INCL = .
SRCS = ./Account.cpp ./tests.cpp
OBJS = $(SRCS:.cpp=.o)

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -ggdb

all: $(NAME)

.cpp.o:
	$(CC) $(CFLAGS) -I $(INCL) -c $< -o $(<:.cpp=.o)

$(NAME): $(OBJS)
	$(CC) $(OBJS) $(CFLAGS) -o $(NAME)

clean:
	@$(RM)  $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
