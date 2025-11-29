#include <stdio.h>

enum UserRole {
    ADMIN,
    USER,
    GUEST
};

int main() {
    enum UserRole current_role = USER; 

    printf("Current User Role Check:\n");
    
    switch (current_role) {
        case ADMIN:
            printf("Welcome, Administrator! You have full read/write access.\n");
            break;
        case USER:
            printf("Hello, Standard User! You have limited access to features.\n");
            break;
        case GUEST:
            printf("Greetings, Guest! You can only view public information.\n");
            break;
        default:
            printf("Error: Unknown role detected.\n");
            break;
    }

    current_role = ADMIN;
    
    printf("\nNew Role Check:\n");
    switch (current_role) {
        case ADMIN:
            printf("Welcome, Administrator! You have full read/write access.\n");
            break;
        case USER:
            printf("Hello, Standard User! You have limited access to features.\n");
            break;
        case GUEST:
            printf("Greetings, Guest! You can only view public information.\n");
            break;
        default:
            printf("Error: Unknown role detected.\n");
            break;
    }

    return 0;
}