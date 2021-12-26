/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 14:12:19 by aboumadi          #+#    #+#             */
/*   Updated: 2021/08/08 16:08:54 by aboumadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	sw;
	int	j;

	i = 0;
	j = size;
	while (i < (size / 2))
	{
		j--;
		sw = tab[i];
		tab[i] = tab[j];
		tab[j] = sw;
		i++;
	}
}
