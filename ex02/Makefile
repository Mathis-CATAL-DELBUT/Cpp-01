# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcatal-d <mcatal-d@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/11 02:40:39 by mcatal-d          #+#    #+#              #
#    Updated: 2023/05/11 02:41:43 by mcatal-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME	= Zombie
SRC		= main.cpp
OBJ		= $(SRC:.cpp=.o)
CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -f

all: $(NAME)


$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)
	
clean:
	$(RM) $(OBJ)
	
fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re