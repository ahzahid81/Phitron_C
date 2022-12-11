#include <stdio.h>

int main ()
{
    int num1 = 0, num2 =1, sum, i, n;
    scanf("%d", &n);
    printf("%d, %d, ", num1, num2);

    for(i=1; i<n-2; i++){
        sum = num1 + num2;
        printf("%d, ", sum);
        num1 = num2;
        num2 = sum;
    }
    sum = num1 + num2;
    printf("%d", sum);
}
