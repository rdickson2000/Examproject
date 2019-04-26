/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdickson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 08:45:54 by rdickson          #+#    #+#             */
/*   Updated: 2019/04/26 09:41:48 by rdickson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int		main(void)
{
	char alpha;
	char beta;

	alpha = 'B';
	beta = 'a';
	while (alpha <= 'Z' && beta <= 'z')
	{
		ft_putchar(beta);
		ft_putchar(alpha);
		alpha += 2;
		beta += 2;
	}
	write(1, "\n", 1);
	return (0);
}
