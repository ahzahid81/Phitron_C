#include <stdio.h>

int solve (int i, int n)
{
    if(i>n) return;
    int s = solve(i+1, n);
    return s + i;
}
int main ()
{
    int n;
    scanf("%d", &n);
    int s;
    s = solve(1,n);
    printf("%d\n", s);
    return 0;
}