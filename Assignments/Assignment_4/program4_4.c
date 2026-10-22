#include<stdio.h>
#include<stdlib.h>

void CheckVotingEligibility(int iAge)
{
   if(iAge >= 18)
   {
     printf("you are Eligible for voting : ");
   }
   else
   {
     printf("You are Not eligible for voting : ");
   }
}

int main()
{
    int iAge = 0;

    printf("Enter your age : ");
    scanf("%d", &iAge);

    CheckVotingEligibility(iAge);
    
    return EXIT_SUCCESS;
}
