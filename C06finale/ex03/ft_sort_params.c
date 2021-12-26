/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 08:25:03 by aboumadi          #+#    #+#             */
/*   Updated: 2021/08/18 08:32:14 by aboumadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
void	ft_putchar(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		write (1, &str[i++], 1);
	write (1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int	main(int c, char **v)
{
	int		i;
	char	*temp;
	int		j;

	i = 1;
	while (i < c)
	{
		j = i + 1;
		while (j < c)
		{
			if (ft_strcmp(v[i], v[j]) > 0)
			{	
				temp = v[i];
				v[i] = v[j];
				v[j] = temp;
			}
			j++;
		}
		i++;
	}
	i = 1;
	while (i < c)
		ft_putchar(v[i++]);
}
