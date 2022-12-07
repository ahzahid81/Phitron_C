#include <stdio.h>

int main ()
{
    int a = 7;
    double b = 9.5;
    char c ='a';

    b = a;
    a = c;
    c = 105;

    b = (double)25/4;

    printf("%d %lf %c", a, b, c);

    return 0;
}
