#include <stdio.h>
#include <string.h>

int main ()
{
    char A[100];
    scanf("%s", A);
    int i, j;
    int a = strlen(A);
    int temp;

    for(i=0; i<a; i++){
        for(j=0; j<a-1; j++){
            if(A[j]>=A[j+1]){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
    printf("%s", A);
    return 0;
}
