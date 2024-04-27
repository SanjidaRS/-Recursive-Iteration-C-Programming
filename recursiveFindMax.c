//function for recursive finding max value in an array
int recursiveFindMax(int *arr, int size) {
    if (size == 1) {
        return arr[0];
    }
    int maxNext = recursiveFindMax(arr + 1, size - 1);
    if (arr[0] > maxNext) {
        return arr[0];
    } else {
        return maxNext;
    }
}
