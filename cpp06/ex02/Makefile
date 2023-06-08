NAME = Identify

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC =	main.cpp \
		A.cpp \
		B.cpp \
		C.cpp \
		Base.cpp\

SOFILES = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(SOFILES)
	$(CC)  $(CFLAGS) $(SOFILES) -o $(NAME)

%.o : %.cpp *.hpp 
		$(CC)  $(CFLAGS) -o $@ -c $<

clean :
	@rm -rf *.o

fclean : clean
	@rm -rf Identify

re : fclean all