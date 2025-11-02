#include "pkgs/lcc-stdlib/io/iofn.c"

int main() {
    int x = 0;
start:
    if (x >= 3) goto end;
    print_int(x); nline();
    x++;
    goto start;
end:
    return 0;
}
