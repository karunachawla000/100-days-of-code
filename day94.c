#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

// Function definition to accept a Student structure by value
void print_student_details(struct Student s) {
    printf("\n--- Student Details from Function Call ---\n");
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.roll_no);
    printf("Marks: %.2f\n", s.marks);
    printf("----------------------------------------\n");
}

int main() {
    struct Student s1;
    
    // Initialize the structure instance
    strcpy(s1.name, "Lisa Chen");
    s1.roll_no = 101;
    s1.marks = 95.50;

    // Call the function, passing the entire structure s1 as an argument
    print_student_details(s1);

    return 0;
}