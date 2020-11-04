/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 19:00:22 by mtak              #+#    #+#             */
/*   Updated: 2020/11/04 17:27:22 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	error(char *base, int div)
{
	int	i;
	int	j;
	if (div < 2)
		return (0);
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		else if (base[i] == 32 || (base[i] >= 9 && base[i] <= 13))
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
int	is_in_base(char *base, char *str)
{
	int i;
	int	j;
	int	cnt;
	cnt = 0;
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (base[j] != '\0')
		{
			if (str[i] != base[j])
			{
				j++;
				if (base[j] == '\0')
					return (cnt);
			}
			else
				break ;
		}
		cnt++;
		i++;
	}
	return (cnt);
}
int	ft_logic(char *str, char *base, int div)
{
	int		i;
	int		j;
	long	num;
	int		cnt;
	i = 0;
	num = 0;
	cnt = is_in_base(base, str);
	while (cnt != 0)
	{
		j = 0;
		while (base[j] != '\0')
		{
			if (str[i] == base[j])
			{
				num = num * div;
				num = num + j;
				break ;
			}
			j++;
		}
		i++;
		cnt--;
	}
	return (num);
}
int	ft_atoi(char *str, char *base, int div)
{
	int		i;
	int		count;
	long	num;
	num = 0;
	i = 0;
	count = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			count++;
		str++;
	}
	num = ft_logic(str, base, div);
	if (count % 2 == 1)
		return (num * -1);
	return (num);
}
int	ft_atoi_base(char *str, char *base)
{
	int		nbr;
	int		div;
	int		i;

	i = 0;
	nbr = 0;
	while (base[i] != '\0')
		i++;
	div = i;
	if (!(error(base, div)))
		return (0);
	nbr = ft_atoi(str, base, div);
	return (nbr);
}
