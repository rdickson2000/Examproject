/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdickson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 13:10:21 by rdickson          #+#    #+#             */
/*   Updated: 2019/04/24 13:27:07 by rdickson         ###   ########.fr       */
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
	char ch;

	ch = '9';
	while (ch >= '0')
	{
		ft_putchar(ch);
		ch--;
	}
	ft_putchar('\n');
	return (0);
}
