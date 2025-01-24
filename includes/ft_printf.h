
#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <ctype.h>
# include <stdio.h>

int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_putstr_fd(char *str, int fd);
int	ft_putptr(unsigned long long addr, int fd);
int	ft_putpercent(void);
int	ft_formats(va_list args, const char format);
int	ft_printf(const char *str, ...);
int	ft_puthex(unsigned int num, char format);
int	ft_putnbr(int n);
int	ft_putnsigned(unsigned int n);
int	ft_print_pointer(unsigned long long addr, int fd);

#endif
