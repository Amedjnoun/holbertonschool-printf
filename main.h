#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/* Prototypes of functions used in _printf */
int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);
int handle_format(const char *format, va_list args);

#endif /* MAIN_H */
