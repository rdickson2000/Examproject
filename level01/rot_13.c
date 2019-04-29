/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdickson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 12:18:28 by rdickson          #+#    #+#             */
/*   Updated: 2019/04/26 12:53:02 by rdickson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int	main(int ac, char **av)
{
	int a;
	int i;

	a = 0;
	i = 0;
	if (ac == 2)
	{
		while (av[1][a])
		{
			ft_putchar(av[1][a]);
			a++;
		}
		while (av[1][i] != '\0')
		{
			if (av[1][i] >= 'a' )
				ft_putchar(av[1][i] + 13);
			else if (av[1][i] <= 'm')
				ft_putchar(av[1][i] - 13);
		}
		i++;
	}
	ft_putchar('\n');
	return (0);
}
