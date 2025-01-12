#include "ft_printf.h"

static void	ft_putunbr(unsigned int unb, int *len)
{
	if (unb >= 10)
	{
		ft_putunbr(unb / 10, len);
		(*len) += ft_printchar(unb % 10 + '0');
	}
	else
		(*len) += ft_printchar(unb + '0');
}

int	ft_printunbr(unsigned int unbr)
{
	int	len;

	len = 0;
	ft_putunbr(unbr, &len);
	return (len);
}
