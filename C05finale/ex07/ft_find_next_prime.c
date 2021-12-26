/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 15:33:11 by aboumadi          #+#    #+#             */
/*   Updated: 2021/08/18 08:15:36 by aboumadi         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	int	j;
	int	sq;

	if (nb <= 2)
		return (2);
	j = 2;
	sq = ft_sqrt(nb);
	while (j < sq)
	{
		if (nb % j == 0)
			return (ft_find_next_prime(nb + 1));
		j++;
	}
	return (nb);
}
