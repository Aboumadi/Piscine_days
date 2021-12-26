/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 14:55:22 by aboumadi          #+#    #+#             */
/*   Updated: 2021/08/08 17:25:14 by aboumadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
void	ft_sort_int_tab(int *tab, int size)
{
	int	sw;
	int	i;
	int	j;
	int	k;

	j = 0;
	k = 0;
	i = 0;
	while (k < size - 1)
	{
		i = 0;
		j = 0;
		while (j < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				sw = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = sw;
			}
			i++;
			j++;
		}	
		k++;
	}
}
