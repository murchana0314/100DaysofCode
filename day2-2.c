#include<stdio.h>

int main() {
    //To calculate the area and circumference of a circle given its radius.
    float r , pi , circumference , area;
    printf("Enter radius :");
    scanf("%f" ,&r);
    
     pi = 3.14;
    circumference = 2*pi*r;
    printf("The circumference is : %f\n" ,circumference);
    area = pi*r*r;
    printf("The area is : %f\n" ,area);

    return 0;

}