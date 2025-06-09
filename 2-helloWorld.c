/*
    Using a function.
*/

#include <stdio.h>

char* helloWorld () {
    return "Hello, World!";
}

int main() {
    char* result = helloWorld();
    printf("%s\n", result);
    return 0;
}