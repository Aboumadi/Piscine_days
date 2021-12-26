/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 12:55:17 by aboumadi          #+#    #+#             */
/*   Updated: 2021/08/16 13:18:23 by aboumadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_atoi(char *str)
{
	int	i;
	int	j;
	int	n;

	i = 0;
	n = 0;
	j = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			j++;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		n = (n * 10) + (str[i] - 48);
		i++;
	}
	if (j % 2 != 0)
		return (n * -1);
	else
		return (n);
}
