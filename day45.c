//Count frequency of a given character in a string.
#include<stdio.h>

int main()
{
   char string[100],chr;
   int count=0;
   printf("Enter a string: ");
   scanf("%s",string);

   printf("Enter the character you want to know the frequency of: ");
   scanf(" %c",&chr);
   for(int i=0; string[i] != '\0'; i++)
   {
      if(string[i]== chr){
        count++;
      }
   }
   printf("The frequency of the character %c is: %d",chr,count);

   return 0;
}