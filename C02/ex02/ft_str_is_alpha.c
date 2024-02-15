#include <unistd.h>
#include <stdio.h>
int ft_str_is_alpha(char *str);

int ft_str_is_alpha(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        int temp = str[i];
        if ((temp < 65 || temp > 90) && (temp < 97 || temp > 122))
        {
            return 0;
        }
        i++;
    }

    return 1;
}



int main(int argc, char const *argv[])
{
    
    char *str="";
    printf("%d",ft_str_is_numeric(str));
    return 0;
}

