NAME = phonebook

SRCS = Contact.cpp PhoneBook.cpp main.cpp

OBJS = $(patsubst %.cpp, %.o, $(SRCS))

HEADER = Contact.hpp PhoneBook.hpp

FLAGS = -Wall -Wextra -Werror -g

CC = clang++

RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS)
		$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp $(HEADER) Makefile
		$(CC) $(FLAGS) -c $< -o $@

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
