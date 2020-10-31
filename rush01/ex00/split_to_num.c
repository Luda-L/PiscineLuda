/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_to_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 22:43:41 by mtak              #+#    #+#             */
/*   Updated: 2020/10/25 22:44:01 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**char_split(char *str);
int		count_words(char *str);

int		ft_atoi(char *str)
{
	int number;

	number = 0;
	while (*str != 0)
	{
		if (!('0' <= *str && *str <= '9'))
		{
			number = 0;
			return (number);
		}
		number = number * 10 + (*str++ - '0');
	}
	return (number);
}

int		*to_numarray(char **chararray, int size)
{
	int	i;
	int	*numarray;

	numarray = (int *)malloc(size * sizeof(int));
	i = -1;
	while (++i < size)
		numarray[i] = ft_atoi(chararray[i]);
	return (numarray);
}

int		*split_to_num(char *str)
{
	char	**chararray;
	int		*numarray;
	int		idx;

	chararray = char_split(str);
	numarray = to_numarray(chararray, count_words(str));
	idx = 0;
	while (chararray[idx])
	{
		free(chararray[idx++]);
	}
	free(chararray);
	return (numarray);
}
