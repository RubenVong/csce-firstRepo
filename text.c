#include <stdio.h>

void showString(char *str);

int main(){
    char str[] = "Hello";
    showString(str);
}

void showString(char *str){
    while(*str != '\0'){
        putchar(*str);
        printf("1");
        str++;
    }
    putchar('\n');
}
