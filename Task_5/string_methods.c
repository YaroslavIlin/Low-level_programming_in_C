#include "string_methods.h"

int main() {
	setbuf(stdout, NULL);

	char *s1 = "abc";
	char *s2 = "ABC";
	char *s3 = "123";

	char buffer[1024];
	buffer[0] = 0;

	print_strcmp(buffer, s1);
	print_strcmp(s1, s2);
	print_strcmp(s2, s3);
	
	char a[6] = "abcde";
	char b[6] = "12345";
	char c[6] = "qwert";
	char d[6] = "09876";
	char e[6] = "";
	char f[6] = "";
	printf("%s\n", _strcat(a, b));
	printf("%s\n", _strncat(c, d, 2));
	printf("%s\n", _strcpy(e, a));
	printf("%s\n", _strncpy(f, a, 3));
	printf("%d\n", _strcmp(a, b));
	printf("%d\n", _strncmp(c, d, 4));
	printf("%d\n", _strlen(f));
	printf(_strcat(_strncat(_strcat(buffer, "abc "), "ABC", 3), "\n"));

	return 0;
}

char *_strcat(char *s1, const char *s2) {
	char *buffer = s1;
	s1 += _strlen(s1);
	while (*s2)
		*(s1++) = *(s2++);
	*(s1) = '\0';
	return buffer;
}

char *_strncat(char *s1, const char *s2, size_t n) {
	if (!n)
		return s1;
	char *buffer = s1;
	s1 += _strlen(s1);
	while (*s2 && n--)
		*(s1++) = *(s2++);
	*(s1) = '\0';
	return buffer;
}

char *_strcpy(char *dst, const char *src) {
	char *buffer = dst;
	while (*src)
		*(dst++) = *(src++);
	*(dst) = '\0';
	return buffer;
}

char *_strncpy(char *dst, const char *src, size_t n) {
	if (!n)
		return dst;
	char *buffer = dst;
	while (*src && n--)
		*(dst++) = *(src++);
	*(dst) = '\0';
	return buffer;
}

int _strcmp(const char *s1, const char *s2) {
	while (*s1 == *s2) {
		if (!*(s1++))
			return 0;
		s2++;
	}
	return *s1 - *s2;
}

int _strncmp(const char *s1, const char *s2, size_t n) {
	if (!n)
		return 0;
	while (*s1 == *s2) {
		if (!*(s1++) || !--n)
			return 0;
		s2++;
	}
	return *s1 - *s2;
}

size_t _strlen(const char *s) {
    const char *buffer = s;
	while(*(s++));
	return (s - buffer - 1) / sizeof(char);
}

void print_strcmp(const char *s1, const char *s2) {
	int res = _strcmp(s1, s2);
	printf("\"%s\" %s \"%s\"\n", s1, 
			!res ? "==" : (res > 0 ? ">" : "<"), s2);
}