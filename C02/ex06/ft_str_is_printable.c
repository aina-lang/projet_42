#include <stdio.h>
int ft_str_is_printable(char *str);

int ft_str_is_printable(char *str)

{
    int i = 0;
    while (str[i] != '\0')
    {
        int temp = str[i];
        if ((temp < 33 || temp ==127) )
        {
            return 0;
        }
        i++;
    }

    return 1;
}


int main(int argc, char const *argv[])
{
    
    char *str="salut,commenttas?42motsquarante-deux;cinquante+et+un";
    printf("%d",ft_str_is_printable(str));
    return 0;
}
