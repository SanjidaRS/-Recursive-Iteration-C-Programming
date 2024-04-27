//function for Recursive Fibonacci
int recursiveFibonacci(int n) {
    if (n <= 2) {
        return 1;
    }
    //int fib[n];
    //fib[1] = fib[2] = 1;
    //for (int i = 3; i <= n; i++) {
      //  fib[i] = fib[i - 1] + fib[i - 2];
    //}
    //return fib[n];
    return recursiveFibonacci(n - 1) + recursiveFibonacci(n - 2);
}
