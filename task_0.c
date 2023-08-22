#include "main.h"

int _printf(const char *format, ...)
{
	va_list args;
	int chars = 0;
	char x;
	char *strr;
	int z;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;

			if (*format == '\0')
				break;

			if (*format == 'c')
			{
				x = (char)va_arg(args, int);
				putchar(x);
				chars++;
			}

			else if (*format == 's')
			{
				strr = va_arg(args, char *);
				while (*strr)
				{
					putchar(*strr);
					strr++;
					chars++;
				}
			}

			else if (*format == 'd' || *format == 'i')
			{
				 z = va_arg(args, int);
                		 printf("%d", z);
			
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
			/*chars++;*/
		}

		format++;

	}

	va_end(args);

	return (0);

}
