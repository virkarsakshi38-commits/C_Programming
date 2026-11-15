/*
Accept the number of rows and number of columns from user
and display the below pattern.

Input : iRow : 6    iCol : 6

Output :

*   *   *   *   *   *
*   #   #   #   *   *
*   #   #   *   $   *
*   #   *   $   $   *
*   *   $   $   $   *
*   *   *   *   *   *
*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i == 1 || j == 1 || i == iRow || j == iCol || i == j)
            {
                printf("%-4c", '*');
            }
            else if(i + j == iCol + 1)
            {
                printf("%-4c", '$');
            }
            else
            {
                printf("%-4c", '#');
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