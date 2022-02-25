all: mp
mp: mp.c
	gcc -Wall -Werror -o mp mp.c
