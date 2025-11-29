#include <stdio.h>

#define MAX_STUDENTS 5

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

struct Student find_top_student(struct Student s[], int count) {
    int highest_mark_index = 0;
    int i;

    for (i = 1; i < count; i++) {
        if (s[i].marks > s[highest_mark_index].marks) {
            highest_mark_index = i;
        }
    }

    return s[highest_mark_index];
}

int main() {
    struct Student students[MAX_STUDENTS];
    struct Student top_student;
    int i;

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

    top_student = find_top_student(students, MAX_STUDENTS);

    printf("\n==================================\n");
    printf("  TOP SCORING STUDENT FOUND\n");
    printf("==================================\n");
    printf("Name: %s\n", top_student.name);
    printf("Roll Number: %d\n", top_student.roll_no);
    printf("Marks: %.2f\n", top_student.marks);
    printf("----------------------------------\n");

    return 0;
}