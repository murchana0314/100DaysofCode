//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*#include<stdio.h>

int main()
{
  int num1 ,num2 ,add ,sub ,product ,mod;
  float divide;
  printf("Enter any two numbers: ");
  scanf("%d %d",&num1 ,&num2);

  char operator;
  printf("Choose the opeartor +, -, *, /, %: ");
  scanf(" %c",&operator);

  switch(operator)
  {
    case '+':
    add = num1 + num2;
    printf("The result is %d" ,add);
    break;
    case '-':
    sub = num1 - num2;
    printf("The result is %d" ,sub);
    break;
    case '*':
    product = num1*num2;
    printf("The result is %d" ,product);
    break;
    case '/':
    divide = (float)num1/num2;
    printf("The result is %f" ,divide);
    break;
    case '%':
    mod = num1%num2;
    printf("The result is %d" ,mod);
    break; 
    default:
    printf("Invalid input.\n Give valid input");
  }

  return 0;
}*/


//Write a program to print numbers from 1 to n.

/*#include<stdio.h>

int main()
{
    int n;
    printf("Enter until which number you want to print: ");
    scanf("%d" ,&n);

    for(int i = 1; i <= n; i++)
    {
     printf("%d\n" ,i);
    }

    return 0;
}*/