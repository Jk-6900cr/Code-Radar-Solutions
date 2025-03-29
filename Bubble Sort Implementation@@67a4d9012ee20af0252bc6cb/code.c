#include <stdio.h>

void bubbleSort(int arr[], int n){
    for (int i = 0; i < n-1; i++){
        for (int j = 0; j < n-i-1; j++){
            if (arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void printArray(int arr[], int n){
    for (int i = 0; i < n; i++){
        printf("%d", arr[i]);
        if (i < n-1){
            printf(" ");  // Print space between elements
        }
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);  // Read the number of elements
    int arr[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);  // Correctly read integers into array
    }
    bubbleSort(arr, n);
    printArray(arr, n);
    return 0;
}
