NAME = PmergeMe

CC = c++

CFLAGS =  -std=c++98

SRC =	main.cpp \
		PmergeMe.cpp \

SOFILES = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(SOFILES)
	$(CC)  $(CFLAGS) $(SOFILES) -o $(NAME)

%.o : %.cpp *.hpp 
		$(CC)  $(CFLAGS) -o $@ -c $<

clean :
	@rm -rf *.o

fclean : clean
	@rm -rf PmergeMe

re : fclean all