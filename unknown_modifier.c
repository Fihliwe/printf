#include"main.h"
/**
 * convert_unknown - function for %r specifier
 * @char: pointer to char
 * @specifier: unrecognized modifier character
 */
void convert_unknown(const char specifier, int *chars)
{
        putchar('%');
        putchar(specifier);
        *chars += 2;
}
