#include "main.h"
/**
 * convert_int - fucntion for integer
 * @format: character string
 * Return: chars
 */


int convert_int(const char *format, ...)
{
    va_list args;
    int chars = 0;
    int z;
    

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
