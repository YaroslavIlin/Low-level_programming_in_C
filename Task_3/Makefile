.PHONY: all clean rebuild

all: logical_expression cost_calc function_calc cycles

logical_expression:
	mkdir -p build
	gcc -Wall -Werror -Wextra logical_expression.c -o ./build/logical_expression

cost_calc:
	mkdir -p build
	gcc -Wall -Werror -Wextra cost_calc.c -o ./build/cost_calc

function_calc:
	mkdir -p build
	gcc -Wall -Werror -Wextra function_calc.c -o ./build/function_calc

cycles:
	mkdir -p build
	gcc -Wall -Werror -Wextra cycles.c -o ./build/cycles

clean:
		rm -rf *.o
		rm -rf ./build

rebuild: clean all
