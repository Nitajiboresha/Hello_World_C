/*
    Using a for loop nested in a do while loop.
*/

#include <stdio.h>
int outer_count = 0;
int max_count = 1;

int main() {
    do{
        for(int inner_count = 0; inner_count < 1; inner_count++) {
            printf("Hello, World");
        }
        outer_count++;
    }
    while(outer_count < max_count);
    return 0;
}