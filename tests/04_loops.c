#include "pkgs/lcc-stdlib/io/iofn.c"

int main() {
    int i;

    print("for loop:"); nline();
    for (i = 0; i < 3; i++) {
        print_int(i); nline();
    }

    print("while loop:"); nline();
    i = 0;
    while (i < 3) {
        print_int(i); nline();
        i++;
    }

    print("do-while loop:"); nline();
    i = 0;
    do {
        print_int(i); nline();
        i++;
    } while (i < 3);

    return 0;
}
