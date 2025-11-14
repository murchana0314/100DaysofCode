//To check if the points are collinear or not.
#include<stdio.h>

int main() {
    //To check if three points are collinear or not
    int x1 , x2 , x3 , y1 , y2 , y3;
    printf("enter first coordinates (x1 , y1) = ");
    scanf("%d %d", &x1 , &y1);
  printf("enter second coordinates (x2 , y2) = ");
    scanf("%d %d", &x2 , &y2);  
    printf("enter third coordinates (x3 , y3) = ");
    scanf("%d %d", &x3 , &y3);
    
    if((y2 - y1)/(x2 - x1) == (y3 - y2)/(x3 - x2)) {
        printf("the points are collinear");
    } else {
        printf("the points are not collinear");
    }
    return 0;
}