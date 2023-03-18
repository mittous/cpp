NAME = megaphone

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC =	megaphone.cpp

SOFILES = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(SOFILES)
	$(CC)  $(CFLAGS) $(SOFILES) -o $(NAME)

%.o : %.cpp
		$(CC)  $(CFLAGS) -o $@ -c $<

clean :
	@-rm -rf *.o

fclean : clean
	@-rm -rf megaphone
re : fclean all