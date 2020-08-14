# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lisanche <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/12 14:33:57 by lisanche          #+#    #+#              #
#    Updated: 2019/11/19 20:16:58 by lisanche         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = @gcc

CFLAGS = -Wall -Wextra -Werror -c 

SRC = ft_atoi.c\
	  ft_bzero.c\
	  ft_calloc.c\
	  ft_itoa.c\
	  ft_isalpha.c\
	  ft_isalnum.c\
	  ft_isascii.c\
	  ft_isdigit.c\
	  ft_isprint.c\
	  ft_memchr.c\
	  ft_memcmp.c\
	  ft_memcpy.c\
	  ft_memccpy.c\
	  ft_memmove.c\
	  ft_memset.c\
	  ft_putchar_fd.c\
	  ft_putendl_fd.c\
	  ft_putnbr_fd.c\
	  ft_putstr_fd.c\
	  ft_strchr.c\
	  ft_strdup.c\
	  ft_strjoin.c\
	  ft_strlcat.c\
	  ft_strlcpy.c\
	  ft_strlen.c\
	  ft_strncmp.c\
	  ft_strmapi.c\
	  ft_strnstr.c\
	  ft_strrchr.c\
	  ft_strtrim.c\
	  ft_split.c\
	  ft_substr.c\
	  ft_tolower.c\
	  ft_toupper.c\
	  
SRC_BONUS = ft_lstadd_back_bonus.c\
			ft_lstadd_front_bonus.c\
			ft_lstclear_bonus.c\
			ft_lstdelone_bonus.c\
			ft_lstiter_bonus.c\
			ft_lstlast_bonus.c\
			ft_lstmap_bonus.c\
			ft_lstnew_bonus.c\
			ft_lstsize_bonus.c\
			
OBJ = $(SRC:%.c=%.o)

OBJ_BONUS = $(SRC_BONUS:%.c=%.o)

all : $(NAME)

$(NAME) : $(OBJ)
		@ar rc $(NAME) $(OBJ)

bonus : $(OBJ_BONUS) $(NAME)
		@ar rc $(NAME) $(OBJ_BONUS)

clean :
		@/bin/rm -f $(OBJ) $(OBJ_BONUS)

fclean :	$(clean)
		@/bin/rm -f $(OBJ) $(OBJ_BONUS) $(NAME)

re : fclean all

.PHONY:  all clean fclean re
