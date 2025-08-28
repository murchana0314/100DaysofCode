#include<stdio.h>

int main() {
    //To input two numbers and display their sum, difference, product, and quotient
    int num1 , num2 , sum , difference , product , quotient;
    printf("enter num1 :");
    scanf("%d" ,&num1);
    printf("enter num2 :");
    scanf("%d" ,&num2);
    
    sum = num1 + num2;
    printf("The sum is : %d\n" ,sum);
    difference = num1 - num2;
    printf("The difference is : %d\n" ,difference);
    product = num1*num2;
    printf("The product is : %d\n" ,product);
    quotient = num1/num2;
    printf("The quotient is : %d\n" ,quotient);
    return 0;


}