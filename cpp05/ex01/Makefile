NAME = Form

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC =	Bureaucrat.cpp \
		Form.cpp \
		main.cpp

SOFILES = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(SOFILES)
	$(CC)  $(CFLAGS) $(SOFILES) -o $(NAME)

%.o : %.cpp Bureaucrat.cpp Form.hpp 
		$(CC)  $(CFLAGS) -o $@ -c $<

clean :
	@rm -rf *.o

fclean : clean
	@rm -rf Form

re : fclean all