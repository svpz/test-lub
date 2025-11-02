#include "pkgs/lcc-stdlib/io/iofn.c"
#include "pkgs/lcc-stdlib/io/dmafn.c"

int main() {
    init_heap(1024 * 1024);
    
    if (heap_head == 0) {
        print("heap_head is NULL!\n");
        return 1;
    }
    
    print("heap initialized\n");
    
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