#include "list.h"

int main() {
    setbuf(stdout, NULL);

    List *list = initialize(7);

    if (list->value == 7)
        printf("SUCCESS!\n");
    else
        printf("FAIL!\n");
    
    for (int64_t i = 10; i <= 100; i += 10) {
        push(&list, i);
    }

    output(list);

    int64_t value = pop(&list);
    if (value == 100)
        printf("SUCCESS!\n");
    else
        printf("FAIL!\n");
    
    insert(list, 123, 5);
    output(list);

    delete_n_element(&list, 2);
    output(list);

    push_back(list, 999);
    output(list);

    pop_back(&list);
    output(list);

    destroy(&list);
    
    return 0;
}