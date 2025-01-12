#include "ft_printf.h"

static void	ft_putnbr(int nb, int *len)
{
	if (nb == -2147483648)
		(*len) += ft_printstr("-2147483648");
	else if (nb < 0)
	{
		(*len) += ft_printchar('-');
		ft_putnbr(-nb, len);
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10, len);
		(*len) += ft_printchar(nb % 10 + '0');
	}
	else
		(*len) += ft_printchar(nb + '0');
}

int	ft_printnbr(int nbr)
{
	int	len;

	len = 0;
	ft_putnbr(nbr, &len);
	return (len);
}
