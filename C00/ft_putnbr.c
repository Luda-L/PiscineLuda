/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 17:00:45 by mtak              #+#    #+#             */
/*   Updated: 2020/10/17 17:00:45 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void wrote(int rep);

void wrote(int rep)
{
  char c;

  if(rep==0)
    return ;
  wrote(rep/10);
  c=48+rep%10;
  write(1,&c,1);
}

void ft_putnbr(int nb){
  char c;

  if(nb<0)
  {
    write(1,"-",1);
    wrote(-(nb/10));
    c=48-nb%10;
  }
  else
  {
    wrote(nb/10);
    c=48+nb%10;
  }
  write(1,&c,1);
}