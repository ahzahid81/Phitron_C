#include <stdio.h>
#include <stdbool.h>
int isWin(int a[][4], int n)
{
    for(int i=1; i<=n; i++)
    {
        if(a[i][1]==a[i][2] && a[i][2] == a[i][3] && a[i][1]!=-1)
        {
            return a[i][1];
        }
    }
    for(int j = 1; j<=n; j++)
    {
        if(a[1][j]==a[2][j] && a[2][j] == a[3][j] && a[1][j] != -1)
        {
            return a[1][j];
        }
    }
    if(a[1][1] == a[2][2] && a[2][2] == a[3][3] && a[1][1]!=-1) return a[1][1];
    if(a[3][1] == a[2][2] && a[2][2] == a[1][3] && a[3][1]!=-1) return a[3][1];
    return -1;
}
void printCell(int a[][4], int n)
{
   for(int i=1; i<=n; i++)
    {
        printf("\n");
        for(int j=1; j<=n; j++)
        {
            if(a[i][j] == -1) printf(" ");
            else if(a[i][j] == 1) printf("X");
            else if(a[i][j] == 2) printf("O");
            if(j<n) printf("\t | \t");
        }
        if(i<n) printf("\n__________________________________\n");
    }
}


int main ()
{
    int n = 3;
    int a[4][4];
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            a[i][j] = -1;
        }
    }
    int r, c;
    bool player1 = true;
    bool player2 = false;
    while(true)
    {
        printCell(a, n);
        if(player1 == true)
        {
            Flag:
            printf("\n\nPlayer 1 Turn (X), Enter Row and Column:");
            scanf("%d %d", &r, &c);
            if(a[r][c] != -1)
            {
                printf("Invalid Cell\n");
                goto Flag;
            }
            a[r][c] = 1;
            player1 = false;
            player2 = true;
        }
        else
        {
            Flag2:
            printf("\n\nPlayer 2 Turn (O), Enter Row and Column:");
            scanf("%d %d", &r, &c);
            if(a[r][c] != -1)
            {
                printf("Invalid Cell\n");
                goto Flag2;
            }
            a[r][c] = 2;
            player1 = true;
            player2 = false;
        }

        if(isWin(a,n)==1)
        {
            printCell(a, n);
            printf("\nPlayer 1 Won!\n");
            break;
        }
        else if(isWin(a,n) == 2)
        {
            printCell(a,n);
            printf("\nPlayer 2 Won!\n");
            break;
        }
    }
    return 0;
}
