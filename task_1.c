#include "main.h"
/**
 * convert_spec_1 - function for conversion specifier
 * @format: character string
 * Return: characters
 */

int convert_spec_1(const char *format, ...)
{
	va_list args;
	int chars = 0;
	char *x;
	char *y;

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
				x = va_arg(args, char *);
				while (*x)
				{
					putchar(*x);
					x++;
					chars++;
				}
			}

			else if (*format == 'i')
                        {
                                y = va_arg(args, char *);
				while (*y)
				{
					putchar(*y);
					y++;
					chars++;
				}
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
