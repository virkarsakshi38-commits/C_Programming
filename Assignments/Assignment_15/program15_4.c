//write a program which accept numbers and print its multiplication 

//Input : 5   4   7
//output : 140

//Input : 5   0   7
//Output : 35

//Input : 0  0  0
//Output : 0

#include<stdio.h>
#include<stdlib.h>

int Multiply(int iNo1, int iNo2, int iNo3)
{
    return (iNo1 * iNo2 * iNo3);
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;

    printf("Enter first number : ");
    scanf("%d", &iValue1);

    printf("Enter second number : ");
    scanf("%d", &iValue2);

    printf("Enter third number : ");
    scanf("%d", &iValue3);

    printf("Multiplication is : %d\n", Multiply(iValue1, iValue2, iValue3));

    return EXIT_SUCCESS;
}