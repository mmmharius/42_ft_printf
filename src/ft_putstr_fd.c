
#include "../includes/ft_printf.h"

int	ft_putstr_fd(char *str, int fd)
{
	int	i;

	i = 0;
	if (!str)
		return (write(fd, "(null)", 6));
	while (str[i])
	{
		write(fd, &str[i], 1);
		i++;
	}
	return (i);
}
