#include "pkgs/lcc-stdlib/io/iofn.c"

int main() {
    int a = 6; // 110
    int b = 3; // 011

    print("a & b = "); print_int(a & b); nline();
    print("a | b = "); print_int(a | b); nline();
    print("a ^ b = "); print_int(a ^ b); nline();
    print("~a = "); print_int(~a); nline();
    print("a << 1 = "); print_int(a << 1); nline();
    print("a >> 1 = "); print_int(a >> 1); nline();

    return 0;
}
