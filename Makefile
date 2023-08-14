TARGET=my_mastermind
OBJ=my_mastermind.c
GCC_FLAGS= -Wall -Wextra -Werror -I./headers
GCC=gcc
FLAG_O=-o

all: ${OBJ}
	${GCC} ${GCC_FLAGS} ${OBJ} ${FLAG_O} ${TARGET}

fclean:
	rm -rf ${TARGET}
