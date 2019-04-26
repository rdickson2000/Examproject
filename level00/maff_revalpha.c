/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdickson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 09:45:21 by rdickson          #+#    #+#             */
/*   Updated: 2019/04/26 09:53:20 by rdickson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int	main(void)
{
	char alpha;
	char beta;

	alpha = 'Z';
	beta = 'y';
	while (alpha >= 'A' && beta >= 'a')
	{
		ft_putchar(alpha);
		alpha -= 2;
		ft_putchar(beta);
		beta -= 2;
	}
	write(1, "\n", 1);
	return (0);
}
