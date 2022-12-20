#include <stdio.h>
void prime(int a, int b)
{
    for(int i = a; i<=b; i++){
            int divisor = 0;
        for(int j=1; j<=i; j++){
            if(i%j == 0){
                divisor++;
            }
        }
        if(divisor == 2 || i==1)
        {
            printf("%d ", i);
        }
    }
}

int main ()
{
    int i, t, a, b;
    scanf("%d", &t);
    for(i=1; i<=t; i++){
        scanf("%d %d", &a, &b);
        prime(a, b);
        printf("\n");
    }
    return 0;
}
