#include <stdio.h>
int table(int n);
int main(){
    int n;
    printf("Enter the number you want to Multiplication table: ");
    scanf("%d",&n);
    table(n);  //argument and actual parameter


    return 0;
}

int table(int n){ // here n is parameter. formal parameter.
    for (int i = 0; i < 11; i++)
    {
        printf("%d X %d = %d\n",n,i,n*i);
    }
    
}