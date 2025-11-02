#include "pkgs/lcc-stdlib/io/iofn.c"
#include "pkgs/lcc-stdlib/io/dmafn.c"

int main() {
    int *x = malloc(sizeof(int));
    
    if (x == 0) {
        print("malloc returned NULL!\n");
        return 1;
    }
    
    print("malloc succeeded\n");
    
    *x = 42;
    print_int(*x);
    free(x);
    return 0;
}