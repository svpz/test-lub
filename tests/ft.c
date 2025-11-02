#include "pkgs/lcc-stdlib/io/iofn.c"

void main() {
    print("Hello from lcc on Windows!");
    char buf[5];
    int n = read_input(buf, 3);
    buf[n] = 0; // null-terminate
    print("Hello from lcc on Windows!");
}
