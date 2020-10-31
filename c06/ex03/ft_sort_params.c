/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 05:29:20 by mtak              #+#    #+#             */
/*   Updated: 2020/10/31 17:22:33 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int			ft_strcmp(char *s1, char *s2);
void		ft_putstr(char *str);
void		sort(int *j, char **argv);

int			main(int argc, char **argv)
{
	int		i;
	int		j;

	i = 1;
	while (i < argc)
	{
		j = 1;
		while (j <= argc - (i + 1))
		{
			sort(&j, argv);
		}
		i++;
	}
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
}

void		sort(int *j, char **argv)
{
	char	*tmp;

	if (ft_strcmp(argv[*j], argv[*j + 1]) > 0)
	{
		tmp = argv[*j + 1];
		argv[*j + 1] = argv[*j];
		argv[*j] = tmp;
	}
	(*j)++;
}

int			ft_strcmp(char *s1, char *s2)
{
	int	ret;

	ret = 0;
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void		ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}
