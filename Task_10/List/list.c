#include "list.h"

List *initialize(int64_t value) {
    List *first_element = (List*)malloc(sizeof(List));
    first_element->previous_element = NULL;
    first_element->value = value;
    return first_element;
}

void push(List **previous_element, int64_t value) {
    List *tmp = (List*)malloc(sizeof(List));
    tmp->previous_element = *previous_element;
    tmp->value = value;
    *previous_element = tmp;
}

int64_t pop(List **element) {
    int64_t value;
    if (element != NULL) {
        List *tmp = *element;
        value = (*element)->value;
        *element = (*element)->previous_element;
        free(tmp);
    } else {
        value = -1;
    }
    return value;
}

void destroy(List **element) {
    List *tmp = NULL;
    while ((*element)->previous_element != NULL) {
        tmp = *element;
        *element = (*element)->previous_element;
        free(tmp);
    }
    free(*element);
}

List *get_n_element(List *element, int64_t n) {
    List *tmp = element;
    int64_t count = 0;
    while (count < n && element) {
        tmp = tmp->previous_element;
        count += 1;
    }
    return tmp;
}

List *get_most_previous_element(List *element) {
    while (element->previous_element != NULL) {
        element = element->previous_element;
    }
    return element;
}

void push_back(List *element, int64_t value) {
    List *most_previous_element = get_most_previous_element(element);

    List *tmp = (List*)malloc(sizeof(List));
    tmp->previous_element = NULL;
    tmp->value = value;

    most_previous_element->previous_element = tmp;
}

int64_t pop_back(List **element) {
    int64_t value;
    if (element != NULL) {
        List *current_element = *element;
        List *previous_element = NULL;
        while (current_element->previous_element) {
            previous_element = current_element;
            current_element = current_element->previous_element;
        }

        if (previous_element == NULL) {
            value = (*element)->value;
            free(*element);
            *element = NULL;
        } else {
            value = current_element->value;
            free(current_element);
            previous_element->previous_element = NULL;
        }
    } else {
        value = -1;
    }
    return value;
}

void insert(List *element, int64_t value, int64_t position) {
    int64_t count = 0;
    List *tmp = (List*)malloc(sizeof(List));
    tmp->value = value;

    while (count < position && element->previous_element) {
        element = element->previous_element;
        count += 1;
    }

    if (element->previous_element)
        tmp->previous_element = element->previous_element;
    else
        tmp->previous_element = NULL;
    
    element->previous_element = tmp;
}

int64_t delete_n_element(List **element, int64_t n) {
    int64_t value;
    if (element != NULL) {
        if (n == 0) {
            value = pop(element);
        } else {
            List *tmp = get_n_element(*element, n - 1);
            List *del = tmp->previous_element;
            value = del->value;
            tmp->previous_element = del->previous_element;
            free(del);
        }
    } else {
        value = -1;
    }
    return value;
}

void output(List *element) {
    while (element) {
        printf("%"PRId64, element->value);
        printf(" ");
        element = element->previous_element;
    }

    printf("\n");
}