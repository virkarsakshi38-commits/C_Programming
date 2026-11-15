/*
Input : 8

Output : 2 4 6 8 10 12 14 16
*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int i = 0;

    for(i = 1; i <= iNo; i++)
    {
        printf("%d  ", i * 2);
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