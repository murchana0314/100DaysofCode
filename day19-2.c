//Write a program to find the sum of digits of a number.

#include<stdio.h>

int main()
{
    int num,sum = 0;
    printf("Enter a number: ");
    scanf("%d",&num);

    while(num != 0)
    {
        sum = num % 10 + sum;
        num = num/10;
    }
    printf("The sum of digits of the number is %d",sum);
    return 0;
}