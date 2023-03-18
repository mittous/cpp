NAME = PhoneBook

CC = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

INC = PhoneBook.hpp

SRC =	PhoneBook.cpp

SOFILES = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(SOFILES) $(INC)
	$(CC)  $(CXXFLAGS) $(SOFILES) -o $(NAME)

clean :
	@-rm -rf *.o

fclean : clean
	@-rm -rf PhoneBook
re : fclean all