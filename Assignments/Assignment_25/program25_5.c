/*
Accept division of student from user and depends on the division display exam timing. there 
are 4 divisions in schools as A B C D. exam of divisions A at & AM, C at 9.20 AM AM
and D at 10.30 AM .
(Application should be case insensitive)


Input : C
Output: Your exam at 9.20 AM

Input : d
Output: Your exam at 10.30 AM
*/


#include<stdio.h>
#include<stdlib.h>

void DisplaySchedule(char chDiv)
{
    if(chDiv >= 'a' && chDiv <= 'z')
    {
        chDiv = chDiv - 32;
    }

    if(chDiv == 'A')
    {
        printf("Your exam at 8 AM");
    }
    else if(chDiv == 'B')
    {
        printf("Your exam at 9 AM");
    }
    else if(chDiv == 'C')
    {
        printf("Your exam at 9.20 AM");
    }
    else if(chDiv == 'D')
    {
        printf("Your exam at 10.30 AM");
    }
    else
    {
        printf("Invalid division");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter your division : ");
    scanf(" %c", &cValue);

    DisplaySchedule(cValue);

    return EXIT_SUCCESS;
}

