#include <stdio.h>

struct phitron{
    int roll;
    char name[100];
    int marks;
};

int main ()
{
    struct phitron p1={10, "Zahid", 100};
    struct phitron* ptr = &p1;
    printf("%d %s %d", ptr->roll, ptr->name, ptr->marks);
    return 0;
}

