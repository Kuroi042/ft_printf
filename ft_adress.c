#include "ft_printf.h"
void tohex(unsigned long n)
{
    char *hex;
    hex = "0123456789abcdef";
    if(n>16)
    {
        to_hex(n/16);
        to_hex(n%16);
    }
    else 
        ft_putchar(hex[n]);
}

int   ft_adress(unsigned long n)
{
    int count ;
    count  = 0;

        count += ft_putstring("0x");
        count += to_hex(n);
    return count;
}