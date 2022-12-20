#include <stdio.h>
int main ()
{
    int n;
    int A[100], B[100];
    int temp;
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        scanf("%d", &A[i]);
    }

    for(int i=0; i<n; i++)
    {
        scanf("%d", &B[i]);
    }
    for(int i = 0; i<n; i++)
        for(int j = 0; j<n-1; j++)
    {
        if(A[j]>A[j+1])
        {
            temp = A[j];
            A[j] = A[j+1];
            A[j+1] = temp;
        }
    }

    for(int i = 0; i<n; i++)
        for(int j = 0; j<n-1; j++)
    {
        if(B[j]<B[j+1])
        {
            temp = B[j];
            B[j] = B[j+1];
            B[j+1] = temp;
        }
    }

    for(int i=0; i<n; i++)
    {
        printf("%d ", A[i] - B[i]);
    }
}
