#include <stdio.h>

int main() {
    int arr[100];
    int n;
    int positive = 0, negative = 0, zero = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input elements in array
    for(int i = 0; i < n; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    // Checking numbers
    for(int i = 0; i < n; i++) {
        if(arr[i] > 0) {
            positive++;
        }
        else if(arr[i] < 0) {
            negative++;
        }
        else {
            zero++;
        }
    }

    printf("\nPositive numbers = %d", positive);
    printf("\nNegative numbers = %d", negative);
    printf("\nZero numbers = %d", zero);

    return 0;
}