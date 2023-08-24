#ifndef MAIN_H
#define MAIN_H
#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>

void convert_decimal(va_list args, int *count);
void convert_unknown(const char modifier, int *count);
void convert_percent(int *count);
void convert_string(va_list args, int *count);
void convert_char(va_list args, int *count);
void convert_unsigned(va_list args, int *count);
void convert_octal(va_list args, int *count);
void convert_hex(va_list args, int *count, int uppercase);
int _printf(const char *format, ...);
void convert_binary(va_list args, int *count);
void convert_address(va_list args, int *count);

#endif
