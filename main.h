#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>

/* Function prototypes */
int _putchar(char c);
int _strlen(char *s);
int _puts(char *str);
int _printf(const char *format, ...);
int print_number(int n);
int print_unsigned(unsigned int num);
int print_octal(unsigned int num);
int print_hexadecimal(unsigned int num, int uppercase);
void print_binary(unsigned int num);
int print_address(void *p);
int print_reversed_string(char *str);
int print_rot13_string(char *str);
int print_non_printable_string(char *str);

#endif /* MAIN_H */

