//Reverse an array without taking extra space.
#include<stdio.h>

int main()
{
 int n,i;
    printf("How many elements you want in the array: ");
    scanf("%d",&n);
    int num[n];
    printf("Enter the elements:\n");
    for(i=0; i<n; i++)
    {
        printf("Element %d: ", i);
        scanf("%d", &num[i]);
    }
    
    for(i=(n-1);i>=0; i--)
    {
      printf("Element %d: %d ", i,num[i]);
    }

    return 0;
}