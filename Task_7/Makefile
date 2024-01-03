.PHONY: all clean rebuild

all: main

main: main.c get_array_of_arrays.c
	mkdir -p build
	gcc -Wall -Werror -Wextra main.c get_array_of_arrays.c -o ./build/Task_7

clean:
		rm -rf *.o
		rm -rf ./build/Task_7

rebuild: clean all
