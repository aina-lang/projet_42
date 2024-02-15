#include <unistd.h>
void ft_print_alphabet(void);

void ft_print_alphabet(void){
    int i=0;
    while(i<26){
        char c=97+i;
        write(1,&c,1);
        i++;
    }
}

