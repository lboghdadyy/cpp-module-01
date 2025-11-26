CXX = c++ -Wall -Wextra -Werror -std=c++98

RM=rm -rf
SOURCES = main.cpp
OBJECTS = $(SOURCES:.cpp=.o)
NAME=refMain
all: $(NAME)

$(NAME): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $(NAME)

%.o: %.c
	$(CXX) -c $< -o $@

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re : fclean all
