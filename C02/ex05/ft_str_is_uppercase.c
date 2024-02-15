int ft_is_uppercase(char *str);

int ft_is_uppercase(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        int temp = str[i];
        if ((temp < 65 || temp > 90))
        {
            return 0;
        }
        i++;
    }

    return 1;
}