#include <stdio.h>
#include<math.h>

// int squre(int num);  // function prototype.


int main(){
    float n,sq;
    printf("Enter number: ");
    scanf("%d",&n);

    // printf("Enter exp: ");
    // scanf("%d",&m);
    sq = pow(n,2);
    printf("The squre of %d is %f",n,sq);

    return 0;
}


