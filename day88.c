#include <stdio.h>

enum UserRole {
    ADMIN,
    USER,
    GUEST,
    
    ROLE_COUNT 
};

int main() {
    const char *role_names[] = {
        "ADMIN",
        "USER",
        "GUEST"
    };
    
    printf("Enum Name | Integer Value\n");
    printf("----------|--------------\n");
    
    for (int i = 0; i < ROLE_COUNT; i++) {
        enum UserRole role = (enum UserRole)i;
        
        printf("%-9s | %d\n", role_names[i], role);
    }

    return 0;
}