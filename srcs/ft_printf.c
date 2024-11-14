/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfradj <yfradj@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:14:28 by yfradj            #+#    #+#             */
/*   Updated: 2024/11/14 15:20:51 by yfradj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/my.h"
#include "../libft/libft.h"

int	no_args(const char *str)
{
	ft_putstr_fd(str, 1);
	return (ft_strlen(str));
}

int	len_arg(const char *str)
{
	char	*s;
	int		i;

	i = 0;
	s = (char *)str;
	while (*s)
	{
		if (*s == '%')
			i++;
		s++;
	}
	return (i);
}

int	print_arg(char type, va_list arg)
{
	int	i;

	i = 0;
	if (type == 'c' || type == '%')
		i = ft_putchar(va_arg(arg, int));
	else if (type == 'd')
		i = ft_putnbr(va_arg(arg, long long));
	else if (type == 'x')
		i = ft_putnbr_base(va_arg(arg, unsigned int), "0123456789abcdef");
	else if (type == 'X')
		i = ft_putnbr_base(va_arg(arg, unsigned int), "0123456789ABCDEF");
	else if (type == 'p')
		i = ft_putptr(va_arg(arg, void *));
	else if (type == 's')
		i = ft_putstr(va_arg(arg, char *));
	else if (type == 'u')
		i = ft_putunsigned_nbr(va_arg(arg, unsigned int));
	else if (type == 'i')
		i = ft_putnbr(va_arg(arg, int));
	return (i);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		len;
	int		j;

	i = len_arg(str);
	len = 0;
	j = 0;
	if (i == 0)
		return (no_args(str));
	va_start(args, str);
	while (str[j])
	{
		if (str[j] == '%')
		{
			j++;
			len += print_arg(str[j], args);
		}
		else
			len += ft_putchar(str[j]);
		j++;
	}
	va_end(args);
	return (len);
}

int	main(void)
{
	// int i = 0;
	// int j = 0;

	int a = 42;
	// i += ft_printf("%sadcde%s", "hello", "world");
	// i += ft_printf("%sadcde%sabcde", "hello", "world");
	// i += ft_printf("abcde%sadcde%s", "hello", "world");
	// i += ft_printf("");
	// i += ft_printf("blblbl");
	// i += ft_printf("%cnkla%p", 'A', NULL);
	// i += ft_printf("%d%x", 255, 124443);
	// i += ft_printf("\n");
	// j  += printf("%sadcde%s", "hello", "world");
	// j  += printf("%sadcde%sabcde", "hello", "world");
	// j  += printf("abcde%sadcde%s", "hello", "world");
	// j  += printf("");
	// j  += printf("blblbl");
	// j  += printf("%cnkla%p", 'A', NULL);
	// j  += printf("%d%x", 255, 124443);
	ft_printf("%p\n", &a);
	printf("%p\n", &a);
}