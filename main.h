#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/* Prototype de la fonction _printf */
int _printf(const char *format, ...);
int print_integer_recursive(int n);
int print_char(va_list args); 
int print_string(va_list args); 
int handle_format(const char *format, va_list args);


#endif /* MAIN_H */
