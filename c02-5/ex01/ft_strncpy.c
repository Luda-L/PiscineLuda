/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 19:13:27 by mtak              #+#    #+#             */
/*   Updated: 2020/10/22 04:59:11 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int		i;
	char	*res;

	res = dest;
	i = 0;
	while (i < n && src[i] != '\0')
	{
		*dest = src[i];
		dest++;
		i++;
	}
	while (i < n)
	{
		*dest = '\0';
		dest++;
	}
	return (res);
}
