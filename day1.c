#include<stdio.h>

int main() {
    //To input two numbers and display their sum
    int num1 , num2 , sum;
    printf("enter num1 :");
    scanf("%d" ,&num1);
    printf("enter num2 :");
    scanf("%d" ,&num2);
    sum = num1 + num2;
    printf("the sum is : %d\n" ,sum);
    return 0;

}