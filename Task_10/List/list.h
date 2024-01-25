#ifndef STACK_H
#define STACK_H

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

typedef struct List {
    struct List *previous_element;
    int64_t value;
} List;

List *initialize(int64_t value);
void push(List **previous_element, int64_t value);
int64_t pop(List **element);
void destroy(List **element);
List *get_n_element(List *element, int64_t n);
List *get_most_previous_element(List *element);
void push_back(List *element, int64_t value);
int64_t pop_back(List **element);
void insert(List *element, int64_t value, int64_t position);
int64_t delete_n_element(List **element, int64_t n);
void output(List *element);

#endif