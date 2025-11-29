#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i, len, ls = -1;

    printf("Enter a name: ");
    fgets(name, sizeof(name), stdin);

    len = strlen(name);

    for (i = 0; i < len; i++) {
        if (name[i] == ' ')
            ls = i;
    }

    printf("%c.", name[0]);

    for (i = 0; i < ls; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ')
            printf("%c.", name[i + 1]);
    }

    printf(" %s", &name[ls + 1]);

    return 0;
}
