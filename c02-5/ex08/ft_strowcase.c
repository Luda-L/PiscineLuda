/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strowcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 19:19:12 by mtak              #+#    #+#             */
/*   Updated: 2020/10/22 05:04:10 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char *address;

	address = str;
	while (*address)
	{
		if (*address >= 'A' && *address <= 'Z')
		{
			*address += 32;
		}
		address++;
	}
	return (str);
}
