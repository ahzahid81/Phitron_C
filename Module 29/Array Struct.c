#include <stdio.h>

struct Zahid{
    int roll;
    int marks;
};

int main ()
{
    struct Zahid z[10];
    int i;

    for(i=0; i<10; i++)
    {
        z[i].roll = i+1;
        z[i].marks = 50+ i + i + i;
    }

    for(i=0; i<10; i++)
    {
        printf("Roll No %d: %d\t Total Marks %d\n", i+1, z[i].roll, z[i].marks);
    }
}
