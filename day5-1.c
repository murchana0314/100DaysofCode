#include<stdio.h>
#include<math.h>

int main() {
    //To calculate simple and compund interest for given principle,rate and time.
    float p ,r ,t ,n ,A ,si ,ci;
    printf("Enter principle :");
    scanf("%f" ,&p);
    printf("Enter rate :");
    scanf("%f" ,&r);
    printf("Enter time in years :");
    scanf("%f" ,&t);
    printf("Enter number of times interest is compounded per year :");
    scanf("%f" ,&n);

    si = (p*r*t)/100;
    printf("The simpple interest is %2f\n" ,si);
    
    A = p*pow(1+(r/(100*n)),n*t);
    printf("The total future amount is %2f\n" ,A);

    ci = A - p;
    printf("The compound interest is %2f\n" ,ci);
    return 0;

}