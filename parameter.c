#include <stdio.h>
int sum(int a,int b);


int main(){
    int a,b;
    printf("Enter first number and Second number: ");
    scanf("%d %d",&a,&b);
    sum(a,b);
    return 0;
}

int sum(int a,int b){
    printf("Enter first number and Second number: ");
    scanf("%d %d",&a,&b);
    printf("The sum is %d",a+b);
    return a+b;
    
}