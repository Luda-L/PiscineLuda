/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 01:06:22 by mtak              #+#    #+#             */
/*   Updated: 2020/10/18 01:06:22 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void rush(int x,int y);
void row_by_row(char *data,int len_x, int len_y);
void	con_by_con(char *used_data, int len_x);
void	ft_putchar(char c);
int main(){
  rush(5,4);
  return 0;
}
void rush(int x,int y){
  row_by_row("oo-|| ",x,y);
}
void  row_by_row(char *data, int len_x, int len_y) //줄을 출력할거임
{
	int y;
	y = 1;
	while (y <= len_y) //한 줄 씩 출력할거임
	{
		if (y ==1) //첫 줄 출력할거임
    { 
			con_by_con(data, len_x);
    }
		else if (y == len_y) //끝줄 출력할거임
    {
			con_by_con(&data[0], len_x);
    }
		else //첫줄도아니고 끝줄도아닌 줄 (중간줄) 출력할거임
    {  
			con_by_con(&data[3], len_x);
    }
    y++;
  }
}
void	con_by_con(char *used_data, int len_x) //칸을 출력할거임
{
	int x;
	x = 1;
	while (x <= len_x)
	{
		if (x == 1) //첫 칸 출력할거임
    { 
			ft_putchar(used_data[0]);
    }
		else if (x == len_x) //끝 칸 출력할거임
    {
			ft_putchar(used_data[1]);
    }
		else //중간 칸 출력할거임
    {
			ft_putchar(used_data[2]);
	  }
    x++;
	}
	ft_putchar('\n');
}
void	ft_putchar(char c)
{
  write(1,&c,1);
}