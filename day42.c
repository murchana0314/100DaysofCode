//Count vowels and consonants in a string.
#include<stdio.h>

int main()
{
    char str[100];
    int count_vowels=0,count_consonants=0;

    printf("Enter the string: ");
    scanf("%s",str);

    for(int i=0; str[i] !='\0'; i++){
    if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'  ){
        count_vowels++;
        }else if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z'){
         count_consonants++;   
        }
    }
    printf("The count of vowels in the string is: %d\n",count_vowels);
    printf("The count of consonants in the string is: %d",count_consonants);

    return 0;
}