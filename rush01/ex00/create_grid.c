/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_grid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 22:59:08 by mtak              #+#    #+#             */
/*   Updated: 2020/10/25 22:59:35 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_header.h"

int		*split_to_num(char *str);

int		count_n(int *num)
{
	int *temp;
	int count;

	count = 0;
	temp = num;
	while (*temp)
	{
		if (*temp++ == 0)
			return (0);
		count++;
	}
	if (count % 4 != 0)
		return (0);
	return (count);
}

int		insert_rc(int *num, int **grid, int n)
{
	int	*temp;
	int	i;
	int count;

	temp = num;
	i = 0;
	count = 0;
	while (count++ < n * 4)
	{
		if (*temp > n)
			return (0);
		if (i / n == 0)
			grid[0][i + 1] = *temp;
		else if (i / n == 1)
			grid[n + 1][(i % n) + 1] = *temp;
		else if (i / n == 2)
			grid[(i % n) + 1][0] = *temp;
		else if (i / n == 3)
			grid[(i % n) + 1][n + 1] = *temp;
		i++;
		temp++;
	}
	return (1);
}

void	init_grid(int **grid, int n)
{
	int i;
	int j;

	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n)
			grid[i][j++] = 0;
		i++;
	}
}

int		**create_grid(char *arg, int *num)
{
	int		i;
	int		*split_num;
	int		**grid;

	split_num = split_to_num(arg);
	if ((*num = count_n(split_num) / 4) == 0)
	{
		write(1, "Error_count\n", 12);
		g_exit_flag = 1;
	}
	grid = (int **)malloc(sizeof(int *) * (*num + 2));
	i = 0;
	while (i < *num + 2)
		grid[i++] = (int *)malloc(sizeof(int) * (*num + 2));
	init_grid(grid, *num + 2);
	if (insert_rc(split_num, grid, *num) == 0)
	{
		write(1, "Error_insert\n", 13);
		g_exit_flag = 1;
	}
	free(split_num);
	return (grid);
}
