# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: phautena <phautena@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/16 13:15:41 by phautena          #+#    #+#              #
#    Updated: 2025/06/04 16:00:19 by phautena         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bureaucrat

SRCS = ./srcs/main.cpp ./srcs/Bureaucrat.cpp ./srcs/AForm.cpp ./srcs/ShrubberyCreationForm.cpp \
		./srcs/RobotomyRequestForm.cpp ./srcs/PresidentialPardonForm.cpp
OBJS = $(SRCS:.cpp=.o)

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -ggdb

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
