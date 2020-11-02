/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 20:46:26 by mtak              #+#    #+#             */
/*   Updated: 2020/11/03 02:50:05 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
char **ft_split(char *str, char *charset)
{
	char **ret;
	int wcnt;
	int i;
	int wlen;
	int wlen_arr[];
	int t_point;
	
	wcnt = ft_wcnt(str, charset);
	ret = malloc(sizeof(char *) * wcnt);
	i = 0;
	while(i < wcnt)
	{
		wlen = wlen_arr[ ];
		ret[i] = malloc(sizeof(char) * (wlen + 1));
		while(j < wlen)
		{
			t_point = 
			ret[i][j] = str[ ];
			j++;
		}
		ret[i][j] = '\0';
		i++;
	}
}

int ft_wcnt(char *str, char	*charset)
{
	int i;
	int j;
	int wcnt;
	int sep_arr[256];

	ft_sep_arr(sep_arr, charset);
	wcnt = 0;
	i = 0;
	while(str[i])
	{
		if(sep_arr[(int)str[i]] == 1)
			while(sep_arr[(int)str[i]] == 1)
				i++;
			wcnt++;		
		i++;
	}
	if(sep_arr[(int)str[i]] == 1)
		wcnt--;
	if(sep_arr[(int)str[0]] == 0)
		wcnt++;
	return (wcnt);
}
i
void ft_sep_arr(int *sep_arr, char *charset)
{
	int k;
	
	k = 0;
	while(k < 256)
		sep_arr[k++] = 0;
	k = 0;
	while(charset[k])
	{
		if(sep_arr[(int)charset[k]] == 0)
			sep_arr[(int)charset[k]] = 1;
		k++;
	}
}
		
		문자열을 다른 문자열을 기준으로 나누는 함수를 작성하세요.
• 문자열 charset의 각 문자는 str 문자열을 구분하기 위한 구분자로 사용해야 합니다.
• 이 함수는 배열의 각 항에 두 개의 구분자로 둘러싸인 문자열의 주소가 포함되어
있는 배열을 반환합니다. 배열의 마지막에는 0에 해당하는 값을 넣어 배열의 끝임을
표시해야 합니다.
