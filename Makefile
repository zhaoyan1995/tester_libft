# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yanzhao <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/28 20:13:26 by yanzhao           #+#    #+#              #
#    Updated: 2025/05/05 12:40:06 by yanzhao          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=cc -Wall -Wextra -Werror
CUR := $(shell pwd)
PARENT := $(shell dirname $(CUR))
LIB=$(PARENT)/libft.a
HEADER=$(PARENT)

SRCS=isalpha.c isdigit.c isalnum.c isascii.c isprint.c strlen.c memset.c bzero.c memcpy.c memmove.c toupper.c tolower.c strlcat.c strlcpy.c strchr.c strrchr.c strncmp.c memchr.c memcmp.c strnstr.c atoi.c strdup.c calloc.c substr.c strjoin.c strtrim.c split.c itoa.c strmapi.c striteri.c putchar_fd.c putendl_fd.c putstr_fd.c putnbr_fd.c

SRCS_BONUS= lstnew.c lstadd_front.c lstsize.c lstlast.c lstadd_back.c lstdelone.c lstclear.c lstiter.c lstmap.c

OBJS=$(SRCS:.c=.o)
OBJS_BONUS=$(SRCS_BONUS:.c=.o)
BINARY_PATH=$(CUR)/binary_file/
BINARY_FILE=$(addprefix $(BINARY_PATH), $(SRCS:.c=))
BINARY_FILE_BONUS=$(addprefix $(BINARY_PATH), $(SRCS_BONUS:.c=))

all:$(BINARY_FILE)

bonus:$(BINARY_FILE_BONUS)

$(BINARY_PATH)%: %.c
	$(CC) -I$(HEADER) $< $(LIB) -o $@

clean: 
	rm -f $(OBJS) $(OBJS_BONUS)

fclean:
	rm -f $(BINARY_FILE) $(BINARY_FILE_BONUS)


