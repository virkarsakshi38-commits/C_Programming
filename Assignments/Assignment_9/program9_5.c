//Write a program which returns difference between Even factorial and odd factorial of given number

// Input : 5
// Ouput :-7 

// Input : -5
// Ouput :-7 

// Input : 10
// Ouput :-2895

#include<stdio.h>
#include<stdlib.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iEvenFact = 1;
    int iOddFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        if(iCnt % 2 == 0)
        {
            iEvenFact = iEvenFact * iCnt;
        }
        else
        {
            iOddFact = iOddFact * iCnt;
        }
    }

    return (iEvenFact - iOddFact);
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Difference between even and odd factorial of number %d is %d",iValue,iRet);

    return EXIT_SUCCESS;
}