NAME = fixed

CC = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

INC = Fixed.hpp

SRC =	main.cpp \
		Fixed.cpp \

SFILES = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(SFILES) $(INC)
	$(CC)  $(CXXFLAGS) $(SFILES) -o $(NAME)

clean :
	@-rm -rf *.o

fclean : clean
	@-rm -rf fixed
re : fclean all