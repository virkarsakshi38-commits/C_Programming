/*
Accept the number of rows and number of columns from user and display the below pattern 
1 2 3 4 
5 6 7 8
9 1 2 3
4 5 6 7

*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
int iNo = 1;

    for(i = 1; i <= iRow; i++)
    {

    for(j = 1; j <= iCol; j++)
    {
        printf("%d\t", iNo);

        iNo++;
        
        if(iNo > 9)
        {
            iNo = 1;
        }
    }

    printf("\n");
}
}
int main()
{
    int ivalue1 = 0, iValue2 = 0;

    printf("Enter the number rows and columns \n");
    scanf("%d%d",&ivalue1, &iValue2);

    Pattern(ivalue1, iValue2);
}