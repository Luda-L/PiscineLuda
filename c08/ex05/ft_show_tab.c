/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 14:48:08 by mtak              #+#    #+#             */
/*   Updated: 2020/11/02 18:48:38 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	printing(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	printing_num(int nbr)
{
	int c;

	if (nbr >= 10)
		printing_num(nbr / 10);
	c = "0123456789"[nbr % 10];
	write(1, &c, 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		printing(par[i].str);
		printing("\n");
		printing_num(par[i].size);
		printing("\n");
		printing(par[i].copy);
		printing("\n");
		i++;
	}
}
