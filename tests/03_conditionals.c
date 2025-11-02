#include "pkgs/lcc-stdlib/io/iofn.c"

int main() {
    int x = 10;

    if (x > 5) {
        print("x > 5");
    } else {
        print("x <= 5");
    }
    nline();

    if (x < 5) {
        print("x < 5");
    } else if (x == 10) {
        print("x == 10");
    }
    nline();

    return 0;
}
