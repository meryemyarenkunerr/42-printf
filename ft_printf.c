#include "ft_printf.h"

static int	ft_check_type(va_list *args, const char format)
{
	int	len;

	len = 0;
	if (format == 'c')
		len += ft_printchar((char)va_arg(*args, int));
	else if (format == 's')
		len += ft_printstr(va_arg(*args, char *));
	else if (format == 'p')
		len += ft_printptr(va_arg(*args, unsigned long));
	else if (format == 'd' || format == 'i')
		len += ft_printnbr(va_arg(*args, int));
	else if (format == 'u')
		len += ft_printunbr(va_arg(*args, unsigned int));
	else if (format == 'x' || format == 'X')
		len += ft_printhex(va_arg(*args, unsigned int), format);
	else if (format == '%')
		len += ft_printchar('%');
	else
	{
		len += ft_printchar('%');
		len += ft_printchar(format);
	}
	return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;
	int		i;

	i = 0;
	len = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			len += ft_check_type(&args, format[i]);
		}
		else
			len += ft_printchar(format[i]);
		i++;
	}
	va_end(args);
	return (len);
}
