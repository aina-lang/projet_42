#include <stdio.h>
int ft_str_is_numeric(char *str);

int ft_str_is_numeric(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        int temp=str[i];
        if (temp<47 || temp >57)
        {
          return 0;
        }
        i++;
    }

    return 1;
}

