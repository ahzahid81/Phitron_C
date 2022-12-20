#include <stdio.h>

int main ()
{
    int t, n, k;
    int A[1000];
    scanf("%d", &t);

    for(int i=1; i<=t; i++)
    {
        int p = 0;
        scanf("%d", &n);
        for(int j=1; j<=n; j++)
        {
            scanf("%d", &A[j]);
        }
        scanf("%d", &k);
        for(int l=1; l<=n; l++)
        {
            if(A[l] == k)
            {
                p = l;
                break;
            }
        }
        if(p>0){
                printf("Case %d: %d\n", i, p);
        }
        else{
            printf("Case %d: Not Found\n", i );
        }
    }
}
