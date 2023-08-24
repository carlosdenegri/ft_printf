# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cadenegr <cadenegr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/26 15:45:39 by cadenegr          #+#    #+#              #
#    Updated: 2023/06/28 13:23:29 by cadenegr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= 	libft.a
INCLUDES 	= 	../include
SRC_DIR 	= 	src/
OBJ_DIR 	= 	obj/
OUTPUT		=	OUTPUT

CC = 			gcc
CFLAGS 		= 	-Wall -Werror -Wextra -I

RM 		= 	rm -f
AR 		= 	ar rcs

SRC_FILES = ft_atoi ft_bzero ft_calloc ft_isalnum ft_isalpha ft_isascii \
	ft_isdigit ft_isprint ft_itoa ft_memchr ft_memcmp ft_memcpy \
	ft_memmove ft_memset ft_putchar_fd ft_putendl_fd ft_putnbr_fd \
	ft_putstr_fd ft_split ft_strchr ft_strdup ft_striteri ft_strjoin \
	ft_strlcat ft_strlcpy ft_strlen ft_strmapi ft_strncmp ft_strnstr \
	ft_strrchr ft_strtrim ft_substr ft_tolower ft_toupper ft_lstadd_back \
	ft_lstadd_front ft_lstclear ft_lstdelone ft_lstiter ft_lstlast \
	ft_lstmap ft_lstnew ft_lstsize

SRC = $(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJ = $(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))


all: 		$(NAME)


$(NAME): 	$(OBJ)
		@$(AR) $(NAME) $(OBJ)
		@ranlib $(NAME)
		@echo "Libft compiled!"

$(OBJ_DIR)%.o : $(SRC_DIR)%.c | $(OBJ_DIR)
		@echo "Compiling: $< "
		@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(OBJ_DIR):
		@mkdir -p $(OBJ_DIR)


clean:
		@$(RM) -rf $(OBJ_DIR)
		@$(RM) -f $(NAME)
		@$(RM) -f libft.a
		@echo "Libft objects files cleaned!"


fclean: 	clean
		@$(RM) -f $(NAME)
		@echo "Libft executable files cleaned!"


re: 		fclean all
		@echo "Cleaned and rebuilt everything for libft!"
	
norm:
		@norminette $(SRC) $(INCLUDES) | grep -v Norme -B1 || true

.PHONY: 	all clean fclean re norm

