#include<stdio.h>
#include<stdlib.h>

void DisplayGarde(float fMarks)
{
    if(fMarks < 0 || fMarks > 100)
    {
        printf("Invalid Marks \n");
    }
    else if(fMarks >= 90)
    {
        printf("Grade A \n");
    }
    else if(fMarks >= 75)
    {
        printf("Garde B \n");
    }
    else if(fMarks >=  60)
    {
        printf("Grade C\n");
    }
    else if(fMarks >= 40)
    {
        printf("Garde D");
    }

    else
    {
        printf("Fail \n");
    }
}
int main()
{
    float fMarks = 0.0f;

    printf("Enter Marks:");
    scanf("%f", &fMarks);
    DisplayGarde(fMarks);
    return 0;
}