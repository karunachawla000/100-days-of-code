#include<stdio.h>
int main(){
    char name[100];
    fgets(name, sizeof(name), stdin);
    int i = 0;
    if(name[0] != ' '){
        printf("%c.", name[0]);
    }
    while(name[i] != '\0'){
        if(name[i] == ' ' && name[i+1] != ' ' && name[i+1] != '\0'){
            printf("%c.", name[i+1]);
        }
        i++;
    }
    return 0;
}
