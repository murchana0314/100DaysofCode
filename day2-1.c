#include<stdio.h>

int main() {
    //To calculate the area and perimeter of a rectangle given its length and breadth.
    int l , b , perimeter , area;
    printf("enter length :");
    scanf("%d" ,&l);
    printf("enter breadth :");
    scanf("%d" ,&b);

    perimeter = 2*(l + b);
    printf("The perimeter is : %d\n" ,perimeter);
    area = l*b;
    printf("The area is : %d\n" ,area);

    return 0;


}