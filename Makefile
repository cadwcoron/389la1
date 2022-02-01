
COMPILE=gcc
STD=-std=c99 
CFLAGS=-Wall -Werror -Wextra -pedantic


make: la1.c
	$(COMPILE) $(STD) $(CFLAGS) -o la1 la1.c

clean:
	rm la1