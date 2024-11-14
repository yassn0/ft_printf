/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfradj <yfradj@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:04:37 by yfradj            #+#    #+#             */
/*   Updated: 2024/11/14 15:11:23 by yfradj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/my.h"

int	conditions(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] <= 32 || base[i] >= 126)
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	else
		return (i);
}

int	ft_putnbr_base(unsigned long n, char *base)
{
	unsigned long	len_base;

	len_base = conditions(base);
	if (len_base == 0)
		return (0);
	if (n < 0)
	{
		write(1, "-", 1);
		n = n * (-1);
	}
	if (n >= len_base)
	{
		ft_putnbr_base((n / len_base), base);
		ft_putnbr_base((n % len_base), base);
	}
	else
		write(1, &base[n % len_base], 1);
	return (ft_len_hexa(n));
}
