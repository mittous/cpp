NAME = harl

CC = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

INC = Harl.hpp

SRC =	main.cpp \
		Harl.cpp \

SFILES = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(SFILES) $(INC)
	$(CC)  $(CXXFLAGS) $(SFILES) -o $(NAME)

clean :
	@-rm -rf *.o

fclean : clean
	@-rm -rf harl
re : fclean all