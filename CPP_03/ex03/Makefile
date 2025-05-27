# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: phautena <phautena@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/16 13:15:41 by phautena          #+#    #+#              #
#    Updated: 2025/05/20 16:03:50 by phautena         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = FragTrap

SRCS = ./srcs/main.cpp ./srcs/ClapTrap.cpp ./srcs/ScavTrap.cpp ./srcs/FragTrap.cpp
OBJS = $(SRCS:.cpp=.o)

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -I./includes

all: $(NAME)

.cpp.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.cpp=.o)

$(NAME): $(OBJS)
	$(CC) $(OBJS) $(CFLAGS) -o $(NAME)

clean:
	@$(RM)  $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
