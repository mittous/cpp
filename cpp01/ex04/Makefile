NAME = sed
CC = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC =	main.cpp \


SFILES = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(SFILES)
	$(CC)  $(CXXFLAGS) $(SFILES) -o $(NAME)

clean :
	@-rm -rf *.o

fclean : clean
	@-rm -rf sed
re : fclean all