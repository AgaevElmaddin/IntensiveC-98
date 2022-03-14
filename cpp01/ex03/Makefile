NAME = weapon

SRCS = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

OBJS = $(patsubst %.cpp, %.o, $(SRCS))

HEADER = Weapon.hpp HumanA.hpp HumanB.hpp

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
