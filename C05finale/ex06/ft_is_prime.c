/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 15:11:36 by aboumadi          #+#    #+#             */
/*   Updated: 2021/08/17 13:23:07 by aboumadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long int	i;
	long int	j;
	long int	k;

	i = 0;
	j = 0;
	k = 1;
	while (j < nb)
	{
		k = k + 2;
		j = j + k;
		i++;
	}
	return (i);
}

int	ft_is_prime(int nb)
{
	int	j;
	int	sq;

	j = 2;
	sq = ft_sqrt(nb);
	if (nb <= 1)
		return (0);
	while (j <= sq)
	{
		if (nb % j == 0)
			return (0);
		j++;
	}
	return (1);
}
