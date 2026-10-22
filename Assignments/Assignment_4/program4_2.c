#include<stdio.h>
#include<stdlib.h>

void CheckEvenOdd(int iValue)
{
   if((iValue % 2)== 0)
   {
     printf("It is Even number : ");
   }
   else
   {
     printf("It is Odd number : ");
   }
}
int main()
{
    int iValue = 0;

    printf("Enter a number:");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);

    return EXIT_SUCCESS;
}