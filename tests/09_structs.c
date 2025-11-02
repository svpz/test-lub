#include "pkgs/lcc-stdlib/io/iofn.c"

struct Point {
    int x;
    int y;
};

int main() {
    struct Point p = {10, 20};
    struct Point* pp = &p;

    print("p.x = "); print_int(p.x); nline();
    print("p.y = "); print_int(p.y); nline();
    print("pp->x = "); print_int(pp->x); nline();
    print("pp->y = "); print_int(pp->y); nline();

    return 0;
}
