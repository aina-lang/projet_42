void ft_rev_int_tab(int *tab, int size);

void ft_rev_int_tab(int *tab, int size)
{
    int i = 0;
    while (i < size)
    {
        int temp = tab[i];
        tab[i] = tab[size - 1];
        tab[size - 1] = temp;
        i++;
        size--;
    }
}