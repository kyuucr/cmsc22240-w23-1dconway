SHELL = /bin/sh

CC = gcc
CFLAG = -Wall -g

all: 1dconway random

1dconway:
	${CC} ${CFLAG} 1dconway.c -o 1dconway

random:
	${CC} ${CFLAG} random.c -o random

clean:
	rm 1dconway random

# todo optimized