#include "pkgs/lcc-stdlib/io/iofn.c"

int main() {
    int arr[2][3] = {{1,2,3},{4,5,6}};
    int i;
    int j;
    int m;
    for (i=0; i<2; i++)
        for (j=0; j<3; j++) {
            m = arr[i][j];
            print_int(m); nline();
        }
    return 0;
}
