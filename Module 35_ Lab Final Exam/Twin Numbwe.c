#include <stdio.h>

int main ()
{
    int a, b;

    scanf("%d %d", &a, &b);

    int twin;
    if(a%2==0 && b%2==0 && 0 < a && 0 < b && a<=200 && b<=500)
    {
        twin =(b-a)/2;
    }
    printf("%d\n", twin);
}
