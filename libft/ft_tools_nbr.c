/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_ll.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slogos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 16:56:26 by slogos            #+#    #+#             */
/*   Updated: 2017/01/26 17:05:04 by slogos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_putnbr_ll() function prints the number nb (unsigned ll) to STDIN.
*/

#include "ft_printf.h"

void	ft_putnbr_ll(long long nb)
{
	if (nb <= 9)
		ft_putchar(nb + '0');
	else
	{
		ft_putnbr_ll(nb / 10);
		ft_putnbr_ll(nb % 10);
	}
}

void	ft_putnbr_ull(unsigned long long nb)
{
	if (nb <= 9)
		ft_putchar(nb + '0');
	else
	{
		ft_putnbr_ull(nb / 10);
		ft_putnbr_ull(nb % 10);
	}
}

void	ft_putnbr_base_ull(unsigned long long nb, int base, int maj)
{
	char	*str;

	str = maj ? "0123456789ABCDEF" : "0123456789abcdef";
	if (nb < (unsigned long long)base)
		ft_putchar(str[nb]);
	else
	{
		ft_putnbr_base_ull(nb / base, base, maj);
		ft_putnbr_base_ull(nb % base, base, maj);
	}
}

int		ft_nbrlen_ll(long long n)
{
	int		i;

	i = 0;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}
