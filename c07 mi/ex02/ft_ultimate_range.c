/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 21:31:30 by mtak              #+#    #+#             */
/*   Updated: 2020/11/01 03:14:13 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int len;
	int i;

	i = 0;
	if (min >= max)
	{
		return (0);
	}
	else
	{
		len = max - min;
		*range = (int *)malloc(sizeof(int) * len);
		if (*range == NULL)
			return (-1);
		while (i < len)
		{
			range[0][i++] = min++;
		}
		return (len);
	}
}
