# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: phautena <phautena@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/16 13:15:41 by phautena          #+#    #+#              #
#    Updated: 2025/10/14 15:48:30 by phautena         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = easyfind

SRCS = ./srcs/main.cpp
OBJS = $(SRCS:.cpp=.o)
DEPS = $(OBJS:.o=.d)

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -ggdb -MD

all: $(NAME)

.cpp.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.cpp=.o)

$(NAME): $(OBJS)
	$(CC) $(OBJS) $(CFLAGS) -o $(NAME)

clean:
	@$(RM)  $(OBJS) $(DEPS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

-include $(DEPS)

.PHONY: all clean fclean re
