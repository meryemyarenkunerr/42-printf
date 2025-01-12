#include "ft_printf.h"

static void	ft_puthex(unsigned int hex, char format, int *len)
{
	if (hex >= 16)
	{
		ft_puthex(hex / 16, format, len);
		ft_puthex(hex % 16, format, len);
	}
	else
	{
		if (hex <= 9)
			(*len) += ft_printchar(hex + '0');
		else
		{
			if (format == 'x')
				(*len) += ft_printchar(hex - 10 + 'a');
			if (format == 'X')
				(*len) += ft_printchar(hex - 10 + 'A');
		}
	}
}

int	ft_printhex(unsigned int hex, char format)
{
	int	len;

	len = 0;
	ft_puthex(hex, format, &len);
	return (len);
}
