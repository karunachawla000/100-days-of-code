#include <stdio.h>
#include <stdbool.h>

#define SIZE 4

int main() {
    int matrix[SIZE][SIZE] = {
        {10, 2, 3, 4},
        {5, 20, 7, 8},
        {9, 10, 30, 12},
        {13, 14, 15, 40}
    };
    
    // Array to store the diagonal elements
    int diagonal_elements[SIZE];
    int i, j;
    bool is_distinct = true;

    // 1. Extract Main Diagonal Elements
    for (i = 0; i < SIZE; i++) {
        // Main diagonal elements are at matrix[i][i]
        diagonal_elements[i] = matrix[i][i];
    }
    
    // --- Print Diagonal Elements for Verification ---
    printf("Diagonal Elements: ");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", diagonal_elements[i]);
    }
    printf("\n");

    // 2. Check for Duplicates in the extracted array
    // i iterates from the first element up to the second-to-last
    for (i = 0; i < SIZE - 1; i++) {
        // j iterates from the element immediately after i to the last element
        for (j = i + 1; j < SIZE; j++) {
            if (diagonal_elements[i] == diagonal_elements[j]) {
                is_distinct = false; // Found a duplicate
                break; // Exit inner loop
            }
        }
        if (!is_distinct) {
            break; // Exit outer loop
        }
    }

    // --- Print Result ---
    printf("\nResult:\n");
    if (is_distinct) {
        printf("All elements on the main diagonal are DISTINCT.\n");
    } else {
        printf("Elements on the main diagonal are NOT distinct (duplicates found).\n");
    }

    return 0;
}
