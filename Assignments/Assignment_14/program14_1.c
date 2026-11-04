//write a program which accept number from user and display its multiplication of factors

// Input : 12
// Output : 144    (1 * 2 * 3 * 4 * 6 = 144)

// Input : 13
// Output :   (1 * 13 = 13)

// Input : 10
// Output : 10   (1 * 2 * 5 = 10)

#include<stdio.h>
#include<stdlib.h>

int MultiplyFactors(int iNo)
{
    int iCnt = 0;
    int iMult = 1;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iMult = iMult * iCnt;
        }
    }

    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = MultiplyFactors(iValue);

    printf("Multiplication of factors is : %d\n", iRet);

    return EXIT_SUCCESS;
}