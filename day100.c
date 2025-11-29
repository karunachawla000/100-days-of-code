#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s1;
    struct Student *s_ptr;

    strcpy(s1.name, "Initial Name");
    s1.roll_no = 10;
    s1.marks = 50.0;

    s_ptr = &s1;

    printf("--- Original Details ---\n");
    printf("Name: %s\n", s_ptr->name);
    printf("Roll Number: %d\n", s_ptr->roll_no);
    printf("Marks: %.2f\n", s_ptr->marks);
    printf("------------------------\n");

    // Modify data using the arrow operator (->)
    strcpy(s_ptr->name, "Updated Name");
    s_ptr->roll_no = 20;
    s_ptr->marks = 95.5;

    printf("--- Modified Details ---\n");
    printf("Name: %s\n", s_ptr->name);
    printf("Roll Number: %d\n", s_ptr->roll_no);
    printf("Marks: %.2f\n", s_ptr->marks);
    printf("------------------------\n");

    return 0;
}