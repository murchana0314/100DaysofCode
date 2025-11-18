//Check if a string is a palindrome.
#include<stdio.h>
#include<string.h>

int main()
{
    char str[100],before[100];
    printf("Enter the string: ");
    scanf("%s",str);
    
    strcpy(before,str);

    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        char word = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = word;
    }
    if (strcmp(str, before) == 0) {
        printf("The string is a palindrome\n");
    } else {
        printf("The string is not a palindrome\n");
    }
 
    return 0;
}   