#include<stdio.h>
#include<string.h>

int main()
{
    char str1[20];
    char str2[20];

    printf("Enter any string: ");
    scanf("%s",&str1);

    strcpy(str2,str1);
    strrev(str2);

    if(strcmp(str1,str2) == 0)
    {
        printf("The given string is a Palindrome.");
    }
    else
    {
        printf("The given string is not a Palindrome.");
    }

    return 0;
}