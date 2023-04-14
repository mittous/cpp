NAME = world_on_fire

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC =	Animal.cpp \
		Cat.cpp \
		Dog.cpp \
		main.cpp \
		Brain.cpp\

SOFILES = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(SOFILES)
	$(CC)  $(CFLAGS) $(SOFILES) -o $(NAME)

%.o : %.cpp *.h
		$(CC)  $(CFLAGS) -o $@ -c $<

clean :
	@rm -rf *.o

fclean : clean
	@rm -rf world_on_fire

re : fclean all