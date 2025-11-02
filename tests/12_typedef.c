#include "pkgs/lcc-stdlib/io/iofn.c"

typedef int myint;

int main() {
    myint x = 42;
    print("x = "); print_int(x); nline();
    return 0;
}



