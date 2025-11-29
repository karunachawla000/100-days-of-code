#include <stdio.h>
#include <string.h>

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

int main() {
    struct Employee emp1;

    strcpy(emp1.name, "Jane Doe");
    emp1.employee_id = 4567;
    emp1.salary = 65000.00;
    
    emp1.joining_date.day = 15;
    emp1.joining_date.month = 6;
    emp1.joining_date.year = 2022;

    printf("--- Employee Details ---\n");
    printf("Name: %s\n", emp1.name);
    printf("ID: %d\n", emp1.employee_id);
    printf("Salary: %.2f\n", emp1.salary);
    printf("Joining Date: %d/%d/%d\n", 
           emp1.joining_date.day, 
           emp1.joining_date.month, 
           emp1.joining_date.year);

    return 0;
}