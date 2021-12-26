/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 13:25:50 by aboumadi          #+#    #+#             */
/*   Updated: 2021/08/23 17:12:20 by aboumadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
int	ft_strlen(int s, char **strs)
{
	int	i;
	int	j;

	i = 0;
	while (i < s)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			j++;
		}
		i++;
	}
	return (i * j);
}

int	strlen_sep(char *sep)
{
	int	i;

	i = 0;
	while (sep[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *Tab, char **strs, char *sep, int size)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			Tab[k] = strs[i][j++];
			k++;
		}
		j = 0;
		while (sep[j] != '\0')
		{
			Tab[k] = sep[j++];
			k++;
		}
		i++;
	}
	Tab[k - strlen_sep(sep) - 1] = '\0';
	return (Tab);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total;
	char	*Tab;
	int		i;

	i = 0;
	total = 0;
	if (size == 0)
		Tab = 0;
	else
		total = ft_strlen(size, strs) + (strlen_sep(sep) * (size - 1));
	Tab = (char *)malloc(total * sizeof(char));
	if (Tab == NULL)
		return (0);
	else
		return (ft_strcat(Tab, strs, sep, size));
}
