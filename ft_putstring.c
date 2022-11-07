#include "ft_printf.h"

size_t ft_putstring(char *str)
{   
    size_t count = 0;
    int i = 0;
    if(!str)
    {
        write(1, "(null)", 6);
        return (6);
    }
    while(str[i])
    {
        count +=ft_putchar(str[i]);
        i++;
    }
    return count;
}