#include <stdio.h>

void func(int* p)
{
    *p = 18;
}

int main ()
{
    int p = 5;
    printf("Before call Function %d\n", p);
    func(&p);
    printf("After calling Function %d\n", p);
    return 0;
}
