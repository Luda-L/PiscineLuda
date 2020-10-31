/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 02:22:34 by mtak              #+#    #+#             */
/*   Updated: 2020/10/20 03:39:58 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char numb[5];

	numb[0] = '0';
	numb[3] = ',';
	numb[4] = ' ';
	while (numb[0] <= '6')
	{
		numb[1] = numb[0] + 1;
		while (numb[1] <= '8')
		{
			numb[2] = numb[1] + 1;
			while (numb[2] <= '9')
			{
				write(1, &numb, 5);
				numb[2]++;
			}
			numb[1]++;
		}
		numb[0]++;
	}
	write(1, "789", 3);
}
