
#include "../includes/ft_printf.h"

int	ft_puthex(unsigned int num, char format)
{
	int		nb_caracter;
	char	*base;

	nb_caracter = 0;
	if (format == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (num >= 16)
		nb_caracter += ft_puthex(num / 16, format);
	nb_caracter += ft_putchar(base[num % 16]);
	return (nb_caracter);
}
