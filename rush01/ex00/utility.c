/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utility.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 22:44:38 by mtak              #+#    #+#             */
/*   Updated: 2020/10/25 22:51:37 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_header.h"

void	init_struct
	(struct s_param *p, int v1, int v2, int row_num)
{
	p->view1 = v1;
	p->view2 = v2;
	p->count = 0;
	p->visited = 0;
	p->row_num = row_num;
}

void	write_val(int *block, int **grid, int row_num)
{
	int	idx;

	idx = 1;
	while (idx <= g_row_size)
	{
		grid[row_num][idx] = block[idx - 1];
		++idx;
	}
}

int		num_check(struct s_param *p, int *block)
{
	if (p->view1 == see(block, 1) && p->view2 == see(block, -1))
		return (1);
	return (0);
}

int		see(int *array, int in_or_de)
{
	int	i;
	int	max;
	int	count;
	int c;

	c = 0;
	count = 1;
	max = array[0];
	i = 0;
	if (in_or_de < 0)
	{
		max = array[g_row_size - 1];
		i = g_row_size - 1;
	}
	while (c++ < g_row_size)
	{
		if (array[i] > max)
		{
			count++;
			max = array[i];
		}
		i += in_or_de;
	}
	return (count);
}

int		num_check_cols(int **grid)
{
	int	i;
	int j;
	int	*col;

	col = (int *)malloc(g_row_size * sizeof(int));
	j = 0;
	while (++j <= g_row_size)
	{
		i = 0;
		while (++i <= g_row_size)
			col[i - 1] = grid[i][j];
		if (!(grid[0][j] == see(col, 1)
				&& grid[g_row_size + 1][j] == see(col, -1)))
			return (0);
	}
	free(col);
	return (1);
}
