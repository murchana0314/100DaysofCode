//Write a program to find the product of odd digits of a number.

#include<stdio.h>

int main()
{
    int num,prod = 1;
    printf("Enter a number: ");
    scanf("%d",&num);

    while(num != 0)
    {
        prod = num % 10*prod;
        num = num/10;
    }
    printf("The product of digits of the number is %d",prod);
    return 0;
}