/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 18:51:49 by aboumadi          #+#    #+#             */
/*   Updated: 2021/08/10 14:35:31 by aboumadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	putlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (*str);
}

char	firstlowcase(char *str)
{
	int	i;

	i = 0;
	if (str[i] >= 97 && str[i] <= 122)
		str[i] = str[i] - 32;
	return (*str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	putlowcase(str);
	i = 0;
	while (str[i] != '\0')
	{
		j = i + 1;
		if (str[i] < 48 && str[j] >= 97 && str[j] <= 122)
			str[j] = str[j] - 32;
		else if (str[i] > 57 && str[i] < 65 && str[j] >= 97 && str[j] <= 122)
			str[j] = str[j] - 32;
		else if (str[i] > 90 && str[i] < 97 && str[j] >= 97 && str[j] <= 122)
			str[j] = str[j] - 32;
		else if (str[i] > 122 && str[j] >= 97 && str[j] <= 122)
			str[j] = str[j] - 32;
		i++;
	}
	firstlowcase(str);
	return (str);
}
