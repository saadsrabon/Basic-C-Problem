#include <stdio.h>

// Function to print numbers from 1 to N and then back to 1
void printPattern(int n) {
    if (n == 1) {
        printf("1 ");
        return;
    }
    
    // Print numbers in increasing order
    printf("%d ", n);
    
    // Recursive call to continue towards 1
    printPattern(n - 1);
    
    // Print numbers in decreasing order
    printf("%d ", n);
}

int main() {
    int T, N;

    // Read the number of test cases
    scanf("%d", &T);

    for (int t = 0; t < T; t++) {
        // Read the value of N for the current test case
        scanf("%d", &N);

        // Start the recursive pattern with N as the starting point
        printPattern(N);

        // Print newline after each test case
        printf("\n");
    }

    return 0;
}