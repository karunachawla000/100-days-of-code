
#include<stdio.h>
int main(){
    char filename[100];
    FILE *file;
    int n, i;
    char name[50];
    int roll;
    float marks;

    printf("Enter the filename to store student records: ");
    scanf("%s", filename);

    file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter details for student %d (Name Roll Marks): ", i + 1);
        scanf("%s %d %f", name, &roll, &marks);
        fprintf(file, "%s %d %.2f\n", name, roll, marks);
    }
    fclose(file);

    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    printf("\nStudent Records:\n");
    while (fscanf(file, "%s %d %f", name, &roll, &marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %.2f\n", name, roll, marks);
    }
    fclose(file);
    return 0;
}
