# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sbaghdad <sbaghdad@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/17 16:53:11 by sbaghdad          #+#    #+#              #
#    Updated: 2025/11/26 16:25:04 by sbaghdad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
CFX = -Wall -Wextra -Werror -std=c++98
RM=rm -rf
SOURCES = main.cpp Harl.cpp
OBJECTS = $(SOURCES:.cpp=.o)
NAME=harl
all: $(NAME)

$(NAME): $(OBJECTS)
	$(CXX) $(CFX) $(OBJECTS)  -o $(NAME)

%.o: %.cpp Harl.hpp
	$(CXX) $(CFX) -c $< -o $@

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re : fclean all