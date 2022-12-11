#include <stdio.h>

void pass_by_value(int a){
    a = 18;
}

void pass_by_reference(int* a)
{
    *a = 18;
}

int main ()
{
    int a = 100;
    pass_by_value(a);
    printf("Pass by Value\n");
    printf("%d\n", a);

    pass_by_reference(&a);
    printf("Pass by Refrence\n");
    printf("%d\n", a);

    return 0;
}
