NAME = Bureaucrat

CC = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC =	Bureaucrat.cpp \
		main.cpp \


SFILES = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(SOFILES)
	$(CC)  $(CFLAGS) $(SOFILES) -o $(NAME)

%.o : %.cpp *.h
		$(CC)  $(CFLAGS) -o $@ -c $<

clean :
	@-rm -rf *.o

fclean : clean
	@-rm -rf Bureaucrat

re : fclean all