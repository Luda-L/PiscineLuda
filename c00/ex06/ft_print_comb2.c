/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 02:24:16 by mtak              #+#    #+#             */
/*   Updated: 2020/10/19 22:59:37 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	writing(char c);

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	while (a < 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			writing(48 + a / 10);
			writing(48 + a % 10);
			write(1, " ", 1);
			writing(48 + b / 10);
			writing(48 + b % 10);
			if (a + b != 98 + 99)
			{
				write(1, ", ", 2);
			}
			b++;
		}
		a++;
	}
}

void	writing(char c)
{
	write(1, &c, 1);
}
