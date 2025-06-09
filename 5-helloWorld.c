/*
    Using a do...while loop
*/

#include <stdio.h>

int main() {
    int count = 0;
    int max_count = 1;
    do{
        printf("Hello, World");
        count ++;
    }
    while(count < max_count);
    return 0;
}