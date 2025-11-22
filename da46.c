//Remove all vowels from a string.
#include <stdio.h>
#include <ctype.h> 

int main() {
    char string[100];
    int i, j;

    printf("Enter a string: ");
    scanf("%s",string); 

    for (i = 0, j = 0; string[i] != '\0'; i++) {
        char ch = tolower(string[i]); 
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
            string[j++] = string[i];  
        }
    }
    string[j] = '\0';  

    printf("String after removing vowels: %s\n", string);

    return 0;
}