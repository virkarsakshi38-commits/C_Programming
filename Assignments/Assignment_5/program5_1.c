
#include<stdio.h>
#include<stdlib.h>

void FindGreater(int iFirst, int iSecond, int iThird)
{
    if(iFirst > iSecond && iFirst > iThird)
    {
        printf("%d is greater\n", iFirst);
    }
    else if(iSecond > iFirst && iSecond > iThird)
    {
        printf("%d is greater\n", iSecond);
    }
    else if(iThird > iFirst && iThird > iSecond)
    {
        printf("%d is greater\n", iThird);
    }
    else
    {
        printf("Two or more numbers are equal\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    FindGreater(iValue1, iValue2, iValue3);

    return EXIT_SUCCESS;
}
