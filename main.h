#ifndef main_h
#define main_h
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct format - A structure that contains a character and a function.
 *
 * @format_specs: The format specifier.
 * @f: The function associated to that format.
 */

typedef struct format
{
	char format_specs; /* Valid format specifier */
	int (*f)(va_list args); /* Function associated with that specifier */
} format_t;

int _printf(const char *format, ...);
int _strlen(const char *_str);
int put_char(va_list args);
int put_string(va_list args);
int put_mod(__attribute__((unused)) va_list args);
int put_int(va_list args);
int (*get_func(const char s))(va_list args);
char *int_to_str(int n);
char int_to_char(int n);
int int_wc(long int n, int i);
#endif
