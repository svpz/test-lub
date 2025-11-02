#include "pkgs/lcc-stdlib/io/iofn.c"

int main() {
    int i = 42;
    char c = 'A';
    long l = 1234567890;
    short s = 32000;
    unsigned u = 4000;

    print_int(i);
    nline();

    print_int(c);
    nline();


    print_int(l);
    nline();


    print_int(s);
    nline();


    print_int(u);
    nline();

    return 0;
}
