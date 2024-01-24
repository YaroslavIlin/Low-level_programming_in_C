#ifndef STACK_H
#define STACK_H

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

typedef struct Stack {
    struct Stack *previous_element;
    int64_t value;
    int64_t size;
} Stack;

Stack *initialize(int64_t element);
void push(Stack **previous_element, int64_t value);
int64_t pop(Stack **element);
void destroy(Stack **element);

#endif