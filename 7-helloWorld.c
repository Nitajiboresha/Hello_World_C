/*
    Using a function with a for loop nested in a do...while loop.
*/

#include <stdio.h>

int outer_count = 0;
int max_count = 10;

char* helloWorld() {
    return "Hello, World!";
}

int main() {
    char* result = helloWorld();
    do{
        for(int inner_count = 0; inner_count < 1; inner_count++){
            printf("%s\n", result);
        }
        outer_count++;
    }
    while(outer_count < max_count);
    return 0;
}