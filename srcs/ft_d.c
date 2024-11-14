/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_d.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfradj <yfradj@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:15:22 by yfradj            #+#    #+#             */
/*   Updated: 2024/11/14 11:31:10 by yfradj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/my.h"

int	ft_putnbr(long long nb)
{
	if (nb < 0)
	{
		nb = nb * (-1);
		ft_putchar('-');
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
	return (ft_len_n(nb));
}
