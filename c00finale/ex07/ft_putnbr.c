/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+: :x     :+:    :+: */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 11:46:23 by aboumadi          #+#    #+#             */
/*   Updated: 2021/08/07 16:28:00 by aboumadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_prints(int n)
{
	if (n >= 0 && n < 10)
		ft_putchar(48 + n);
	else if (n > 9)
	{
		ft_prints(n / 10);
		ft_prints(n % 10);
	}
}

void	ft_negative(int n2)
{
	if (n2 == -2147483648)
	{
		ft_putchar('-');
		ft_putchar(48 + 2);
		ft_putchar(48 + 1);
		ft_putchar(48 + 4);
		ft_putchar(48 + 7);
		ft_putchar(48 + 4);
		ft_putchar(48 + 8);
		ft_putchar(48 + 3);
		ft_putchar(48 + 6);
		ft_putchar(48 + 4);
		ft_putchar(48 + 8);
	}
	else if (n2 < 0)
	{
		ft_putchar('-');
		ft_prints(n2 * -1);
	}
}

void	ft_putnbr(int nb)
{
	ft_prints(nb);
	ft_negative(nb);
}
