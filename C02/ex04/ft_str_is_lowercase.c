#include <stdio.h>
int ft_str_is_lowercase(char *str);

int ft_str_is_lowercase(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        int temp = str[i];
        if ((temp < 97 || temp > 122))
        {
            return 0;
        }
        i++;
    }

    return 1;
}

