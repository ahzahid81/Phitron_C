#include <stdio.h>
#include <conio.h>
#include <string.h>

void sortString(char* inputString, char* outputArray);
int main ()
{
    char inputString[100], outputArray[100];
    gets(inputString);
    sortString(inputString, outputArray);
    printf("%s\n", outputArray);
    return 0;
}

void sortString(char* inputString, char* outputArray)
{
    int counterArray[256] = {0}, length, i, index;
    length = strlen(inputString);

    for(i=0; i<length; i++)
    {
        counterArray[inputString[i]]++;
    }
    for(i=0, index=0; i<256; i++){
        if(counterArray[i]!=0){
            while(counterArray[i]>0){
                outputArray[index++] = i;
                counterArray[i]--;
            }
        }
    }
    outputArray[index] = '\0';
}
