/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 01:45:50 by mtak              #+#    #+#             */
/*   Updated: 2020/10/29 05:54:21 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	fibonacci(int index, int a, int b);

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	return (fibonacci(index, 0, 1));
}

int	fibonacci(int index, int a, int b)
{
	if (index == 0)
		return (a);
	if (index == 1)
		return (b);
	return (fibonacci(index - 1, b, a + b));
}
