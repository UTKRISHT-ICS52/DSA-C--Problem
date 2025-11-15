/* #include <stdio.h>

int n, i, j, swap, arr[100];

int partition(int *A, int start, int end) {
    int pivot = A[end];
    int index = start; // correctly start the index

    for (i = start; i < end; i++) {
        if (A[i] <= pivot) {
            // swap A[i] and A[index]
            swap = A[i];
            A[i] = A[index];
            A[index] = swap;
            index++;
        }
    }
    // finally, swap pivot into its correct position
    swap = A[index];
    A[index] = A[end];
    A[end] = swap;

    return index;
}

void quicksort(int *A, int start, int end) {
    if (start < end) {
        int index = partition(A, start, end);
        quicksort(A, start, index - 1);
        quicksort(A, index + 1, end);
    }
}

int main() {
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nArray: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    quicksort(arr, 0, n - 1);  

    printf("\nSorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
    */