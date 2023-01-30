SHELL = /bin/sh

CC = gcc
CFLAG = -Wall -g

all:normal

normal:
	${CC} ${CFLAG} 1dconway.c -o 1dconway

# todo optimized