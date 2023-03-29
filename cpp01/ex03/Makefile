NAME = Weapon

CC = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

INC =	HumanA.hpp \
		HumanB.hpp \
		Weapon.hpp \

SRC =	Weapon.cpp \
		HumanA.cpp \
		HumanB.cpp \


SFILES = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(SFILES) $(INC)
	$(CC)  $(CXXFLAGS) $(SFILES) -o $(NAME)

clean :
	@-rm -rf *.o

fclean : clean
	@-rm -rf Weapon

re : fclean all