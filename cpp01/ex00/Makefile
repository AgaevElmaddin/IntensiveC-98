NAME = zombie

SRCS = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp

OBJS = $(patsubst %.cpp, %.o, $(SRCS))

HEADER = Zombie.hpp

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
