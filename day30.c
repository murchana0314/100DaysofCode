//Count even and odd numbers in an array.
/*#include<stdio.h>

int main()
{
    int n, Count_even=0, Count_odd=0;
    printf("How many elements you want in the array: ");
    scanf("%d",&n);

    int num[n];
    printf("Enter the elements:\n");
    for(int i=0; i<n; i++)
    {
        printf("Element %d: ", i);
        scanf("%d", &num[i]);

        if(num[i] % 2 == 0)
            Count_even++;
        else
            Count_odd++;

    }
    printf("The elements of the array are: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", num[i]);
    }

    printf("\nTotal count of even numbers in the array is: %d",Count_even);
    printf("\nTotal count of odd numbers in the array is: %d",Count_odd);

    return 0;
}*/


//Count positive, negative, and zero elements in an array.
/*#include<stdio.h>

int main()
{
    int n, Count_positive=0, Count_negative=0,Count_zero=0;
    printf("How many elements you want in the array: ");
    scanf("%d",&n);

    int num[n];
    printf("Enter the elements:\n");
    for(int i=0; i<n; i++)
    {
        printf("Element %d: ", i);
        scanf("%d", &num[i]);

        if(num[i] > 0)
            Count_positive++;
        else if(num[i] < 0)
            Count_negative++;
        else
        Count_zero++;    

    }
    printf("The elements of the array are: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", num[i]);
    }

    printf("\nTotal count of positive numbers in the array is: %d",Count_positive);
    printf("\nTotal count of negative numbers in the array is: %d",Count_negative);
    printf("\nTotal count of zeros in the array is: %d",Count_zero);

    return 0;
}*/