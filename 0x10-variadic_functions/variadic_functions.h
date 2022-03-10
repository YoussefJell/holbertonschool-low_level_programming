#ifndef HEADER_FILE
#define HEADER_FILE

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char *const format, ...);
void print_string(char *separator, va_list args);
void print_char(char *separator, va_list args);
void print_int(char *separator, va_list args);
void print_float(char *separator, va_list args);

typedef struct printer
{
	char *type;
	void (*f)(char *separator, va_list args);
} pr_t;

#endif
