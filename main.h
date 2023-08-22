#ifndef MAIN_H
#define MAIN_H
#define BUFFER_SIZE 1024

#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>



int _printf(const char *format, ...);
int convert_int(const char *format, ...);
int convert_hex(const char *format, ...);
int convert_point(const char *format, ...);
int convert_binary(const char *format, ...);
int convert_short(const char *format, ...);


#endif
