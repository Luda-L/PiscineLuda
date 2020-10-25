/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 19:20:43 by mtak              #+#    #+#             */
/*   Updated: 2020/10/22 05:28:56 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	unsigned char c;

	while (*str)
	{
		c = *str;
		if ((c >= 0 && c <= 31) || c >= 127)
		{
			printing('\\');
			printing("0123456789abcdef"[c / 16]);
			printing("0123456789abcdef"[c % 16]);
		}
		else
		{
			printing(c);
		}
		str++;
	}
}

void	printing(char c)
{
	write(1, &c, 1);
}
