/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 19:20:12 by mtak              #+#    #+#             */
/*   Updated: 2020/10/22 05:26:33 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int cnt;
	unsigned int idx;

	cnt = 0;
	idx = 0;
	while (src[cnt] != '\0')
	{
		cnt++;
	}
	if (*dest == '\0' || *src == '\0')
	{
		return (0);
	}
	if (size != 0)
	{
		while (idx < (size - 1) && src[idx] != '\0')
		{
			*dest = *src;
			src++;
			dest++;
			idx++;
		}
		*dest = '\0';
	}
	return (cnt);
}
