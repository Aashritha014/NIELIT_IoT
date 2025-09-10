#include <stdio.h>

int main() {
    int numbers[3] = {9, 2, 5};  
    int x, y, z;

    // Sorting with only if-else
    if (numbers[0] <= numbers[1] && numbers[0] <= numbers[2]) {
        x = numbers[0];
        if (numbers[1] <= numbers[2]) {
            y = numbers[1];
            z = numbers[2];
        } else {
            y = numbers[2];
            z = numbers[1];
        }
    } 
    else if (numbers[1] <= numbers[0] && numbers[1] <= numbers[2]) {
        x = numbers[1];
        if (numbers[0] <= numbers[2]) {
            y = numbers[0];
            z = numbers[2];
        } else {
            y = numbers[2];
            z = numbers[0];
        }
    } 
    else {
        x = numbers[2];
        if (numbers[0] <= numbers[1]) {
            y = numbers[0];
            z = numbers[1];
        } else {
            y = numbers[1];
            z = numbers[0];
        }
    }

    printf("Sorted order: %d %d %d\n", x, y, z);

    return 0;
}
