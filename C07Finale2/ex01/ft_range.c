/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 18:10:44 by aboumadi          #+#    #+#             */
/*   Updated: 2021/08/23 14:43:56 by aboumadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
int	*ft_range(int min, int max)
{
	int	i;
	int	*T;

	i = 0;
	if (min >= max)
		return (0);
	else
	{
		T = (int *)malloc((max - min) * sizeof(int));
		if (T == NULL)
			return (0);
		else
		{
			i = 0;
			while (min != max)
			{
				T[i] = min;
				i++;
				min++;
			}
		}
	}
	return (T);
}
