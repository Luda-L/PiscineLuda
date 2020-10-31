/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 22:18:39 by mtak              #+#    #+#             */
/*   Updated: 2020/10/27 01:55:46 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*charptrdest;
	char			*charptrsrc;
	unsigned int	i;

	i = 0;
	charptrdest = dest;
	charptrsrc = src;
	while (*charptrdest)
		charptrdest++;
	while (i < nb && *charptrsrc)
	{
		*charptrdest = *charptrsrc;
		charptrsrc++;
		charptrdest++;
		i++;
	}
	*charptrdest = 0;
	return (dest);
}
