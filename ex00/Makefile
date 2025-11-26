NAME=Walking_dead

CXX=c++ -Wall -Wextra -Werror -std=c++98

RM=rm -rf

SRC= main.cpp \
	newZombie.cpp \
	randomChump.cpp \
	Zombie.cpp

OBJ=$(SRC:.cpp=.o)

$(NAME) : $(OBJ)
	$(CXX) $(OBJ) -o $(NAME)

all : $(NAME)

%.o : %.cpp Zombie.hpp
	$(CXX) -c $< -o $@

clean : 
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all