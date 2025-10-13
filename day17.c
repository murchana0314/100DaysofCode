//Write a program to check if a number is an Armstrong number.

/*#include<stdio.h>

int main()
{
  int num ,original ,dig ,armstrg = 0;
  printf("Enter a number: ");
  scanf("%d",&num);
  original = num;
  while(num > 0)
  {
   dig = num%10;
   armstrg = 
   num = num/10;
  }  
}*/




//Write a program to check if a number is prime.

/*#include<stdio.h>
#include<math.h>

int main()
{
 int num;
 printf("Enter a number: ");
 scanf("%d",&num);

if(num <= 1) 
{
    printf("The number is not a prime number\n");
} else if(num == 0)
{
    printf("It is neither prime nor composite\n"); 
} else{
    int prime = 1;//Assume the number is prime 
    for(int i = 2; i <= sqrt(num); i++){
        if(num % i == 0)
        {
           prime = 0; // The number is not prime
           break;
        } 
    } if(prime)
    {
        printf("The number is a prime number\n");
    } else
    {
        printf("The number is not a prime number\n");
    }
}
 
return 0;
}*/