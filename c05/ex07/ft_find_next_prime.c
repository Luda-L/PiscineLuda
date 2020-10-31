/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 03:59:13 by mtak              #+#    #+#             */
/*   Updated: 2020/10/29 06:21:07 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_is_prime(int nb);

int				ft_find_next_prime(int nb)
{
	int			i;

	i = nb;
	while (!ft_is_prime(i))
		i++;
	return (i);
}

int				ft_is_prime(int nb)
{
	long long	i;

	if (nb <= 1)
		return (0);
	if (nb <= 3)
		return (1);
	if (!(nb % 2 && nb % 3))
		return (0);
	i = 5;
	while (i * i <= nb)
	{
		if (!(nb % i && nb % (i + 2)))
			return (0);
		i += 6;
	}
	return (1);
}
