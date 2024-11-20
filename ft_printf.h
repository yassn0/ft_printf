/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfradj <yfradj@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:39:23 by yfradj            #+#    #+#             */
/*   Updated: 2024/11/18 20:19:20 by yfradj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_putchar(char c);
int	ft_putnbr(int nb);
int	ft_putptr(void *ptr);
int	ft_putunsigned_nbr(unsigned int nb);
int	ft_putnbr_base(unsigned long n, const char *base);
int	ft_putstr(char *str);
int	ft_putint(int nb);
int	ft_putstr_until(const char **str);
int	ft_len_n(long long nb);
int	ft_len_hexa(long long nb);
int	ft_printf(const char *str, ...);

#endif