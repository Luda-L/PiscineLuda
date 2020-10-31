/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 15:17:41 by mtak              #+#    #+#             */
/*   Updated: 2020/10/29 01:24:34 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi(char *str)
{
	int i;
	int count;
	int num;

	i = 0;
	num = 0;
	count = 0;
	while (*str == 32 || (9 <= *str && *str <= 13))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			count++;
		str++;
	}
	while (48 <= *str && *str <= 57)
	{
		num = num * 10;
		num = num + *str - 48;
		str++;
	}
	if (count % 2 != 0)
		num = num * -1;
	return (num);
}
