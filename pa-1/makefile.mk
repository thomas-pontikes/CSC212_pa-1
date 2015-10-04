CC      = gcc
CFLAGS  = -g
RM      = rm -f


default: all

all: pa-1

pa-1: main.c pa-1.c pa-1.h
	$(CC) $(CFLAGS) -o pa-1 main.c pa-1.c pa-1.h

clean cleanUp:
	$(RM) pa-1