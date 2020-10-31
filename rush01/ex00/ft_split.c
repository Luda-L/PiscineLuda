/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 22:39:24 by mtak              #+#    #+#             */
/*   Updated: 2020/10/25 22:39:30 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_white_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

char	*find_next_word(char *str)
{
	while (!is_white_space(*str) && *str != 0)
		str++;
	while (is_white_space(*str) && *str != 0)
		str++;
	return (str);
}

int		count_words(char *str)
{
	int	count;

	count = 0;
	while (is_white_space(*str))
		str++;
	while (*str != 0)
	{
		count++;
		str = find_next_word(str);
	}
	return (count);
}

void	ft_strcpy(char *dest, char *src)
{
	while (!is_white_space(*src) && *src != 0)
		*dest++ = *src++;
	*dest = 0;
}

char	**char_split(char *str)
{
	char	**arr;
	int		i;
	int		wc;

	wc = count_words(str);
	arr = (char **)malloc((wc + 1) * sizeof(char *));
	i = 0;
	while (is_white_space(*str))
		str++;
	while (i < wc)
	{
		arr[i] = (char *)malloc((find_next_word(str) - str + 1) * sizeof(char));
		ft_strcpy(arr[i], str);
		str = find_next_word(str);
		i++;
	}
	arr[wc] = NULL;
	return (arr);
}
