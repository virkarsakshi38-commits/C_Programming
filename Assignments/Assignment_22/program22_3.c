/*
Input : 5

Output : 1 * 2 * 3 * 4 * 5 *
*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int i = 0;

    for(i = 1; i <= iNo; i++)
    {
        printf("%d  *  ", i);
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter the number:\n");
    scanf("%d", &iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}