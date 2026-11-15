/*
Input : iRow = 5    iCol = 3

Output :

*  #  *  #
*  #  *  #
*  #  *  #
*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iCol; i++)
    {
        for(j = 1; j < iRow; j++)
        {
            if(j % 2 != 0)
            {
                printf("*  ");
            }
            else
            {
                printf("#  ");
            }
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