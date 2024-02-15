#include <unistd.h>

void ft_print_comb2(void);

void ft_print_comb2(void){
    char a,b,c,d;
    int i,j,k,l;
  i=0;

    char _space=' ';
    while(i<10){
        a=i+'0';
          j=0;
        while (j<10){
            b=j+'0';
              k=0;
            while (k<1){
                    c=48+k;
                    l=0;
                    
                    while (l<9)
                    {
                        d=l+1+'0';
             
                        
                        write(1,&a,1);
                        write(1,&b,1);
                        write(1,&_space,1); 
                        write(1,&c,1);
                         write(1,&d,1);
                        write(1,&_space,1);
                        l++;
                    }
                     
                    k++;
                }
            j++;
        }
        
        i++;
    }

}



void main(void){
    ft_print_comb2();
}