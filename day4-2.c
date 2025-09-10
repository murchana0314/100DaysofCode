#include<stdio.h>

int main() {
    //To find and display the sum of first n natural numbers.
    int n ,sum;
    printf("Enter a number :");
    scanf("%d" ,&n);
    
    sum = n*(n + 1)/2;
    printf("The sum of first n natural numbers is %d" ,sum);
    return 0;

}