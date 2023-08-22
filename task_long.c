#include "main.h"

/**
 * _printf -  produces output according to a format.
 * @format: is a character string
 * Return: character.
 */

int convert_short(const char *format, ...)
{
    va_list args;
    int chars = 0;
    long int z;
    long unsigned int ui;

    va_start(args, format);

    while (*format)
    {
        if (*format == '%')
        {
            format++;

            if (*format == '\0')
                break;
            
            else if (*format == 'ld' || *format == 'li')
            {
                z = va_arg(args, int);
                chars += printf("%ld", z);
            }
            else if (*format == 'lu')
            {
                ui = va_arg(args, unsigned int);
                chars += printf("%lu", ui);
            }
            else if (*format == 'lo')
            {
                ui = va_arg(args, unsigned int);
                chars += printf("%lo", ui);
            }
            else if (*format == 'lx' || *format == 'lX')
            {
                ui = va_arg(args, unsigned int);
                chars += printf((*format == 'lx') ? "%lx" : "%lX", ui);
            }

             else if (*format == '%')
            {
                putchar('%');
                chars++;
            }
            else
            {
                putchar('%');
                putchar(*format);
                chars += 2;
            }
        }
        else
        {
            putchar(*format);
            chars++;
        }

        format++;
    }

    va_end(args);

    return chars;
}
