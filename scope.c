#include <stdio.h>

int global_var = 10;  // Global Scope - Accessible anywhere in the program

void checkScope(int param_var) {   // param_var has function parameter scope
    int local_var = 5;  // Local scope - accessible only inside this function
    printf("Inside Function:\n");
    printf("Global Variable: %d\n", global_var);
    printf("Parameter Variable: %d\n", param_var);
    printf("Local Variable: %d\n", local_var);
}

int main() {
    int main_var = 20;  // Local to main()

    printf("Inside Main Function:\n");
    printf("Global Variable: %d\n", global_var);
    printf("Main Local Variable: %d\n\n", main_var);

    checkScope(50);  // Passing 50 as parameter
    // printf("%d", local_var);  // ❌ Error: local_var is not accessible here
    // printf("%d", param_var);  // ❌ Error: param_var is not accessible here

    return 0;
}
