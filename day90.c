#include <stdio.h>
#include <string.h>

enum Gender {
    MALE,
    FEMALE,
    OTHER
};

struct Person {
    char name[50];
    int age;
    enum Gender gender;
};

void print_gender_name(enum Gender g) {
    switch (g) {
        case MALE:
            printf("MALE");
            break;
        case FEMALE:
            printf("FEMALE");
            break;
        case OTHER:
            printf("OTHER");
            break;
        default:
            printf("UNKNOWN");
    }
}

int main() {
    struct Person p1;
    
    strcpy(p1.name, "Alex Turner");
    p1.age = 32;
    p1.gender = FEMALE; 

    printf("--- Person Details ---\n");
    printf("Name: %s\n", p1.name);
    printf("Age: %d\n", p1.age);
    printf("Gender: ");
    
    print_gender_name(p1.gender);
    printf("\n");

    return 0;
}