//Toggle case of each character in a string.
#include<stdio.h>
#include<ctype.h>

int main()
{
    char string[100];
    printf("Enter a string: ");
    scanf("%s",string);

    for(int i=0; string[i] != '\0'; i++){
        if(isupper(string[i])){
            string[i] = tolower(string[i]);
        }else if(islower(string[i])){
            string[i] = toupper(string[i]);
        }
    }
    printf("The toggled case of the string is: %s",string);

    return 0;
}