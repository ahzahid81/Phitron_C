// not declared the value of large and small variable; Pass there address via function using pointer;
#include <stdio.h>

void func(int a, int b, int* x, int* y){
    if(a>b){
        *x = a;
        *y = b;
    }
    else{
        *x = b;
        *y = a;
    }
}

int main ()
{
    int a, b, large, small;

    a = 10;
    b = 20;

    func(a, b, &large, &small);

    printf("%d %d\n", large, small);

    return 0;
}
