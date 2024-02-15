#include <unistd.h>

void ft_print_numbers(void);
void ft_print_numbers(void){
    int i =0;

    while (i<10)
    {

char c=i+48;
    write(1,&c,1);
    i++;
    }
    

}

