//Write a program to find the roots of a quadratic equation and categorize them.

/*#include<stdio.h>
#include<math.h>

int main()
{
 int a ,b ,c;
 printf("Enter the coefficient of x^2: ");
 scanf("%d" ,&a);
 printf("Enter the coefficient of x: ");
 scanf("%d" ,&b);
 printf("Enter the constant term: ");
 scanf("%d" ,&c);
 int d = b*b - 4*a*c;
 if(d > 0)
 {
    printf("Roots are real and distinct\n");
 } else if(d == 0)
 {
    printf("Roots are real and equal\n");
 } else
 {
    printf("Roots are imaginary\n");
 }
 float R1 = (-b + sqrt(b*b - 4*a*c))/(2*a);
 float R2 = (-b - sqrt(b*b - 4*a*c))/(2*a);
 printf("The sqaure roots of the equation are %f and %f" ,R1 ,R2);

return 0;
}*/



//Write a program that accepts a percentage (0-100) and assigns a grade 

/*#include<stdio.h>

int main()
{
    int prt;
    printf("Please assign the student's grade: ");
    scanf("%d" ,&prt);
    if(prt >= 90 && prt <= 100)
    {
        printf("Grade A");
    } else if(prt >= 80 && prt <= 89)
    {
       printf("Grade B");  
    } else if(prt >= 70 && prt <= 79)
    {
        printf("Grade C");  
    } else if(prt >= 60 && prt <= 69)
    {
         printf("Grade D");  
    } else
    {
        printf("Grade F");
    }
    return 0;
}*/