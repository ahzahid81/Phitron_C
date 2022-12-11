#include <stdio.h>

struct Student{
    char name[50];
    int roll_number;
    int marks;
};

int main ()
{
    struct Student s1;
    printf("Enter Information:\n");
    printf("Enter name:");
    scanf("%s", s1.name);
    printf("Enter roll number:");
    scanf("%d", &s1.roll_number);
    printf("Enter Marks:");
    scanf("%d", &s1.marks);

    printf("Displaying Information:\nName: %s\nRoll number: %d\nMarks: %d", s1.name, s1.roll_number, s1.marks);
    return 0;

}
