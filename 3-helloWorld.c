/*
    Using a for loop.
*/

#include <stdio.h>

int main() {
    char helloWorld[] = "Hello, World!";
    for(int i = 0; i < 5; i++) {
        printf("%s\n", helloWorld);
    }
    return 0;
}