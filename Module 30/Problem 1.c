#include <stdio.h>

struct point{
    int x;
    int y;

};

int manhattan (struct point p1, struct point p2)
{
    int res = abs(p1.x - p2.x) + abs(p1.y - p2.y);
    return res;
}

int main ()
{
    struct point p1 = {1,1};
    struct point p2 = {4,5};

    int ans = manhattan(p1,p2);

    printf("Manhattan Distance is %d\n", ans);
    return 0;

}
