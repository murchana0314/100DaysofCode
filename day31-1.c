//Search for an element in an array using linear search.
#include<stdio.h>

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

    int element;
    printf("Enter the element you want to locate: ");
    scanf("%d",&element);
    
    for(int i=0; i<n; i++)
    {
        if(num[i]==element)
        {
            printf("The element you want to searced is at index %d\n",i);
            return 0;  
        }
    }
    printf("Element not found");

}