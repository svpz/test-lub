#include "pkgs/lcc-stdlib/io/iofn.c"

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int i;
    for (i = 0; i < 5; i++) {
        print_int(arr[i]); nline();
    }
    return 0;
}
