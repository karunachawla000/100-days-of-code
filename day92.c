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

    // --- Print Data for all 5 Students ---
    printf("\n==================================\n");
    printf("     Stored Student Data\n");
    printf("==================================\n");
    
    for (i = 0; i < MAX_STUDENTS; i++) {
        printf("Student %d:\n", i + 1);
        printf("  Name: %s\n", students[i].name);
        printf("  Roll Number: %d\n", students[i].roll_no);
        printf("  Marks: %.2f\n", students[i].marks);
        printf("----------------------------------\n");
    }

    return 0;
}