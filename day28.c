//Write a program to print all the prime numbers from 1 to n.
/*#include<stdio.h>

int main()
{
    int n,count;
    printf("Enter upto which number you want: ");
    scanf("%d",&n);
    
    for (int num = 2; num <= n; num++) 
    { 
        count = 0;
        for (int i = 2; i <= num / 2; i++) 
        { 
            if (num % i == 0) 
            { 
                count++;
    }
}
 if (count == 0) 
 {
     printf("%d ", num);
    }
        
  }
return 0;
}*/


//Read and print elements of a one-dimensional array.
/*#include<stdio.h>

int main()
{
    int n;
    printf("How many elements you want in the array: ");
    scanf("%d",&n);

    int num[n];
    printf("Enter the elements:\n");
    for(int i=0; i<n; i++)
    {
        printf("Element %d: ", i);
        scanf("%d", &num[i]);
    }
    printf("The elements of the array are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", num[i]);
    }
    return 0;
}*/