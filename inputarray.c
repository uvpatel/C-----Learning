#include <stdio.h>

int main() {
    int marks[3];  // Fixed array size
    for (int i = 0; i < 3; i++) {
        printf("Enter marks %d: ", i);
        scanf("%d", &marks[i]);
    }

    printf("Marks are: ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", marks[i]);
    }

    return 0;
}
