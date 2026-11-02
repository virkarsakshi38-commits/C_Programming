// Accept an amount in US dollars and return its corresponding value in Indian currency. Consider 1 dollar = 70 rupees.

// Input: 10
// Output:700

// Input: 3
// Output:270

// Input: 1200
// Output:84000

#include<stdio.h>
#include<stdlib.h>

int DollarToINR(int iNo)
{
    int iAns = 0;
    iAns = iNo * 70;
    return iAns;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter amount in USD: ");
    scanf("%d", &iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR: %d\n", iRet);

    return EXIT_SUCCESS;
}
