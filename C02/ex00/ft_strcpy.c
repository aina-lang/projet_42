#include <stdio.h>
char *ft_strcpy(char *dest, char *src);

char *ft_strcpy(char *dest, char *src)
{
    int i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

int main(int argc, char const *argv[])
{
    char *str = "hellow world";
    char str1[]="";

    ft_strcpy(str1, str);

    int i = 0;
    while (str1[i] != '\0')
    {
        printf("%c", str1[i]);
        i++;
    }


    return 0;
}
