#include "ft_printf.h"
size_t ft_hex(long long i, char c)
{
	char *smale = "0123456789abcdef";
	char *Sbig = "0123456789ABCDEF";

	if (c == 'x')
	{
		write(1, &smale[i], 1);
		return(1);
	}
	if (c == 'X')
	{
		write(1, &Sbig[i], 1);
		return(1);
	}
	return(0);
}
size_t ft_puthexlow(unsigned int i, char c)
{
    size_t count;
	count  = 0;
    {

	
    size_t count;
    count = 0;
	
    
	 if (i < 0)
	{
	 	i *= -1;
	 	 count += ft_putchar('-');
	 }
	 if (i > 16)
	{
		count +=ft_puthexlow(i / 16, c);
		count += ft_puthexlow(i % 16, c);
	}
	if (i >= 0 && i <= 16)
	{
		count +=ft_hex(i, c);
	}

    return count;
 }

}