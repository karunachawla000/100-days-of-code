#include <stdio.h>

#define MAX_STUDENTS 5

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student students[MAX_STUDENTS];
    int i;
    int highest_mark_index = 0;

    // --- Read Data for 5 Students ---
    printf("Enter details for 5 students:\n");
    for (i = 0; i < MAX_STUDENTS; i++) {
        printf("\nStudent %d:\n", i + 1);
        
        printf("Enter name: ");
        scanf("%s", students[i].name);
        
        printf("Enter roll number: ");
        scanf("%d", &students[i].roll_no);
        
        printf("Enter marks: ");
        scanf("%f", &students[i].marks);
    }

    // --- Find Student with Highest Marks ---
    // Start comparison from the second student (index 1)
    for (i = 1; i < MAX_STUDENTS; i++) {
        // Compare the current student's marks with the marks of the highest recorded student
        if (students[i].marks > students[highest_mark_index].marks) {
            // If current marks are higher, update the index
            highest_mark_index = i;
        }
    }

    // --- Print the Student with Highest Marks ---
    printf("\n==================================\n");
    printf("  Student with Highest Marks\n");
    printf("==================================\n");
    printf("Student Index (0-4): %d\n", highest_mark_index);
    printf("Name: %s\n", students[highest_mark_index].name);
    printf("Roll Number: %d\n", students[highest_mark_index].roll_no);
    printf("Marks: %.2f\n", students[highest_mark_index].marks);
    printf("----------------------------------\n");

    return 0;
}