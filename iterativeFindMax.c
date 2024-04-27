//function for iterative finding max value in an array
int iterativeFindMax(int *arr, int size) {
    int max = arr[0];   // Assume the first element as the maximum
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i]; // Update max if a larger element is found
        }
    }
    return max;
}
