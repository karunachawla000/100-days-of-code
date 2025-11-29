#include <stdio.h>

// Define the structure template
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    // Declare a variable of the Student structure type
    struct Student s1;

    // --- Reading Data ---
    printf("Enter student name: ");
    // Use %%s for string input. scanf stops at whitespace.
    scanf("%s", s1.name);

    printf("Enter roll number: ");
    // Use & to pass the address for integer input
    scanf("%d", &s1.roll_no);

    printf("Enter marks: ");
    // Use & to pass the address for float input
    scanf("%f", &s1.marks);

    // --- Printing Data ---
    printf("\n--- Student Data ---\n");
    printf("Name: %s\n", s1.name);
    printf("Roll Number: %d\n", s1.roll_no);
    printf("Marks: %.2f\n", s1.marks);

    return 0;
}