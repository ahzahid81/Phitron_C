#include <stdio.h>

int main ()
{
    int n, b;
    int a = 1;
    scanf("%d", &n);
    for(int i=2; i<=n; i++)
    {
        a = a+2;
    }
    b =(a-1) / 2;
    int c=1;
    for(int i=1; i<=n; i++){
        for(int j = b; j>=1; j--)
        {
            printf(" ");
        }
        for(int j=1; j<=c; j++){
            if(i%2 == 0)
            {
                printf("*");
            }
            else{
                printf("^");
            }
        }
        printf("\n");
        b--;
        c = c+2;
    }
}
