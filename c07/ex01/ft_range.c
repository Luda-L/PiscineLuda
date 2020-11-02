/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 20:26:52 by mtak              #+#    #+#             */
/*   Updated: 2020/11/02 20:38:05 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	len;
	int i;

	i = 0;
	if (min < max)
	{
		len = max - min;
		arr = (int *)malloc(sizeof(int) * len);
		while (min < max)
		{
			arr[i++] = min++;
		}
	}
	else
	{
		return (NULL);
	}
	return (arr);
}
