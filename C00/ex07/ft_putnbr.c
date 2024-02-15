#include <unistd.h>

void ft_putnbr(int nb);


void ft_putnbr(int nb){
   char c=nb%10+'0';
   if(nb/10!=0){
    ft_putnbr(nb/10);
    }
    write(1,&c,1);
}


void main(){
    ft_putnbr(9999999);
}