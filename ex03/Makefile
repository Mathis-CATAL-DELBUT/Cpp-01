# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcatal-d <mcatal-d@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/11 03:31:31 by mcatal-d          #+#    #+#              #
#    Updated: 2023/05/11 03:57:58 by mcatal-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Fight
SRC		= main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
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