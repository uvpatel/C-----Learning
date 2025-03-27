#include <stdio.h>

void hello();    // Prototype
void goodbye();  // Prototype

int main(){
    hello();     // Function call
    goodbye();   // Function call
    return 0;
}

void hello(){
    printf("Hello\n");
}

void goodbye(){
    printf("Good bye\n");
}
