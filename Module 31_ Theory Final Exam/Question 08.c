#include <stdio.h>

struct phitron{
    int roll;
    char name[100];
    int marks;
};

int main ()
{
    struct phitron p1={10, "Zahid", 100};
    printf("%d %s %d", p1.roll, p1.name, p1.marks);
    return 0;
}
