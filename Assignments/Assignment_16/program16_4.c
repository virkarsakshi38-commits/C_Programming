/*
Accept the number of rows and number of columns from user and display the below pattern 

4 4 4 4 4
3 3 3 3 3
2 2 2 2 2
1 1 1 1 1
*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int iNo = iRow;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t", iNo);
        }

        printf("\n");
        iNo--;
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the number of rows and columns:\n");
    scanf("%d%d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}