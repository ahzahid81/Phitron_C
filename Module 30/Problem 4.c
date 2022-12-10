#include <stdio.h>

struct Student{
    int roll;
    char name[50];
    double marks;
};

int main ()
{
    struct Student cls[5];
    int i;
    for(i=0; i<5; i++)
    {
        scanf("%d", &cls[i].roll);
        scanf("%s", &cls[i].name);
        scanf("%lf", &cls[i].marks);
    }

    for(i=0; i<5; i++)
    {
        if(cls[i].roll%2==0){
            printf("Information of student %d\n", i);
            printf("Roll => %d\n", cls[i].roll );
            printf("Name -> %s\n", cls[i].name);
            printf("Marks -> %lf\n", cls[i].marks);
        }
    }
    return 0;
}
