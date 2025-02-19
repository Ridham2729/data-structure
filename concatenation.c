#include <stdio.h>

void concatenateArrays(int arr1[], int size1, int arr2[], int size2, int result[]) {
    
    for (int i = 0; i < size1; i++) {
        result[i] = arr1[i];
    }
    

    for (int i = 0; i < size2; i++) {
        result[size1 + i] = arr2[i];
    }
}

void displayArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr1[100], arr2[100], result[200];
    int size1, size2;

  
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &size1);
    printf("Enter the elements of the first array:\n");
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

   
    printf("Enter the number of elements in the second array: ");
    scanf("%d", &size2);
    printf("Enter the elements of the second array:\n");
    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    
    concatenateArrays(arr1, size1, arr2, size2, result);


    printf("Concatenated array:\n");
    displayArray(result, size1 + size2);

    return 0;
}
