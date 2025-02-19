#include <stdio.h>

void insertElement(int arr[], int *size, int element, int position) {
   
    if (position < 0 || position > *size) {
        printf("Invalid position! Please enter a position between 0 and %d.\n", *size);
        return;
    }

   
    for (int i = *size; i > position; i--) {
        arr[i] = arr[i - 1];
    }

   
    arr[position] = element;

   
    (*size)++;
}

int main() {
    int arr[100], size, element, position;

    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

   
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

   
    printf("Enter the element to insert: ");
    scanf("%d", &element);

    printf("Enter the position to insert the element (0 to %d): ", size);
    scanf("%d", &position);

    
    insertElement(arr, &size, element, position);

    
    printf("Updated array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
