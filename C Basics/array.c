#include <stdio.h>


//function call to display and sq elements of array 

void displayAndSquares(int arr[], int size) {

    printf("Original array: ");

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    printf("Squares of elements: ");

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i] * arr[i]);
    }
    printf("\n");
}


//main 

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    
//calling the function

displayAndSquares(arr, size);

    return 0;
}