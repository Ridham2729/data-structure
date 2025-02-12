#include <stdio.h>

void insertElement(int arr[], int *size, int position, int element) {

    if (position >= 0 && position <= *size) {

        for (int i = *size - 1; i >= position; i--) {
            arr[i + 1] = arr[i];
        }

        arr[position] = element;

        (*size)++;
    } else {
        printf("Invalid position\n");
    }
}

int main() {
    int arr[100], size, element, position;


    printf("Enter the size of the array: ");
    scanf("%d", &size);


    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }


    printf("Enter the position (0 to %d) where you want to insert the element: ", size);
    scanf("%d", &position);

    printf("Enter the element to insert: ");
    scanf("%d", &element);


    insertElement(arr, &size, position, element);


    printf("Array after insertion: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
