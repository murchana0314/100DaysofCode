//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
/*#include<stdio.h>

int main() {
    //To check if triangle is valid
    int a , b, c;
    printf("enter first side:");
    scanf("%d" ,&a);
    printf("enter second side:");
    scanf("%d" ,&b);
    printf("enter third side:");
    scanf("%d" ,&c);
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);
    if(a + b > c && b + c > a && c + a > b) {
        printf("triangle is valid");
    } else {
        printf("triangle is invalid");
    }
     if(a==b && b==c){
        printf("It's an equilateral triangle\n");
     } else if (a == b || b == c || c == a){
        printf("It's an isosceles triangle\n");
     } else {
        printf("It's an scalene triangle\n");
     }
     if(a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a){
        printf("It's a right angle triangle\n");
     }

    return 0;
}*/


//Write a program to display the day of the week based on a number (1–7) using switch-case.

/*#include<stdio.h>

int main()
{
 int day;
 printf("Enter a day of the week: ");
 scanf("%d" ,&day);
 switch(day)
 {
    case 1:
    printf("Monday");
    break;
    case 2:
    printf("Tuesday");
    break;
    case 3:
    printf("Wednesday");
    break;
    case 4:
    printf("Thursday");
    break;
   case 5:
    printf("Friday");
    break; 
   case 6:
    printf("Saturday");
    break; 
    case 7:
    printf("Sunday");
    break;
    default:
    printf("It does not exit");        
 }

 return 0;
}*/