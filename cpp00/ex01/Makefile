NAME = PhoneBook

CC = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

INC = PhoneBook.hpp

SRC =	PhoneBook.cpp \
		PhoneBook_utils.cpp

SFILES = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(SFILES) $(INC)
	$(CC)  $(CXXFLAGS) $(SFILES) -o $(NAME)

clean :
	@-rm -rf *.o

fclean : clean
	@-rm -rf PhoneBook
re : fclean all