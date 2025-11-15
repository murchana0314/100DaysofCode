//Count characters in a string without using built-in length functions.
#include<stdio.h>

int main()
{
    char str[60];
    int count=0;

    printf("Enter the characters of your string: ");
    scanf("%s",&str);
    
    while(str[count]!='\0'){
        count=count+1;
    }
    printf("The number of chracters in the string is: %d",count);

    return 0;
}