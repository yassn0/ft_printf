/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_until.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfradj <yfradj@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 19:49:27 by yfradj            #+#    #+#             */
/*   Updated: 2024/11/12 21:11:40 by yfradj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/my.h"

int	ft_putstr_until(const char **str)
{
	int i = 0;

	while (**str && **str != '%')
	{
		write(1, *str, 1);
		(*str)++;
		i++;
	}
	return (i);
}