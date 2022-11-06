#include "ft_printf.h"

size_t ft_putunsigned(unsigned long i)
{
    size_t count ;
    count =0;
    if(i > 9)
    {
		count +=ft_putnbr(i / 10);
		count += ft_putnbr(i % 10);
	}
    if ( i >= 0 && i <= 9 )
    {
        count +=ft_putchar(i+48);
    }
  return count;
}