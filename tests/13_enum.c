#include "pkgs/lcc-stdlib/io/iofn.c"
enum Color { RED, GREEN, BLUE };

int main() {
    enum Color c = GREEN;
    print("c = "); print_int(c); nline();
    return 0;
}
