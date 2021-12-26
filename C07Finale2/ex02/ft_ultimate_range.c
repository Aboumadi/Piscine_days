/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 09:07:03 by aboumadi          #+#    #+#             */
/*   Updated: 2021/08/23 19:22:47 by aboumadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
int	ft_ultimate_range(int **range, int min, int max)
{
	int	*T;
	int	i;
	int	j;
	int	s;

	s = 0;
	if (min >= max)
	{
		*range = 0;
		return (s);
	}
	i = 0;
	j = 0;
	T = (int *)malloc((max - min) * sizeof(int));
	if (T == NULL)
		return (-1);
	while (min < max)
	{
		T[j] = min;
		min++;
		j++;
		s++;
	}
	*range = T;
	return (s);
}
