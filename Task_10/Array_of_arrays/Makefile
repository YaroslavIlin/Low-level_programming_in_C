.PHONY: all clean rebuild

all: main

main: main.c array_of_arrays.c
	mkdir -p build
	gcc -Wall -Werror -Wextra main.c array_of_arrays.c -o ./build/Array_of_arrays

clean:
		rm -rf *.o
		rm -rf ./build/Array_of_arrays

rebuild: clean all
