#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>

int _putchar(char c);
void _puts(char *str);
int _strlen(char *s);
int _printf(const char *format, ...);
char *convert_to(char representation[], unsigned int num, int base);
int function_manager(char c, va_list arg);
int function_manager(char c, va_list arg);
int print_character(va_list arg);
int print_sign(va_list arg, int base);
int print_unsign(va_list arg, int base);
int print_string(va_list arg);
int print_ptr(va_list arg);
int print_rot13(va_list arg);
int print_rev(va_list arg);
int print_base16_upper_lower(va_list arg, char *representation);
int loop_format(va_list arg, const char *string);
int loop_format(va_list arg, const char *string);
int check_percent(int *flag, char aux);

#endif  /* _MAIN_H */
