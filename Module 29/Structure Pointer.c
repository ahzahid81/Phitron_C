#include <stdio.h>

struct Student{
    double weight;
    int roll;
};

int main ()
{
    struct Student s = {.roll = 12, .weight = 85.2};
    struct Student s2 = {.roll = 12, .weight = 85.2};
    struct Student* sp;

    sp = &s;

    printf("%0.2lf\t %d", sp->weight, sp->roll);
}
