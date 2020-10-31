/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 23:14:21 by mtak              #+#    #+#             */
/*   Updated: 2020/10/29 01:21:56 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	convert_num(int num, int count, char *arr);
int		error(char *base, int *count);
void	recursive(int nbr, int count, char *arr);

void		ft_putnbr_base(int nbr, char *base)
{
	char	*save;
	int		count;

	save = base;
	if (!error(base, &count))
	{
		convert_num(nbr, count, save);
	}
}

int			error(char *base, int *count)
{
	int		i;
	int		j;

	i = 0;
	if (base[i] == '\0' || base[i + 1] == '\0')
		return (1);
	count = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
		count++;
	}
	return (0);
}

void		convert_num(int num, int count, char *arr)
{
	long	nbr;

	nbr = num;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
	}
	recursive(nbr, count, arr);
}

void		recursive(int nbr, int count, char *arr)
{
	if (nbr >= count)
		recursive(nbr / count, count, arr);
	write(1, &arr[nbr % count], 1);
}
