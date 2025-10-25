//Find the sum of array elements.
#include<stdio.h>

int main()
{
    int n;
    printf("How many elements you want in the array: ");
    scanf("%d",&n);

    int num[n],sum=0;
    printf("Enter the elements:\n");
    for(int i=0; i<n; i++)
    {
        printf("Element %d: ", i);
        scanf("%d", &num[i]);
        sum = sum + num[i];
    }
    printf("Sum of the array elements is: %d",sum);
    return 0;
}