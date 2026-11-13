#include <stdio.h>

int main() {
    int i, j;

    // Outer loop for the 5 rows
    for (i = 1; i <= 5; i++) {

        // Inner loop for the 5 columns
        for (j = 1; j <= 5; j++) {
            if (i == 1 || i == 5 || j == 1 || j == 5) {
                printf("* ");
            } else {
                printf("@ ");
            }
        }
        
        // Move to the next line after each row finishes
        printf("\n");
    }

    return 0;
}
