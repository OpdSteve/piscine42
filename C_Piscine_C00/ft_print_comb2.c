/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleon-go <eleon-go@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 01:54:50 by eleon-go          #+#    #+#             */
/*   Updated: 2023/02/25 11:23:55 by eleon-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_impresora(short n)
{
	char	c;

	if (n < 10)
	{
		c = n + 48;
		ft_putchar('0');
		ft_putchar(c);
		return ;
	}
	c = (n / 10) + 48;
	ft_putchar(c);
	c = (n % 10) + 48;
	ft_putchar(c);
}

void	ft_print_comb2(void)
{
	short	v[2];

	v[0] = 0;
	while (v[0] <= 98)
	{
		v[1] = v[0] + 1;
		while (v[1] <= 99)
		{
			ft_impresora(v[0]);
			ft_putchar(' ');
			ft_impresora(v[1]);
			if (v[0] == 98 && v[1] == 99)
			{
				ft_putchar('\n');
			}
			else
				ft_putchar(',');
			ft_putchar(' ');
			v[1]++;
		}
		v[0]++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
