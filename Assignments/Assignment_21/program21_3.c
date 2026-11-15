/*
Input : iRow = 5    iCol = 3

Output :

5  4  3  2  1
5  4  3  2  1
5  4  3  2  1
*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iCol; i++)
    {
        for(j = iRow; j >= 1; j--)
        {
            printf("%d  ", j);
        }

        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the number of rows and columns:\n");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return EXIT_SUCCESS;
}