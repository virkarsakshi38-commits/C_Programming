//write a program which accept two numbers and check whether numbers are equal or not 

// Input : 10 10
// Ouput : Equal

// Input : 10 12
// Ouput :  not Equal

// Input : 10 -10
// Ouput :  not Equal

#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0


BOOL ChkEqual(int iNo1, int iNo2)
{
    if(iNo1 == iNo2)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{

    int iValue1 = 0, iValue2 = 0;

    printf("Enter first number : ");
    scanf("%d", &iValue1);

    printf("Enter second number : ");
    scanf("%d", &iValue2);

    if(iValue1 == iValue2)
    {
        printf("Equal\n");
    }
    else
    {
        printf("Not Equal\n");
    }

    return EXIT_SUCCESS;
}