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
    short int z;
    short unsigned int ui;

    va_start(args, format);

    while (*format)
    {
        if (*format == '%')
        {
            format++;

            if (*format == '\0')
                break;
            
            else if (*format == 'd' || *format == 'i')
            {
                z = va_arg(args, int);
                chars += printf("%d", z);
            }
            else if (*format == 'u')
            {
                ui = va_arg(args, unsigned int);
                chars += printf("%u", ui);
            }
            else if (*format == 'o')
            {
                ui = va_arg(args, unsigned int);
                chars += printf("%o", ui);
            }
            else if (*format == 'x' || *format == 'X')
            {
                ui = va_arg(args, unsigned int);
                chars += printf((*format == 'x') ? "%x" : "%X", ui);
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
