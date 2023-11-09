.PHONY: all clean rebuild

all: main

main: main.c reverse.c sort.c
	mkdir -p build
	gcc -Wall -Werror -Wextra main.c reverse.c sort.c -o ./build/Task_4

clean:
		rm -rf *.o
		rm -rf ./build/Task_4

rebuild: clean all
