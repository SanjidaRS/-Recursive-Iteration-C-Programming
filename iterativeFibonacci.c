//function for iterative Fibonacci
int iterativeFibonacci(int n) {
    if (n <= 2) {
        return 1;
    }
    int first = 1, second = 1, third;
    for (int i = 3; i <= n; ++i) {
        third = first + second;
        first = second;
        second = third;
    }
    return second;
}

