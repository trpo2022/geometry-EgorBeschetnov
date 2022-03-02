all: mc
mc: mc.c
	gcc -Wall -Werror -o ex mc.c
