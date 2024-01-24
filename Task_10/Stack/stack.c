#include "stack.h"

Stack *initialize(int64_t value) {
    Stack *first_element = (Stack*)malloc(sizeof(Stack));
    first_element->previous_element = NULL;
    first_element->value = value;
    first_element->size = 1;

    return first_element;
}

void push(Stack **previous_element, int64_t value) {
    Stack *tmp = (Stack*)malloc(sizeof(Stack));
    tmp->previous_element = *previous_element;
    tmp->value = value;
    tmp->size = (*previous_element)->size + 1;
    *previous_element = tmp;
}

int64_t pop(Stack **element) {
    Stack *tmp = *element;
    int64_t value = (*element)->value;
    *element = (*element)->previous_element;
    free(tmp);
    return value;
}

void destroy(Stack **element) {
    Stack *tmp = *element;
    while ((*element)->previous_element != NULL) {
        free(tmp);
        *element = (*element)->previous_element;
        tmp = *element;
    }
    
}