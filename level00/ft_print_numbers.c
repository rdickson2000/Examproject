/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdickson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 12:39:29 by rdickson          #+#    #+#             */
/*   Updated: 2019/04/24 13:07:16 by rdickson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print_numbers(void)
{
	char ch;

	ch = '0';
	while (ch <= '9')
	{
		ft_putchar(ch);
		ch++;
	}
	ft_putchar('\n');
}

int		main(void)
{
	ft_print_numbers();
	return (0);
}
