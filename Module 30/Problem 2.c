#include <stdio.h>

struct Point{
    int x;
    int y;
};

struct Point mid(struct Point m, struct Point n)
{
    struct Point ans;
    ans.x =(m.x + n.x)/2;
    ans.y = (m.y + n.y)/2;
    return ans;
};

int main ()
{
    struct Point p1 = {1,1};
    struct Point p2 = {4,5};

    struct Point p3;
    p3 = mid(p1,p2);


    printf("%d %d",p3.x, p3.y);
}
