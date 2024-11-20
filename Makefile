# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yfradj <yfradj@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/14 11:24:09 by yfradj            #+#    #+#              #
#    Updated: 2024/11/18 12:52:25 by yfradj           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
FLAGS = -Wall -Wextra -Werror -Iincludes
NAME = libftprintf.a

SRCS = \
	ft_c.c \
	ft_d.c \
	ft_i.c \
	ft_len_n.c \
	ft_p.c \
	ft_printf.c \
	ft_putnbr_base.c \
	ft_putstr_until.c \
	ft_s.c \
	ft_u.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

.c.o:
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus