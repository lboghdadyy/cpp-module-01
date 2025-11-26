CXX = c++ -Wall -Wextra -Werror -std=c++98

RM=rm -rf
SOURCES=main.cpp Zombie.cpp zombieHord.cpp
OBJECTS = $(SOURCES:.cpp=.o)
NAME=brainnnn

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $(NAME)

%.o: %.cpp Zombie.hpp
	$(CXX)  -c $< -o $@

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re : fclean all
