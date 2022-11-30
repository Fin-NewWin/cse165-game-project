# Windows
ifdef OS
	# TODO: add for other OS
# *nix
else
	CC=g++
	CFLAGS=-lGLU -lGL -lSOIL -lglut
endif

FILE=game.cpp

all:
	${CC} game.cpp -o game.o ${CFLAGS}

clean:
	rm -f *.o *.exe *.out
