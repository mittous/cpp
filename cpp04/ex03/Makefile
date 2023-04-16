NAME = interface

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC =	AMateria.cpp \
		main.cpp \
	
SOFILES = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(SOFILES)
	$(CC)  $(CFLAGS) $(SOFILES) -o $(NAME)

%.o : %.cpp *.h
		$(CC)  $(CFLAGS) -o $@ -c $<

clean :
	@rm -rf *.o

fclean : clean
	@rm -rf interface

re : fclean all