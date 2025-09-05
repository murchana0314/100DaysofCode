#include<stdio.h>

int main() {
    //To swap two numbers using a third variable
int a , b , c;
printf("Enter the two numbers :");
scanf("%d %d" , &a , &b);
c = a;
a = b;
b = c;
printf("numbers after the swap : a=%d b=%d\n", a, b);
return 0;
}