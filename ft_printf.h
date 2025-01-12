#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *input, ...);
int	ft_printchar(char c);
int	ft_printstr(const char *s);
int	ft_printptr(unsigned long ptr);
int	ft_printnbr(int nbr);
int	ft_printunbr(unsigned int unbr);
int	ft_printhex(unsigned int hex, char format);

#endif
