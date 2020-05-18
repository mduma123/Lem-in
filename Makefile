# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mduma <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/16 14:44:40 by mduma             #+#    #+#              #
#    Updated: 2020/05/04 08:54:46 by omputle          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Lem-in
LIBFT = libft/ft_atoi.c \
      libft/ft_itoa.c \
      libft/ft_bzero.c \
      libft/ft_isalnum.c \
      libft/ft_isalpha.c \
      libft/ft_isascii.c \
      libft/ft_isdigit.c \
      libft/ft_isprint.c \
      libft/ft_memalloc.c \
      libft/ft_memccpy.c \
      libft/ft_memchr.c \
      libft/ft_memcmp.c \
      libft/ft_memcpy.c \
      libft/ft_memdel.c \
      libft/ft_memmove.c \
      libft/ft_memset.c \
      libft/ft_putchar.c \
      libft/ft_putchar_fd.c \
      libft/ft_putendl.c \
      libft/ft_putendl_fd.c \
      libft/ft_putnbr.c \
      libft/ft_putnbr_fd.c \
      libft/ft_putstr.c \
      libft/ft_putstr_fd.c \
      libft/ft_strcat.c \
      libft/ft_strchr.c \
      libft/ft_strclr.c \
      libft/ft_strcmp.c \
      libft/ft_strcpy.c \
      libft/ft_strdel.c \
      libft/ft_strdup.c \
      libft/ft_strequ.c \
      libft/ft_strlen.c \
      libft/ft_strlcat.c \
      libft/ft_strncat.c \
      libft/ft_strncmp.c \
      libft/ft_strncpy.c \
      libft/ft_strnequ.c \
      libft/ft_strnew.c \
      libft/ft_strnstr.c \
      libft/ft_strrchr.c \
      libft/ft_strstr.c \
      libft/ft_strmap.c \
      libft/ft_strmapi.c \
      libft/ft_striter.c \
      libft/ft_striteri.c \
      libft/ft_strsub.c \
      libft/ft_strtrim.c \
      libft/ft_strsplit.c \
      libft/ft_strjoin.c \
      libft/ft_tolower.c \
      libft/ft_toupper.c \
	  	libft/ft_isnum.c \
	  	libft/ab_value.c \
	  	libft/ft_del_arr.c \
	  	libft/ft_atol.c \
			libft/ft_strimplode.c \
			libft/ft_strtrim_del.c \

GNL = get_next_line/get_next_line.c
SRCS = src/adjacency_matrix.c \
			src/append_string.c \
			src/del_array_arrays.c \
			src/exit_program.c \
			src/find_path.c \
			src/find_room.c \
			src/get_ants.c \
			src/get_links.c \
			src/get_rooms.c \
			src/locate_start_end.c \
			src/map_init.c \
			src/print_map.c \
			src/print_path.c \
			src/read_map.c \
			src/remove_room.c \
			src/struct_init.c \

CCFL = $(LIBFT)

all: $(NAME)

$(NAME):
		gcc $(SRCS) $(LIBFT) $(GNL) lemin.c -o $(NAME)

clean:
		@make -C $(LIBFT) clean

fclean:
		@/bin/rm -rf $(NAME)

re: fclean all
