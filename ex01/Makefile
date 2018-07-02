SRC		=	my_convert_temp.cpp

OBJ		=	$(SRC:.cpp=.o)

NAME	=	my_convert_temp

RM		=	rm -f

all:		$(NAME)

$(NAME):	$(OBJ)
	g++ -Wall -Wextra -Werror $(OBJ) -o $(NAME)

clean:
		rm -f *.o

fclean:	clean
	rm -f $(NAME)

re:			fclean all
