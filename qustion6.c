#include <stdio.h>

float squreArea(int side);

int main(){
    float side;
    printf("Enter side: ");
    scanf("%f",&side);
    squreArea(side);
    
    return 0;
}

float squreArea(int side){
    printf("The area of squre is %d",side*side);
    return side*side;
}