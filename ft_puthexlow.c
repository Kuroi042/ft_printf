#include "ft_printf.h"
size_t ft_puthexlow(long long i)
{
    size_t count  = 0;
    {
	
    size_t count;
    count = 0;
	
    
	 if (i < 0)
	{
	 	i *= -1;
	 	 count += ft_putchar('-');
	 }
	 if (i > 9)
	{
		count +=ft_putnbr(i / 16);
		count += ft_putnbr(i % 16);
	}
	if (i >= 0 && i <= 9)
	{
		count += ft_putchar(i + 48);
	}

    return count;
 }

}