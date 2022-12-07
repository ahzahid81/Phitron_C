//#include <stdio.h>
//int main()
//{
//    int a = 10;
//    int *p=&a;
//    int **q=&p;
//    **q=22;
//    printf("%d", a);
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//  double a = 2.5;
//  int b;
//  b = (int) a + 5;
//  printf("%d", b);
//  return 0;
//}
#include <stdio.h>
#include <stdlib.h>
int main()
{

  int* ptr;
  ptr = (int*) malloc(1*sizeof(int));
  printf("%d",*ptr);
  return 0;
}
