#include <stdio.h>

int greatNum()
{
    int a, b, c;
    scanf("%d %d", &a, &b);
    c = a>b?a:b;
    return c;
}

int main ()
{
    int result = greatNum();
    printf("%d",result);
}
