#include <stdio.h>
struct comp{
    double real;
    double img;
};

void printcomp(struct comp c)
{
    printf("%.lf + %.lfi", c.real, c.img);
}

struct comp add_comp(struct comp c, struct comp d)
{
    struct comp t;
    t.real = c.real + d.real;
    t.img = t.real + d.real;
    printcomp(t);
};

int main ()
{
    struct comp c1 = {5,3};
    struct comp c2 = {5,3};
    add_comp(c1, c2);
    return 0;
}
