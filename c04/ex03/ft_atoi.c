/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 15:17:41 by mtak              #+#    #+#             */
/*   Updated: 2020/11/04 14:08:24 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int i;
	int cnt;
	int num;

	i = 0;
	while (9 <= str[i] && str[i] <= 13 || str[i] == 32)
		i++;
	cnt = 0;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			cnt++;
		i++;
	}
	num = 0;
	while (str[i])
	{
		num *= 10;
		num = num + str[i] - 48;
	}
	if (cnt % 2 != 0)
		num *= -1;
	return (num);
}
