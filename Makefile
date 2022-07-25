# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbreana <gbreana@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/20 08:25:42 by gbreana           #+#    #+#              #
#    Updated: 2022/07/24 15:12:10 by gbreana          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	minishell

INCLM		=	./include
#INCLB		=	./include

LIB			=	-L ./libft -lft
RDLIB		=	-L /usr/local/opt/readline/lib -lreadline
LIBFT		=	libft.a

MDIR		= 	./sources/
#BDIR		=	./sources/

MFLS		=	main.c
#BFLS		=	

MSRC		=	$(addprefix $(MDIR), $(MFLS))
#BSRC		=	$(addprefix $(BDIR), $(BFLS))

MOBJS		=	$(patsubst %.c,%.o,$(MSRC))
#BOBJS		=	$(patsubst %.c,%.o,$(BSRC))

MDEPS		=	$(patsubst %.c,%.d,$(MSRC))
#BDEPS		=	$(patsubst %.c,%.d,$(BSRC))

CC			=	cc
CFLAGS		=	-Wall -Werror -Wextra -MD
#CFLAGS 		+=	-lreadline -L /usr/local/opt/readline/lib
#CFLAGS		+=	-I /usr/local/opt/readline/include

RM			=	rm -rf

override		OBJS_ALL ?= $(MOBJS)
override		DEP_ALL ?= $(DEPS)

$(MDIR)%.o:		$(MDIR)%.c  Makefile libft/libft.a include/minishell.h
				$(CC) $(CFLAGS) -I $(INCLM) -c $< -o ${<:.c=.o}
#$(BDIR)%.o:		$(BDIR)%.c Makefile libft/libft.a include/minishell.h
#				$(CC) $(CFLAGS) -I $(INCLB) -c $< -o ${<:.c=.o}

all:			$(LIBFT) $(NAME)

$(LIBFT):
				@make -C ./libft

$(NAME):		$(LIBFT) $(MOBJS)
				@$(CC) $(MOBJS) $(RDLIB) $(LIB) -o $@

#bonus:			$(LIBFT) $(BOBJS)
#				@$(CC) $(BOBJS) $(LIB) -o minishell

clean:
				@make clean -s -C ./libft
				$(RM) $(MOBJS) $(MDEPS) $(BOBJS) $(BDEPS)

fclean:			clean
				@make fclean -s -C ./libft
				$(RM) $(NAME)

re:				fclean all

.PHONY:		all clean fclean re bonus