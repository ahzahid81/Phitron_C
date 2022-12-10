#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    int age;
};

int main ()
{
    struct Student s1 = {12, "Zahid", 21};
    printf("Roll: %d\tName:%s\tAge:%d", s1.roll, s1.name, s1.age);
}
