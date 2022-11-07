#include "ft_printf.h"
int to_hex(unsigned long n, int count)
{
    char *hex;
    hex = "0123456789abcdef";
    if(n>=16)
    {
        count = to_hex(n/16, count);
        count = to_hex(n%16, count);
    }
    else 
        count += ft_putchar(hex[n]);
    return (count);
}

int   ft_adress(void *n)
{
    int count ;
    unsigned long un;

    un = (unsigned long)n;
    count  = 0;
    count += ft_putstring("0x");
    count = to_hex(un, count);
    return count;
}