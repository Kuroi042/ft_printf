#include "ft_printf.h"

size_t ft_putstring(char *str)
{   
    size_t count = 0;
    int i = 0;
    while(str[i])
    {
        count +=ft_putchar(str[i]);
        i++;
    }
    return count;

}