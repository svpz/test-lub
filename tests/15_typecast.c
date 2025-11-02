#include "pkgs/lcc-stdlib/io/iofn.c"

int main() {
    double d = 3.4;
    int x = (int)d;
    print("x = "); print_int(x); nline();
    return 0;
}
