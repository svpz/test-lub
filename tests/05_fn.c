#include "pkgs/lcc-stdlib/io/iofn.c"

long factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    int n = 5;
    print("factorial(5) = "); print_int(factorial(n)); nline();
    return 0;
}
