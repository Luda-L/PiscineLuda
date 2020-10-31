/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 22:29:09 by mtak              #+#    #+#             */
/*   Updated: 2020/10/26 23:48:57 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char *s1;
	char *s2;
	char *temp;

	temp = str;
	if (!*to_find)
		return (temp);
	while (*temp)
	{
		s1 = temp;
		s2 = to_find;
		while (*s1 && *s2 && !(*s1 - *s2))
		{
			s1++;
			s2++;
		}
		if (!*s2)
			return (temp);
		temp++;
	}
	return (0);
}
