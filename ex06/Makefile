# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sbaghdad <sbaghdad@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/17 16:53:11 by sbaghdad          #+#    #+#              #
#    Updated: 2025/11/25 19:36:49 by sbaghdad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++ -Wall -Wextra -Werror -std=c++98
RM=rm -rf
SOURCES = main.cpp Harl.cpp
OBJECTS = $(SOURCES:.cpp=.o)
NAME=harlFilter

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CXX) $(OBJECTS)  -o $(NAME)

%.o: %.cpp Harl.hpp
	$(CXX) -c $< -o $@

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re : fclean all