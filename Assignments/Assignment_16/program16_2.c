// Accept number of rows and number of columns from user and display below pattern. 
/*
Input : iRow = 4, iCol :4 

A B C D 
a b c d 
A B C D
a b c d

*/

#include <stdio.h>
#include <stdlib.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch = '\0';

    for(i = 1; i <= iRow; i++)
    {
        if(i % 2 != 0)
        {
            ch = 'A';
        }
        else
        {
            ch = 'a';
        }

        for(j = 1; j <= iCol; j++, ch++)
        {
            printf("%c\t", ch);
        }

        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the number of rows:\n");
    scanf("%d", &iValue1);

    printf("Enter the number of columns:\n");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);

    return EXIT_SUCCESS;
}
