#include <stdio.h>

int main() {
    int a = 10;
    

    int b = 11;
    

    int c; 
    c = 12; 

  
    int sum = a + b + c; 

 
    printf("--- Explicitly Assigned Values ---\n");
    printf("Value of a: %d\n", a);
    printf("Value of b: %d\n", b);
    printf("Value of c: %d\n", c);
    
    printf("----------------------------------\n");
    
 
    printf("Sum of a, b, and c: %d\n", sum);

    return 0;
}