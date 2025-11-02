#include "pkgs/lcc-stdlib/io/iofn.c"


int factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int sum_array(int* arr, int size) {
    if (size == 0) {
        return 0;
    }
    return arr[0] + sum_array(arr + 1, size - 1);
}

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

void main() {
    print("Testing recursion:");

    // Factorial
    int fact5 = factorial(5);
    print("factorial(5) = 120");

    int fact10 = factorial(10);
    print("factorial(10) = 3628800");

    // Fibonacci
    int fib7 = fibonacci(7);
    print("fibonacci(7) = 13");

    int fib10 = fibonacci(10);
    print("fibonacci(10) = 55");

    // Sum array recursively
    int arr[5] = {1, 2, 3, 4, 5};
    int sum = sum_array(arr, 5);
    print("sum_array([1,2,3,4,5]) = 15");

    // GCD
    int result = gcd(48, 18);
    print("gcd(48, 18) = 6");
}