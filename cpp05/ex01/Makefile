NAME = Form

SRCS = main.cpp Bureaucrat.cpp Form.cpp

OBJS = $(patsubst %.cpp, %.o, $(SRCS))

HEADER = Bureaucrat.hpp Form.hpp

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
