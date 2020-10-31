/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 21:51:13 by mtak              #+#    #+#             */
/*   Updated: 2020/10/28 12:47:37 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int					ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				ret;

	i = 0;
	ret = 0;
	while (i < n)
	{
		if (!(ret = *(unsigned char *)s1 - *(unsigned char *)s2) && *s2)
		{
			s1++;
			s2++;
		}
		else
		{
			break ;
		}
		i++;
	}
	return (ret);
}
