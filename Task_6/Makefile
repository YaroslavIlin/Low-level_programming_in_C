.PHONY: all clean rebuild

all: main

main: main.c get_array.c
	mkdir -p build
	gcc -Wall -Werror -Wextra main.c get_array.c -o ./build/Task_6

clean:
		rm -rf *.o
		rm -rf ./build/Task_6

rebuild: clean all
