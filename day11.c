//Write a program to display the month name and number of days using switch-case for a given month number.

/*#include<stdio.h>

int main()
{
 int month;
 printf("Enter the month: ");
 scanf("%d" ,&month);

 switch(month)
 {
    case 1:
    printf("January ,31 days");
    break;
    case 2:
    printf("February ,28 days");
    break;
    case 3:
    printf("March ,31 days");
    break;
    case 4:
    printf("April ,30 days");
    break;
    case 5:
    printf("May ,31 days");
    break;
    case 6:
    printf("June ,30 days");
    break;
    case 7:
    printf("July ,31 days");
    break;
    case 8:
    printf("August ,30 days");
    break;
    case 9:
    printf("September ,30 days");
    break;
    case 10:
    printf("October ,31 days");
    break;
    case 11:
    printf("November ,30 days");
    break;
    case 12:
    printf("December ,31 days");
    break;
    default:
    printf("It does not exist");
 }

 return 0;
}*/


//Write a program to find profit or loss percentage given cost price and selling price.

/*#include<stdio.h>

int main()
{
    int cp ,sp;
    printf("Enter the product's cost price: ");
    scanf("%d" ,&cp);
    printf("Enter the product's selling price: ");
    scanf("%d" ,&sp);
    
   int prf = sp - cp;
   int lss = cp - sp;
   float pp = ((float)prf/cp)*100;
   float lp = ((float)lss/cp)*100;

   if(sp > cp)
   {
    printf("The profit percentage is %f" ,pp);
   } else
   {
    printf("The loss percentage is %f" ,lp);
   }

   return 0;
}*/