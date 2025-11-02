#include "pkgs/lcc-stdlib/io/iofn.c"

int main() {
    int x = 42;
    int* p = &x;
    int m = *p;
    print("x via pointer = "); print_int(m); nline();

    *p = 100;
    print("x after change = "); print_int(x); nline();

    return 0;
}
