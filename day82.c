#include <stdio.h>

int main() {
    enum Light { RED, YELLOW, GREEN };
    enum Light signal = RED;

    if (signal == RED)
        printf("Stop\n");
    else if (signal == YELLOW)
        printf("Wait\n");
    else if (signal == GREEN)
        printf("Go\n");

    return 0;
}
