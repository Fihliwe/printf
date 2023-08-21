#include "main.h"

/**
 * _printf -  produces output according to a format.
 * @format: is a character string
 * Return: character.
 */

int convert_spec_1(const char *format, ...)
{
	va_list args;
	int chars = 0;
	int x;
	int y;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;

			if (*format == '\0')
				break;

			if (*format == 'd')
			{
				x = va_arg(args, int);
				chars += printf("%d", x);
			}

			else if (*format == 'i')
                        {
                                y = va_arg(args, int);
                                chars += printf("%i", y);
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

	return (chars);

}
