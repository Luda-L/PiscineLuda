#include <unistd.h>
#include "ft_stock_str.h"

void ft_show_tab(struct s_stock_str *par)
{
    int i;

    i = 0;
    while(par[i].str)
    {
        printing(par[i].str);
        printing("\n");
        printing_num(par[i].size);
        printing("\n");
        printing(par[i].copy);
        printing("\n");
        i++;
    }
}

void printing(char *str)
{
    while(*str)
        write(1, str++, 1);
    }
}

void printing_num(int nbr)
{
    if(nbr >= 10)
        printing_num(nbr/10);
    write(1,"0123456789"[nbr%10],1);
}