all: mp
mp: mp.c
	gcc -Wall -Werror -o main mp.c
