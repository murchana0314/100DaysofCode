//Write a program to calculate the factorial of a number.

/*#include<stdio.h>

int main()
{
    int n ,factorial = 1 ,count = 1;
    printf("Enter the number of natural numbers you want to find the factorial of: ");
    scanf("%d",&n);

    for(int i = 1; count <= n; i = i + 1)
    {
    factorial = factorial*i;
    count++;
    }
    printf("The product of %d natural numbers is %d",n ,factorial);

    return 0;
}*/


//Write a program to reverse a given number.

/*#include<stdio.h>

int main()
{
 int num ,reversed = 0;;
 printf("Enter a number: ");
 scanf("%d",&num);

 while(num > 0)
 {
 int digit = num%10;
 reversed = reversed*10 + digit;
 num = num/10;   
 }
 printf("The reversed number is %d" ,reversed);
 return 0;
}*/