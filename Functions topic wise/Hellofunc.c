#include <stdio.h>

int main(){

    printHello();  // -->  this is function call.

    return 0;
}

void printHello();  // --> This is a function prototype you can declare it anywhere above main function or belove the main functio.

void printHello(){
    printf("Hello World");

}