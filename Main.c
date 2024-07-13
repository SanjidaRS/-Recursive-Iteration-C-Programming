#include <stdio.h>
#include <stdlib.h>
#include <time.h>  //for clock_t, clock(), CLOCKS_PER_SEC

#define SIZE 10

int recursiveFibonacci (int n);
int iterativeFibonacci (int n);

int iterativeFindMax (int *, int);
int recursiveFindMax (int *, int);

int main()
{
    //functions for Fibonacci sequence
    int n;
    printf("Enter an input value: ");
    scanf("%d", &n);

    clock_t begin = clock();
    printf("Iterative Fibonacci (%d): %d\n", n, iterativeFibonacci(n));
    clock_t end = clock();
    double timeElapsedIterativeFibonacci = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("Time elapsed for Iterative Fibonacci is %lf seconds\n", timeElapsedIterativeFibonacci);

    begin = clock();
    printf("Recursive Fibonacci (%d) = %d\n", n, recursiveFibonacci(n));
    end = clock();
    double timeElapsedRecursiveFibonacci = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("Time elapsed for Recursive Fibonacci is %lf seconds\n", timeElapsedRecursiveFibonacci);

//functions for finding max value in an array
    int arr[SIZE];
    printf("Array elements are:\n");
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &arr[i]);
    }

    begin = clock();
    printf("Iterative find max = %d\n", iterativeFindMax(arr, SIZE));
    end = clock();
    double timeElapsedIterativeFindMax = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("Time elapsed for Iterative Find Max is %lf seconds\n", timeElapsedIterativeFindMax);

    begin = clock();
    printf("Recursive find max = %d\n", recursiveFindMax(arr, SIZE));
    end = clock();
    double timeElapsedRecursiveFindMax = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("Time elapsed for Recursive Find Max is %lf seconds\n", timeElapsedRecursiveFindMax);

    return 0;
}
