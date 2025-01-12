#include "ft_printf.h"

static void	ft_putpointer(unsigned long ptr, int *len)
{
	if (ptr >= 16)
	{
		ft_putpointer(ptr / 16, len);
		ft_putpointer(ptr % 16, len);
	}
	else
	{
		if (ptr <= 9)
			(*len) += ft_printchar(ptr + '0');
		else
			(*len) += ft_printchar(ptr - 10 + 'a');
	}
}

int	ft_printptr(unsigned long ptr)
{
	int	len;

	len = 0;
	len += write(1, "0x", 2);
	ft_putpointer(ptr, &len);
	return (len);
}
