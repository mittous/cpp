NAME = zombie

CC = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

INC = Z.hpp

SRC =	zombie.cpp \
		newZombie.cpp \
		randomChump.cpp \
		main.cpp

SFILES = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(SFILES) $(INC)
	$(CC)  $(CXXFLAGS) $(SFILES) -o $(NAME)

clean :
	@-rm -rf *.o

fclean : clean
	@-rm -rf zombie
re : fclean all