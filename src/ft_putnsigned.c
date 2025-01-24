
#include "../includes/ft_printf.h"

int	ft_putnsigned(unsigned int n)
{
	int	nb_caracter;

	nb_caracter = 0;
	if (n > 9)
		nb_caracter += ft_putnsigned(n / 10);
	nb_caracter += ft_putchar((n % 10) + '0');
	return (nb_caracter);
}
