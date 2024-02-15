#include <unistd.h>

void ft_putchar(char c);


void ft_putchar(char c){
    write(1,&c,1);
}


void main(){
    ft_putchar(10+'0');
}


