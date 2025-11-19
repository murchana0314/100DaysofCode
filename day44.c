//Count spaces, digits, and special characters in a string.
#include<stdio.h>
#include <ctype.h> 

int main()
{
    char string[100];
    int count_spaces=0,count_digits=0,count_spCharacters=0;

    printf("Enter a string: ");
    fgets(string, sizeof(string), stdin);

    for(int i=0; string[i] != '\0'; i++){
        if(string[i]==' '){
            count_spaces++;
        }else if(string[i]>='0' && string[i] <= '9'){
            count_digits++;
        }else if(!isalpha(string[i])){
            count_spCharacters++;
        }
    }
    printf("No. of spaces in the string: %d\n",count_spaces);
    printf("No. of digits in the string: %d\n",count_digits);
    printf("No. of special characters in the string: %d",count_spCharacters);

    return 0;
}