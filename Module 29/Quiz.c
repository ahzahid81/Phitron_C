//#include<stdio.h>
//
//struct st
//{
//    int x;
//    int ar[5];
//};
//
//int main()
//{
//    printf("%d", sizeof(struct st));
//    return 0;
//}

//#include<stdio.h>
//struct st
//{
//    char x;
//    int ar[6];
//    int a;
//    double b;
//};
//
//int main()
//{
//    printf("%d", sizeof(struct st));
//    return 0;
//}


# include <stdio.h>
# include <string.h>

struct Name
{
  char str[20];
};

int main()
{
  struct Name st1, st2;
  strcpy(st1.str,"ProgrammingHero");
  st2 = st1;
  st1.str[0] = 'p';

  printf("%s",st2.str);

  return 0;
}