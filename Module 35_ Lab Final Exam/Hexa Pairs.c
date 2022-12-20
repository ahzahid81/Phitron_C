#include <stdio.h>

int gcd(int a, int b)
{
    int value;
    if(a>b){
        for(int i=1; i<=b; i++){
            if(b%i == 0 && a%i==0){
              value = i;
            }
        }
    }
    else{
        for(int i=1; i<=a; i++){
            if(a%i == 0 && b%i==0){
              value = i;
            }
        }
    }

    return value;
}

int main ()
{
    int t, n;
    int A[1000];
    scanf("%d", &t);
    for(int i=1; i<=t; i++)
    {
        scanf("%d", &n);
        for(int j=1; j<=n; j++)
        {
            scanf("%d", &A[j]);
        }

        int hexa = 0;

        for(int i=1; i<=n; i++)
        {
            for(int j = 1; j<=n; j++)
            {
                if(i!=j){
                    if(gcd(A[i],A[j]) == 1){
                        hexa++;
                    }
                }
            }
        }

        printf("%d\n", hexa);
    }
    return 0;
}
