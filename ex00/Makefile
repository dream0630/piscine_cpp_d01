SRC		=	my_cat.cpp

OBJ		=	$(SRC:.cpp=.o)

NAME	=	my_cat

RM		=	rm -f

all:		$(NAME)

$(NAME):	$(OBJ)
	g++ -Wall -Wextra -Werror $(OBJ) -o $(NAME)

clean:
		rm -f *.o

fclean:	clean
	rm -f $(NAME)

re:			fclean all
