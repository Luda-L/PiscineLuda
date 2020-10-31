/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 23:45:37 by mtak              #+#    #+#             */
/*   Updated: 2020/10/28 14:10:14 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int		ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	cnt;
	unsigned int	d_len;

	d_len = 0;
	while (dest[d_len] && d_len < size)
		d_len++;
	cnt = 0;
	while (src[cnt])
		cnt++;
	i = d_len;
	while (*src && i + 1 < size)
	{
		dest[i] = *src;
		i++;
		src++;
	}
	return (cnt + d_len);
}
