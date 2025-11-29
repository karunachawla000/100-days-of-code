

#include <stdio.h>

int main() {
    char string[100];
    printf("Enter a string:");
    fgets(string, 100, stdin);
	int i;
    for (i = 0; string[i] != '\0'; i++) {
        
        if (string[i] >= 'a' && string[i] <= 'z') {
            string[i] -= 32; 
        } 
        
        else if (string[i] >= 'A' && string[i] <= 'Z') {
            string[i] += 32; 
        }
        
    }

    printf("Modified string:\n%s", string);
    return 0;
}
