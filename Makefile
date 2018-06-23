CC			= clang++
CFLAGS	= -Wall -Wextra -Werror
SRC		=   main.cpp \
            Controller.cpp \
            Model.cpp \
            Viewer.cpp
NAME	= ft_retro
OBJ		= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) -lncurses

%.o: %.cpp %.hpp
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all