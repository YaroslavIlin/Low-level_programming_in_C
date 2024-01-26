.PHONY: all clean rebuild

all: main

main: main.c commands.c
	mkdir -p build
	gcc -Wall -Werror -Wextra main.c commands.c -o ./build/Final_Task

clean:
		rm -rf *.o
		rm -rf ./build/Final_Task

rebuild: clean all
