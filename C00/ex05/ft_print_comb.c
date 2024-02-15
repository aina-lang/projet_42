#include <unistd.h>

void ft_print_comb(void);

void ft_print_comb(void){
    char a,b,c;
    int i,j,k;
    i=0;
char _space=' ';
    while(i<10){
        j=i+1;
        a=48+i;
        
        while(j<10){
            k=j+1;
            b=48+j;
            
            while(k<10){
           
            c=48+k;
            write(1,&a,1);
            write(1,&b,1);
            write(1,&c,1);
            write(1,&_space,1);
            k++;
        }
            j++;


        }
     i++;   
    }

}

