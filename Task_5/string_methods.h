#ifndef STRING_METHODS_H
#define STRING_METHODS_H

#include <stdio.h>
#include <inttypes.h>
#include <string.h>

char *_strcat(char *s1, char const *s2);
char *_strncat(char *s1, char const *s2, size_t n);
char *_strcpy(char *dst, char const *src);
char *_strncpy(char *dst, char const *src, size_t n);
int _strcmp(char const *s1, char const *s2);
int _strncmp(char const *s1, char const *s2, size_t n);
size_t _strlen(char const *s);

void print_strcmp(char const *s1, char const *s2);

#endif