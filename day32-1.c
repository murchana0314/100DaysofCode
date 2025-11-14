//Merge two arrays.
#include<stdio.h>

int main()
{
    int n1,n2,i;
    printf("This is the first Array\n");
    printf("How many elements you want in the array: ");
    scanf("%d",&n1);
    int num[n1];
    printf("Enter the elements:\n");
    for(i=0; i<n1; i++)
    {
        printf("Element %d: ", i);
        scanf("%d", &num[i]);
    }

    printf("This is the second Array\n");
    printf("How many elements you want in the array: ");
    scanf("%d",&n2);
    int num2[n2];
    printf("Enter the elements:\n");
    for(i=0; i<n2; i++)
    {
        printf("Element %d: ", i);
        scanf("%d", &num2[i]);
    }

int merged[n1 + n2];

for(i = 0; i < n1; i++) {
    merged[i] = num[i];
}

for(i = 0; i < n2; i++) {
    merged[n1 + i] = num2[i];
}

printf("Merging both the arrays we get the following array:\n");
for(i = 0; i < n1 + n2; i++) {
    printf("%d ", merged[i]);
}

return 0;
}