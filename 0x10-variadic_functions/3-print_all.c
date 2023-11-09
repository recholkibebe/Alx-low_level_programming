#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - Print a char argument.
 * @list: va_list containing the argument.
 */
void print_char(va_list list)
{
    printf("%c", va_arg(list, int));
}

/**
 * print_int - Print an int argument.
 * @list: va_list containing the argument.
 */
void print_int(va_list list)
{
    printf("%d", va_arg(list, int));
}

/**
 * print_float - Print a float argument.
 * @list: va_list containing the argument.
 */
void print_float(va_list list)
{
    printf("%f", va_arg(list, double));
}

/**
 * print_string - Print a string argument.
 * @list: va_list containing the argument.
 */
void print_string(va_list list)
{
    char *str = va_arg(list, char *);
    if (!str)
        str = "(nil)";
    printf("%s", str);
}

/**
 * print_all - Print anything based on the format.
 * @format: Format string indicating the types of arguments.
 */
void print_all(const char * const format, ...)
{
    int i = 0;
    char *sep = "";
    va_list list;

    va_start(list, format);

    if (format)
    {
        while (format[i])
        {
            switch (format[i])
            {
            case 'c':
                printf("%s", sep);
                print_char(list);
                break;
            case 'i':
                printf("%s", sep);
                print_int(list);
                break;
            case 'f':
                printf("%s", sep);
                print_float(list);
                break;
            case 's':
                printf("%s", sep);
                print_string(list);
                break;
            default:
                i++;
                continue;
            }
            sep = ", ";
            i++;
        }
    }

    printf("\n");
    va_end(list);
}
