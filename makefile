SHELL = /bin/sh

CC = gcc
CFLAG = -Wall -g

all: 1dconway sequential bubblesort

1dconway:
	${CC} ${CFLAG} 1dconway.c -o 1dconway

sequential:
	${CC} ${CFLAG} sequential.c -o sequential

bubblesort:
	${CC} ${CFLAG} bubblesort.c -o bubblesort

clean:
	rm 1dconway sequential bubblesort

# todo optimized