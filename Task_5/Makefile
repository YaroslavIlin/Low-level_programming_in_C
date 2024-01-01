.PHONY: all clean rebuild

all: main

main: string_methods.c
	mkdir -p build
	gcc -Wall -Werror -Wextra string_methods.c -o ./build/Task_5

clean:
		rm -rf *.o
		rm -rf ./build/Task_5

rebuild: clean all
