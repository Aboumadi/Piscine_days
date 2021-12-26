/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 10:30:52 by aboumadi          #+#    #+#             */
/*   Updated: 2021/08/07 16:24:03 by aboumadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_char(char c)
{
	write(1, &c, 1);
}

void	ft_prints(int a, int b, int c, int d)
{
	ft_char(a + '0');
	ft_char(b + '0');
	ft_char(' ');
	ft_char(c + '0');
	ft_char(d + '0');
	if (a != 9 || b != 8 || c != 9 || d != 9)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int		b;
	int		a;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_prints(a / 10, a % 10, b / 10, b % 10);
			b++;
		}
		a++;
	}
}
