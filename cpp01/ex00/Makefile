NAME = zombie

CC = g++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

INC = Zombie.hpp

SRC =	Zombie.cpp \
		main.cpp \
		newZombie.cpp \
		randomChump.cpp \


SFILES = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(SFILES) $(INC)
	$(CC)  $(CXXFLAGS) $(SFILES) -o $(NAME)

clean :
	@-rm -rf *.o

fclean : clean
	@-rm -rf zombie
re : fclean all