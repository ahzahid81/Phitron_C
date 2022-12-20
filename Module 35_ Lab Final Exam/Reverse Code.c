#include <stdio.h>

int main ()
{
    int t, n, a;
    scanf("%d", &t);

    for(int i = 1; i<=t;  i++){
        scanf("%d", &n);

        while(n>0){
            a = n%10;

            if(a==1){
                printf("A");
            }
            else if(a==2){
                printf("B");
            }
            else if(a==3){
                printf("C");
            }
            else if(a==4){
                printf("D");
            }
            else if(a==5){
                printf("E");
            }
            else if(a==6){
                printf("F");
            }
            else if(a==7){
                printf("G");
            }
            else if(a==8){
                printf("H");
            }
            else if(a==9){
                printf("I");
            }
            n = n/10;
        }
        printf("\n");
    }
}
