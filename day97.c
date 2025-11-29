#include <stdio.h>
#include <string.h>

#define FILENAME "employees.dat"
#define NUM_EMPLOYEES 3

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int employee_id;
    float salary;
    struct Date joining_date;
};

void write_to_file(struct Employee emp[]) {
    FILE *fp = fopen(FILENAME, "wb");
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        return;
    }

    fwrite(emp, sizeof(struct Employee), NUM_EMPLOYEES, fp);

    fclose(fp);
}

void read_from_file() {
    struct Employee read_emp;
    FILE *fp = fopen(FILENAME, "rb");
    int count = 0;

    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return;
    }

    printf("\n==================================\n");
    printf("   Data Read From Binary File\n");
    printf("==================================\n");

    while (fread(&read_emp, sizeof(struct Employee), 1, fp) == 1) {
        count++;
        printf("Employee %d:\n", count);
        printf("  Name: %s\n", read_emp.name);
        printf("  ID: %d\n", read_emp.employee_id);
        printf("  Salary: %.2f\n", read_emp.salary);
        printf("  Joining Date: %d/%d/%d\n", 
               read_emp.joining_date.day, 
               read_emp.joining_date.month, 
               read_emp.joining_date.year);
        printf("----------------------------------\n");
    }

    fclose(fp);
}

int main() {
    struct Employee employees[NUM_EMPLOYEES] = {
        {"Alice Smith", 1001, 75000.00, {10, 1, 2024}},
        {"Bob Johnson", 1002, 82000.50, {5, 9, 2023}},
        {"Charlie Brown", 1003, 60000.00, {22, 3, 2024}}
    };

    write_to_file(employees);
    printf("Successfully wrote %d employee records to %s\n", NUM_EMPLOYEES, FILENAME);

    read_from_file();

    return 0;
}