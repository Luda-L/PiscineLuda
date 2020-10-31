/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 19:00:22 by mtak              #+#    #+#             */
/*   Updated: 2020/10/29 01:19:52 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi_base(char *str, char *base)
{
	int lenstr; //파싱용 루프할 수//lenstr-1 승 함
	int lenbase; //lenbase진수
	int i;

	lenstr = ft_strlen(str);
	lenbase = ft_strlen(base);
	if(error(base, lenbase))
	{

	}
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int error(char *str, int lenbase)
{

}
