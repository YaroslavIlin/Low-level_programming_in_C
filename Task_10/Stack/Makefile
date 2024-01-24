.PHONY: all clean rebuild

all: main

main: main.c stack.c
	mkdir -p build
	gcc -Wall -Werror -Wextra main.c stack.c -o ./build/Stack

clean:
		rm -rf *.o
		rm -rf ./build/Stack

rebuild: clean all
