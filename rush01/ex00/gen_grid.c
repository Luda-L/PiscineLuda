/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gen_grid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 23:00:01 by mtak              #+#    #+#             */
/*   Updated: 2020/10/25 23:00:04 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_header.h"

int		find_dup(int row_num, int **grid)
{
	int i;
	int j;

	i = 0;
	while (++i < row_num)
	{
		j = 0;
		while (++j < g_row_size + 1)
			if (grid[i][j] == grid[row_num][j])
				return (1);
	}
	return (0);
}

int		get_block(struct s_param *p, int *block, int **grid)
{
	struct s_param	pn;
	int				rn;
	int				*next_block;

	write_val(block, grid, p->row_num);
	if (find_dup(p->row_num, grid))
		return (0);
	if (p->row_num == g_row_size && num_check_cols(grid))
		return (1);
	rn = p->row_num + 1;
	init_struct(&pn, grid[rn][0], grid[rn][g_row_size + 1], rn);
	next_block = (int *)malloc(sizeof(int) * g_row_size);
	set_row(&pn, next_block, grid);
	free(next_block);
	return (0);
}

void	set_row(struct s_param *p, int *block, int **grid)
{
	int	next;

	if (p->count == g_row_size)
	{
		if (num_check(p, block) && get_block(p, block, grid))
		{
			g_final_flag = 1;
			return ;
		}
		return ;
	}
	next = 0;
	while (next++ < g_row_size)
	{
		if (p->visited & (1 << (next - 1)))
			continue ;
		block[p->count] = next;
		p->visited |= (1 << (next - 1));
		p->count = p->count + 1;
		set_row(p, block, grid);
		if (g_final_flag)
			return ;
		p->visited &= ~(1 << (next - 1));
		p->count = p->count - 1;
	}
}
