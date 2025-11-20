//Replace spaces with hyphens in a string.
#include<stdio.h>

int main()
{
    char strg[100];

    printf("Enter a string with spaces: ");
    fgets(strg, sizeof(strg), stdin);

    for(int i=0; strg[i] != '\0'; i++){
        if(strg[i]==' '){
            printf("-");
        }else{
            printf("%c",strg[i]);
        }
    }

    return 0;
}