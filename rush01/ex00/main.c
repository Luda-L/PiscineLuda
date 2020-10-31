/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 22:40:43 by mtak              #+#    #+#             */
/*   Updated: 2020/10/25 23:21:31 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_header.h"

int		**create_grid(char *arg, int *num);
void	print_grid(int **grid, int n);
void	print_all(int **grid, int n);

void	mem_free(int **grid)
{
	int	i;

	i = 0;
	while (i < g_row_size + 2)
		free(grid[i++]);
	free(grid);
}

int		main(int argc, char **argv)
{
	int				**grid;
	struct s_param	a;
	int				*block;

	g_final_flag = 0;
	g_exit_flag = 0;
	if (argc != 2)
	{
		write(1, "Error_argc\n", 11);
		return (0);
	}
	grid = create_grid(argv[1], &g_row_size);
	if (g_exit_flag)
		return (0);
	init_struct(&a, grid[1][0], grid[1][g_row_size + 1], 1);
	block = (int *)malloc(sizeof(int) * g_row_size);
	set_row(&a, block, grid);
	if (g_final_flag)
		print_grid(grid, g_row_size);
	else
		write(1, "not found\n", 10);
	free(block);
	mem_free(grid);
	return (0);
}

void	print_grid(int **grid, int n)
{
	int		r;
	int		c;
	char	num;

	r = 0;
	while (++r < n + 1)
	{
		c = 0;
		while (++c < n + 1)
		{
			num = grid[r][c] + '0';
			write(1, &num, 1);
			if (c != n)
				write(1, " ", 1);
		}
		write(1, "\n", 1);
	}
}
