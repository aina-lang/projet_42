#include <unistd.h>

void ft_print_reverse_alphabet(void);

void ft_print_reverse_alphabet(void){
int n=122;
while (n>96)
{
    char c=n;
write(1, &c,1);
n--;
}

}
