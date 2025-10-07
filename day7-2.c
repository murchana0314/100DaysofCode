#include<stdio.h>

int main()
{
    char chr;
    printf("Enter an alphabet : ");
    scanf("%c" ,&chr);
    if(chr >= 'a' && chr <= 'z')
    {
       if(chr == 'a' || chr == 'e' || chr == 'i' || chr == 'o' || chr == 'u')
       {
        printf("It is a vowel");
       } else {
        printf("It is a consonant");
       }
    } else
    {
        printf("Invalid input.\n Enter valid input");
    }
    return 0;
}