/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_header.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 22:46:42 by mtak              #+#    #+#             */
/*   Updated: 2020/10/25 22:54:24 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_HEADER_H
# define RUSH_HEADER_H
# include <unistd.h>
# include <stdlib.h>

int g_row_size;
int g_final_flag;
int g_exit_flag;

struct	s_param
{
	int	view1;
	int	view2;
	int	count;
	int	visited;
	int	row_num;
};

void	init_struct(struct s_param *p, int v1, int v2, int row_num);
void	write_val(int *block, int **grid, int row_num);
int		num_check(struct s_param *p, int *block);
int		see(int *array, int in_or_de);
int		num_check_cols(int **grid);
int		check_sudoku(int **rowset);
int		get_block(struct s_param *p, int *block, int **cand);
void	set_row(struct s_param *p, int *block, int **cand);
void	print_all(int **grid, int n);
#endif
