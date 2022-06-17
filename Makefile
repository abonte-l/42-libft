# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abonte-l <abonte-l@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/11 14:40:20 by abonte-l          #+#    #+#              #
#    Updated: 2022/06/17 18:44:58 by abonte-l         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a

INC			=	inc/
HEADER		=	$(INC)libft.h

SRC_PATH	=	srcs/

MEM_PATH	=	$(SRC_PATH)mem/
STR_PATH	=	$(SRC_PATH)str/
CHAR_PATH	=	$(SRC_PATH)char/
NBR_PATH	=	$(SRC_PATH)nbr/
PRINT_PATH	=	$(SRC_PATH)print/
TAB_PATH	=	$(SRC_PATH)tab/
LLIST_PATH	=	$(SRC_PATH)llist/
DLLIST_PATH	=	$(SRC_PATH)dllist/

MEM			=	ft_bzero.c   		ft_memccpy.c  		ft_memcmp.c \
				ft_memmove.c  		ft_realloc.c 		ft_calloc.c \
				ft_memchr.c   		ft_memcpy.c  		ft_memset.c

				
STR			=	ft_split.c   		ft_strcpy.c   		ft_strlcpy.c \
				ft_strndup.c  		ft_strtrim.c		ft_strcat.c \
				ft_strdup.c			ft_strlen.c 		ft_strnstr.c \
				ft_substr.c			ft_strchr.c 		ft_strjoin.c \
				ft_strmapi.c 		ft_strrchr.c		ft_strcmp.c \
				ft_strlcat.c 		ft_strncmp.c 		ft_strtok.c


CHAR		=	ft_isalnum.c  		ft_isascii.c  		ft_isprint.c \
				ft_toupper.c		ft_isalpha.c  		ft_isdigit.c \
				ft_tolower.c

NBR			=	ft_atoi.c			ft_itoa_deprecated.c

PRiNT		=	ft_putchar.c		ft_putchar_fd.c  	ft_putendl_fd.c \
				ft_putnbr_fd.c  	ft_putstr.c  		ft_putstr_fd.c

LLIST		=	ft_lstnew.c 		ft_lstadd_front.c 	ft_lstsize.c \
				ft_lstlast.c 		ft_lstadd_back.c 	ft_lstdelone.c \
				ft_lstclear.c 		ft_lstiter.c 		ft_lstmap.c

TAB			=	ft_freetab.c  		ft_puttab_fd.c  	ft_realloc_tab.c \
				ft_tabdup.c  		ft_tabsize.c

DLLIST		=	dlist_add_end.c		dlist_add_start.c	dlist_display.c\
				dlist_add_middle.c	new_node_start.c 	new_node_end.c \
				dlist_delete_list.c	dlist_delete_node.c	dlist_new.c 


OBJ_PATH	=	obj/

OBJ_NAME	+=	$(MEM:.c=.o)
OBJ_NAME	+=	$(STR:.c=.o)
OBJ_NAME	+=	$(CHAR:.c=.o)
OBJ_NAME	+=	$(NBR:.c=.o)
OBJ_NAME	+=	$(PRINT:.c=.o)
OBJ_NAME	+=	$(TAB:.c=.o)
OBJ_NAME	+=	$(LLIST:.c=.o)
OBJ_NAME	+=	$(DLLIST:.c=.o)

OBJ			=	$(addprefix $(OBJ_PATH),$(OBJ_NAME))

CFLAGS		=	-Wall -Wextra -Werror

RM			=	rm -rf

all:	$(NAME)

$(NAME) : $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@printf "\n"
	@echo "Compilation of \033[33;1mLibft\033[0;1m: [\033[1;32mOK\033[0;1m]\033[0m"


$(OBJ_PATH)%.o:	$(MEM_PATH)%.c $(HEADER)
	@printf "\033[34;1m|\033[0;m"
	@mkdir $(OBJ_PATH) 2> /dev/null || true
	@$(CC) $(CFLAGS) -I$(INC) -c $< -o $@

$(OBJ_PATH)%.o:	$(STR_PATH)%.c $(HEADER)
	@printf "\033[34;1m|\033[0;m"
	@mkdir $(OBJ_PATH) 2> /dev/null || true
	@$(CC) $(CFLAGS) -I$(INC) -c $< -o $@
	
$(OBJ_PATH)%.o:	$(CHAR_PATH)%.c $(HEADER)
	@printf "\033[34;1m|\033[0;m"
	@mkdir $(OBJ_PATH) 2> /dev/null || true
	@$(CC) $(CFLAGS) -I$(INC) -c $< -o $@

$(OBJ_PATH)%.o:	$(NBR_PATH)%.c $(HEADER)
	@printf "\033[34;1m|\033[0;m"
	@mkdir $(OBJ_PATH) 2> /dev/null || true
	@$(CC) $(CFLAGS) -I$(INC) -c $< -o $@

$(OBJ_PATH)%.o:	$(PRINT_PATH)%.c $(HEADER)
	@printf "\033[34;1m|\033[0;m"
	@mkdir $(OBJ_PATH) 2> /dev/null || true
	@$(CC) $(CFLAGS) -I$(INC) -c $< -o $@

$(OBJ_PATH)%.o:	$(TAB_PATH)%.c $(HEADER)
	@printf "\033[34;1m|\033[0;m"
	@mkdir $(OBJ_PATH) 2> /dev/null || true
	@$(CC) $(CFLAGS) -I$(INC) -c $< -o $@

$(OBJ_PATH)%.o:	$(LLIST_PATH)%.c $(HEADER)
	@printf "\033[34;1m|\033[0;m"
	@mkdir $(OBJ_PATH) 2> /dev/null || true
	@$(CC) $(CFLAGS) -I$(INC) -c $< -o $@	

$(OBJ_PATH)%.o:	$(DLLIST_PATH)%.c $(HEADER)
	@printf "\033[34;1m|\033[0;m"
	@mkdir $(OBJ_PATH) 2> /dev/null || true
	@$(CC) $(CFLAGS) -I$(INC) -c $< -o $@	

clean:
	@$(RM) $(OBJ_PATH)
	@echo "\033[33;1mLibft\033[0;1m: objects deleted\033[0m"

fclean: clean
	@$(RM) $(NAME) 
	@echo "\033[33;1mLibft\033[0;1m: $(NAME) deleted\033[0m"

re: fclean all

.PHONY: all clean fclean re