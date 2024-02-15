void ft_sort_int_tab(int *tab, int size);

void ft_sort_int_tab(int *tab, int size)
{

    int i, j, temp;
    i = 0;
    while (i < size)
    {
        j = i + 1;
        while (j < size)
        {
            temp = tab[i];
            if (tab[i] > tab[j])
            {
                tab[i] = tab[j];
                tab[j] = temp;
            }
            j++;
        }
        i++;
    }
}