#include<stdio.h>

int main() {
    //To convert temperature from Celsius to Fahrenheit
    float c , fahrenheit;
    printf("Enter temperature in celsius :");
    scanf("%f" ,&c);

    fahrenheit = (c*(9.0/5.0)) + 32.0;// To get the correct value we should wrie the formula in this way
    printf("The temperature in fahrenheit is : %f\n" ,fahrenheit);

    return 0;

}