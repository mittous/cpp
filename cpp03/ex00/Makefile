NAME = clapTrap

CC = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

INC = ClapTrap.hpp

SRC =	main.cpp \
		ClapTrap.cpp \

SFILES = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(SFILES) $(INC)
	$(CC)  $(CXXFLAGS) $(SFILES) -o $(NAME)

clean :
	@-rm -rf *.o

fclean : clean
	@-rm -rf ClapTrap
re : fclean all