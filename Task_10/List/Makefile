.PHONY: all clean rebuild

all: main

main: main.c list.c
	mkdir -p build
	gcc -Wall -Werror -Wextra main.c list.c -o ./build/List

clean:
		rm -rf *.o
		rm -rf ./build/List

rebuild: clean all
