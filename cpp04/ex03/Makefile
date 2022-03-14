NAME = Interface

SRCS = main.cpp AMateria.cpp Character.cpp MateriaSource.cpp \
		Ice.cpp Cure.cpp 

OBJS = $(patsubst %.cpp, %.o, $(SRCS))

HEADER = AMateria.hpp ICharacter.hpp IMateriaSource.hpp \
			Ice.hpp Cure.hpp Character.hpp MateriaSource.hpp

FLAGS = -Wall -Wextra -Werror -g -std=c++98

CC = clang++

RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS)
		$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp $(HEADER)  Makefile
	$(CC) $(FLAGS) -c $< -o $@

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
