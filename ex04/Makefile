CXX = c++ -Wall -Wextra -Werror -std=c++98

RM=rm -rf

SOURCES = Finder.cpp main.cpp

OBJECTS = $(SOURCES:.cpp=.o)

NAME=FindAndReplace

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $(NAME)

%.o: %.cpp Finder.h
	$(CXX) -c $< -o $@

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re : fclean all
