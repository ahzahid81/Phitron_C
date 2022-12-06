#include <stdio.h>
void func(int a, int b, int *x, int *y){
    *x = a>b?a:b;
    *y = a<b?a:b;
}

int main ()
{
    int a = 100;
    int b = 500;

    int large;
    int small;

    func(a, b, &large, &small);
    printf("%d %d", large, small);
}
