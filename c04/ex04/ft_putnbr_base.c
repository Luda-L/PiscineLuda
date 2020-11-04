/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 23:14:21 by mtak              #+#    #+#             */
/*   Updated: 2020/11/04 17:44:31 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

long	change_base(long *arr, long num, long base_num)
{
	int idx;

	idx = 0;
	while (num)
	{
		arr[idx] = num % base_num;
		num /= base_num;
		idx++;
	}
	idx--;
	return (idx);
}

int		error(char *base, int *cnt)
{
	int i;
	int j;

	if (*base == '\0' || *base++ == '\0')
		return (1);
	base--;
	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		(*cnt)++;
		i++;
	}
	i--;
	while (i >= 0)
	{
		if (base[i] == '+' || base[i] == '-' || (9 <= base[i] && base[i] <= 13) || base[i] == 32)
			return (1);
		i--;
	}
}

void	ft_putnbr_base(int nb, char *base)
{
	char *tmp;
	int base_num;
	long nbr;
	long arr[32];
	int idx;

	nbr = nb;
	base_num = 0;
	tmp = base;
	if (!error(base, &base_num))
	{
		if (nbr == 0)
			write(1, &base[0], 1);
		else if (nbr < 0)
		{
			write(1, "-", 1);
			nbr *= -1;
		}
		idx = change_base(arr, nbr, base_num);
		while (idx >= 0)
		{
			write(1, &base[arr[idx]], 1);
			idx--;
		}
	}
}

int main()
{
	ft_putnbr_base(12, "01");
	return 0;
}
