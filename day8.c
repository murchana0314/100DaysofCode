//Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

/*#include<stdio.h>

int main()
{
 char chr;
 printf("Enter any character: ");
 scanf("%c" ,&chr);
 
 if(chr >= 'A' && chr <= 'Z')
 {
  printf("It is a uppercase character ");
 } else if(chr >= 'a' && chr <= 'z')
 {
   printf("It is a lowercase character ");
 } else if(chr >= '0' && chr <= '9')
 {
     printf("It is a digit");
 } else 
 {
    printf("It is a special character");
 }
 return 0;
}*/


//Write a program to input three numbers and find the largest among them using if–else.

/*#include<stdio.h>

int main()
{
 int num1 ,num2 ,num3;
 printf("Enter three numbers: ");
 scanf("%d %d %d" ,&num1 ,&num2 ,&num3);
  if(num1 > num2 && num1 > num3)
  {
    printf("%d is the largest number " ,num1);
  } else if(num2 > num1 && num2 > num3)
  {
    printf("%d is the largest number " ,num2);
  } else
  {
    printf("%d is the largest number" ,num3);
  }
  return 0;
}*/