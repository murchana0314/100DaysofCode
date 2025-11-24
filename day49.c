//Print the initials of a name.
#include<stdio.h>

int main()
{
    char string[100];
    printf("Please enter your full name: ");
    fgets(string,sizeof(string), stdin);

    if(string[0] != '\0')
    {
        printf("initials are: %c.",string[0]);
    }

    for(int i=0;string[i] != '\0'; i++){
        if(string[i]==' ' && string[i+1] != '\0')
        {
            printf("%c",string[i+1]);
        }
    }

    return 0;
}