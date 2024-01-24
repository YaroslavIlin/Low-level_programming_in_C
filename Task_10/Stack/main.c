#include "stack.h"

int main() {
    setbuf(stdout, NULL);

    Stack *stack = initialize(7);

    if (stack->value == 7)
        printf("SUCCESS!\n");
    else
        printf("FAIL!\n");
    
    push(&stack, 111);
    if (stack->value == 111)
        printf("SUCCESS!\n");
    else
        printf("FAIL!\n");
    
    int64_t value = pop(&stack);
    if (value == 111)
        printf("SUCCESS!\n");
    else
        printf("FAIL!\n");
    
    destroy(&stack);
    
    return 0;
}