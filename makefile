# This is a makefile for ~/robots
# Author: Tanya L. Crenshaw
CC=gcc

robots.out:	main.c robot.o robot.h mok17.h
	$(CC) -o robots.out main.c robot.o mok17.o

robot.o:	robot.c robot.h
	$(CC) -c robot.c

mok17.o:	mok17.c mok17.h
	$(CC) -c mok17.c




