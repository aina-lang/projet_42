#include <stdio.h>

char *ft_strcapitalize(char *str);

char *ft_strcapitalize(char *str)
{
    int i=0;
  
    while (str[i] != '\0')
    {
        int temp = str[i];
        if ((temp >= 33 && temp <127) && (temp >= 97 && temp <= 122))
        {

            if ((str[i-1] < 65 || str[i-1] > 90) && (str[i-1] < 97 || str[i-1] > 122))
            {
            
              str[i] = str[i] - 32;
            }
        }
        i++;
    }

    return str;
}



int main(int argc, char const *argv[])
{

    char str[]="salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
 
    int i = 0;

    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }

    i = 0;

    ft_strcapitalize(str);
   
        printf("\n%s", str);
        
    return 0;
}
