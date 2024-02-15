#include <stdio.h>
char *ft_strlowercase(char *str);
char *ft_strlowercase(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        int temp = str[i];

        if (temp >= 65 && temp <= 90)
        {

            str[i] = temp + 32;
        }
        i++;
    }

    return str;
}