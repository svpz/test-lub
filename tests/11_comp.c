#include "pkgs/lcc-stdlib/io/iofn.c"

int main() {
    int x = 5;
    int y = 10;

    int res;

    res = x == y;
    print("x == y = "); print_int(res); nline();

    res = (x != y);
    print("x != y = "); print_int(res); nline();

    res = (x < y);
    print("x < y = "); print_int(res); nline();

    res = (x <= y);
    print("x <= y = "); print_int(res); nline();

    res = (x > y);
    print("x > y = "); print_int(res); nline();

    res = (x >= y);
    print("x >= y = "); print_int(res); nline();

    return 0;
}
