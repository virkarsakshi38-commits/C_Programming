
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckVowel(char *str)
{
    while(*str != '\0')
    {
        if(*str == 'a' || *str == 'e' || *str == 'i' ||
           *str == 'o' || *str == 'u' ||
           *str == 'A' || *str == 'E' || *str == 'I' ||
           *str == 'O' || *str == 'U')
        {
            return true;
        }

        str++;
    }

    return false;
}

int main()
{
    char arr[20];
    bool bRet = false;

    printf("Enter string:\n");
    scanf("%19s", arr);

    bRet = CheckVowel(arr);

    if(bRet == true)
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");
    }

    return EXIT_SUCCESS;
}
