//1.
/*#include<stdio.h>

int main()
{
    int i,j;
  for(i = 1; i <= 5; i++)
    {
        for(j = 6-i; j <= 5; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }

    return 0; 
}*/


//2.
/*#include <stdio.h>

int main() {
    int i, j,gap;
    for (i = 5; i >= 1; i--) {
        for (gap=0; gap < 5-i; gap++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}*/