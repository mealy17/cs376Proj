# This is a makefile for ~/robots
# Author: Tanya L. Crenshaw
CC=gcc

robots.out:	main.c robot.o robot.h mealy17.h
	$(CC) -o robots.out main.c robot.o mealy17.o

robot.o:	robot.c robot.h
	$(CC) -c robot.c
mealy17.o:	mealy17.c mealy17.h
	$(CC) -c mealy17.c
