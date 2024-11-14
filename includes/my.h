/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfradj <yfradj@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:39:23 by yfradj            #+#    #+#             */
/*   Updated: 2024/11/14 15:11:44 by yfradj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_H
# define MY_H

# include <stdarg.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

int	ft_putnbr(long long nb);
int	ft_putptr(void *ptr);
int	ft_putunsigned_nbr(unsigned int nb);
int	ft_putchar(char c);
int	ft_putnbr_base(unsigned long n, char *base);
int	ft_putstr(char *str);
int	ft_putint(int nb);
int	ft_putstr_until(const char **str);
int	ft_percent();
int	ft_len_n(long long nb);
int	ft_len_hexa(long long nb);

#endif