/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 01:57:13 by mtak              #+#    #+#             */
/*   Updated: 2020/11/02 20:41:50 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		tot_len;
	int		tmp;

	tot_len = 0;
	tmp = size;
	while (size >= 0)
	{
		tot_len += ft_strlen(strs[size - 1]);
		size--;
	}
	tot_len += tmp;
	result = (char *)malloc(sizeof(char) * tot_len);
	ft_strcat(result, strs, tmp, *sep);
	result[tot_len - 1] = '\0';
	return (result);
}

int		ft_strlen(char *str)
{
	int cnt;

	cnt = 0;
	while (str[cnt])
		cnt++;
	return (cnt);
}

void	ft_strcat(char *result, char **strs, int tmp, char sep)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	while (j < tmp)
	{
		k = 0;
		while (strs[j][k])
		{
			result[i] = strs[j][k];
			i++;
			k++;
		}
		result[i++] = sep;
		j++;
	}
}
