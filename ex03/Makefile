CXX = c++
CF = -Wall -Wextra -Werror -std=c++98
RM=rm -rf
SOURCES = HumanB.cpp HumanA.cpp main.cpp Weapon.cpp
OBJECTS = $(SOURCES:.cpp=.o)
NAME=Weapons

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $(NAME)

%.o: %.c 
	$(CXX) $(CF) -c $< -o $@

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re : fclean all
