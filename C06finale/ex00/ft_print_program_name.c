/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 16:33:36 by aboumadi          #+#    #+#             */
/*   Updated: 2021/08/19 11:30:14 by aboumadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
int	main(int c, char **v)
{
	int	i;

	i = 0;
	if (c != 0)
	{
		while (v[0][i] != '\0')
		{
			write(1, &v[0][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
}
