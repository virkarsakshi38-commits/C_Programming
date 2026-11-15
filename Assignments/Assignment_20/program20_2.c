/*Accept the number of rows and number of columns from user and display the below pattern 

Input : - iRow :- 4    iCol : 4

Output :-

*  *  *  #
*  *  #  @ 
*  #  @  @
#  @  @  @

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
            if(i + j == iCol + 1)
            {
                printf("#  ");
            }
            else if(i + j < iCol + 1)
            {
                printf("*  ");
            }
            else
            {
                printf("@  ");
            }
        }
        printf("\n");
    }
}

int main()
{
int iValue1 = 0 , iValue2 = 0;

printf("Enter the number of rows & columns \n");
scanf("%d %d",&iValue1,&iValue2);

Pattern(iValue1,iValue2);


    return EXIT_SUCCESS;
}