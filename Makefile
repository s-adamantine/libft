# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sadamant <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/09 06:18:48 by sadamant          #+#    #+#              #
#    Updated: 2017/08/14 02:19:11 by sadamant         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = *.c

FLAGS = -c -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(SRC)
	ar -rc $(NAME) *.o

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all
	rm -rf *.o

test: re
	cd ../libft-unit-test
	"make f"

