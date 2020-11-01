#include <unistd.h>
#include "ft_stock_str.h"

int ft_str_size(char *str);
char *ft_strdup(char *src);

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
    t_stock_str *ret;
    int         i;

    ret = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
    if(!ret)
        return (0);
    i = 0;
    while(i < ac)
    {
        ret[i].size = ft_str_size(av[i]);
        ret[i].str = av[i];
        ret[i].copy = ft_strdup(av[i]);
        i++;
    }
    ret[i] = (t_stock_str){0,0,0};
    return (ret);
}

int ft_str_size(char *str)
{
    int size;

    size = 0;
    while (str[size++])
        ;
    return (size);
}

char *ft_strdup(char *src)
{
    int i;
    char *dest;

    i = 0;
    dest = (char *)malloc(ft_str_size(src) * sizeof(char) + 1);
    if(!dest)
        return (0);
    while(src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}