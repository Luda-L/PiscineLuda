/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 00:08:32 by mtak              #+#    #+#             */
/*   Updated: 2020/10/18 00:08:32 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void rush(int x,int y);
void row_by_row(char *data,int len_x, int len_y);
void con_by_con(char *used_data, int len_x);
void ft_putchar(char c);

int main(){
  rush(5,4);
  return (0);
}