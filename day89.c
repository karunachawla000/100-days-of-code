#include <stdio.h>

enum Color {
    RED = 10,
    GREEN = 20,
    BLUE = 30
};

int main() {
    enum Color favorite_color = GREEN;
    enum Color primary_color = RED;
    
    int value_of_blue = BLUE;

    printf("--- Enum Values as Integers ---\n");

    printf("RED constant value: %d\n", RED);
    printf("GREEN constant value: %d\n", GREEN);
    printf("BLUE constant value: %d\n", BLUE);
    
    printf("-------------------------------\n");
    
    printf("Value stored in favorite_color: %d\n", favorite_color);
    printf("Value stored in primary_color: %d\n", primary_color);
    
    printf("-------------------------------\n");
    
    printf("Value stored in integer variable: %d\n", value_of_blue);
    
    return 0;
}