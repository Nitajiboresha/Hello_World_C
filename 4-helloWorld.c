/*
    Using a function and a for loop.
*/

#include <stdio.h>

char* helloWorld() {
    return "Hello, World!";
}

int main() {
    char* result = helloWorld();
    for(int i = 0; i < 1; i++) {
        printf("%s\n", result);
    }
    return 0;
}