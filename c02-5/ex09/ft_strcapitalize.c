/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 05:08:20 by mtak              #+#    #+#             */
/*   Updated: 2020/10/22 05:38:13 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 1;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	lowering(str, 1);
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			exception(str, i);
		}
		i++;
	}
	return (str);
}

void	lowering(char *str, int i)
{
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
}

void	exception(char *str, int i)
{
	if (!((str[i - 1] >= 'A' && str[i - 1] <= 'Z')))
	{
		if (str[i - 1] <= 'z')
		{
			str[i] -= 32;
		}
	}
	if (!(str[i - 1] >= 'a' && str[i - 1] <= 'z'))
	{
		if (str[i - 1] <= 'z')
		{
			str[i] -= 32;
		}
	}
	if (str[i - 1] >= '0' && str[i - 1] <= '9')
	{
		str[i] += 32;
	}
}
