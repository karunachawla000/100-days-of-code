#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student *s_ptr;

    s_ptr = (struct Student *)malloc(sizeof(struct Student));

    if (s_ptr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    strcpy(s_ptr->name, "Chris Evans");
    s_ptr->roll_no = 42;
    s_ptr->marks = 88.75;

    printf("--- Dynamically Allocated Student Details ---\n");
    printf("Name: %s\n", s_ptr->name);
    printf("Roll Number: %d\n", s_ptr->roll_no);
    printf("Marks: %.2f\n", s_ptr->marks);
    printf("-------------------------------------------\n");

    free(s_ptr);

    return 0;
}