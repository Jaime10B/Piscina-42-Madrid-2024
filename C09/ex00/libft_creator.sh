# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jdiez-bu <jdiez-bu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/08 12:09:41 by jdiez-bu          #+#    #+#              #
#    Updated: 2024/07/24 12:42:25 by jdiez-bu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Define the compiler
CC = gcc

# Define compiler flags
CFLAGS = -Wall -Wextra -Werror -fPIC

# Define the linker flags
LDFLAGS = -shared

# Define the library name
LIBNAME = libft.so

# Define the object files
OBJS = ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o

# Default target: Create the shared library
all: $(LIBNAME)

# Rule to create the shared library
$(LIBNAME): $(OBJS)
	$(CC) $(LDFLAGS) -o $@ $(OBJS)

# Rule to compile .c files into .o files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up generated files
clean:
	rm -f $(OBJS)

# Remove the library and object files
fclean: clean
	rm -f $(LIBNAME)

# Rebuild everything
re: fclean all

.PHONY: all clean fclean re
