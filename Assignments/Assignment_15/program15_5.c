//write a program which accept total marks & obtained marks from user and calculate percentage 

//Input : 1000    745
//Output : 74.5%

#include<stdio.h>
#include<stdlib.h>

float Percentage( int iTotalMarks, int iObtainedMarks)
{
    float fPercentage = 0.0;

    fPercentage = (float)iObtainedMarks / (float)iTotalMarks * 100.0;

    return fPercentage;
}

int main()
{
    int iTotalMarks = 0, iObtainedMarks = 0;
    float fResult = 0.0;

    printf("Enter total marks : ");
    scanf("%d", &iTotalMarks);

    printf("Enter obtained marks : ");
    scanf("%d", &iObtainedMarks);

    fResult = Percentage(iTotalMarks, iObtainedMarks);

    printf("Percentage is : %.1f%%\n", fResult);

    return EXIT_SUCCESS;
}