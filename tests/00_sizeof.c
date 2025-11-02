#include "pkgs/lcc-stdlib/io/iofn.c"

struct Point {
    int x;
    int y;
};

struct Rectangle {
    struct Point top_left;
    struct Point bottom_right;
    int color;
};

typedef int Integer;
typedef char* String;

void print_size(char* label, int size) {
    print(label);
    print(": ");
    print_int(size);
    print_char(10);
}

void main()
{
    print("=== Basic Types ===");
    print_char(10);
    print_size("sizeof(char)", sizeof(char));
    print_size("sizeof(short)", sizeof(short));
    print_size("sizeof(int)", sizeof(int));
    print_size("sizeof(long)", sizeof(long));
    print_size("sizeof(long long)", sizeof(long long));

    print_char(10);
    print("=== Pointer Types ===");
    print_char(10);
    print_size("sizeof(char*)", sizeof(char*));
    print_size("sizeof(int*)", sizeof(int*));
    print_size("sizeof(void*)", sizeof(void*));

    print_char(10);
    print("=== Variables ===");
    print_char(10);
    char c = 'A';
    short s = 100;
    int i = 42;
    long l = 1000;
    char* ptr = "test";

    print_size("sizeof(c) [char var]", sizeof(c));
    print_size("sizeof(s) [short var]", sizeof(s));
    print_size("sizeof(i) [int var]", sizeof(i));
    print_size("sizeof(l) [long var]", sizeof(l));
    print_size("sizeof(ptr) [char* var]", sizeof(ptr));

    print_char(10);
    print("=== Arrays ===");
    print_char(10);
    char arr1[10];
    int arr2[5];
    long arr3[3];
    char* arr4[4];

    print_size("sizeof(arr1) [char[10]]", sizeof(arr1));
    print_size("sizeof(arr2) [int[5]]", sizeof(arr2));
    print_size("sizeof(arr3) [long[3]]", sizeof(arr3));
    print_size("sizeof(arr4) [char*[4]]", sizeof(arr4));

    print_char(10);
    print("=== Multi-dimensional Arrays ===");
    print_char(10);
    int matrix[3][4];
    char grid[2][3][4];

    print_size("sizeof(matrix) [int[3][4]]", sizeof(matrix));
    print_size("sizeof(grid) [char[2][3][4]]", sizeof(grid));

    print_char(10);
    print("=== Array Elements ===");
    print_char(10);
    print_size("sizeof(arr1[0]) [char element]", sizeof(arr1[0]));
    print_size("sizeof(arr2[0]) [int element]", sizeof(arr2[0]));
    print_size("sizeof(arr4[0]) [char* element]", sizeof(arr4[0]));
    print_size("sizeof(matrix[0]) [int[4] row]", sizeof(matrix[0]));

    print_char(10);
    print("=== String Literals ===");
    print_char(10);
    print_size("sizeof(Hello)", sizeof("Hello"));
    print_size("sizeof(A)", sizeof("A"));
    print_size("sizeof(empty)", sizeof(""));
    print_size("sizeof(TestLine)", sizeof("TestLine"));

    print_char(10);
    print("=== Character Literals ===");
    print_char(10);
    print_size("sizeof('A')", sizeof('A'));
    print_size("sizeof('Z')", sizeof('Z'));

    print_char(10);
    print("=== Expressions ===");
    print_char(10);
    print_size("sizeof(i + 10)", sizeof(i + 10));
    print_size("sizeof(c + s)", sizeof(c + s));
    print_size("sizeof(i * l)", sizeof(i * l));

    print_char(10);
    print("=== Pointer Arithmetic ===");
    print_char(10);
    print_size("sizeof(ptr + 1)", sizeof(ptr + 1));
    print_size("sizeof(&i)", sizeof(&i));

    print_char(10);
    print("=== Dereferencing ===");
    print_char(10);
    int* int_ptr = &i;
    char** ptr_to_ptr = &ptr;

    print_size("sizeof(*int_ptr)", sizeof(*int_ptr));
    print_size("sizeof(*ptr)", sizeof(*ptr));
    print_size("sizeof(*ptr_to_ptr)", sizeof(*ptr_to_ptr));

    print_char(10);
    print("=== Structures ===");
    print_char(10);
    struct Point p;
    struct Rectangle r;

    print_size("sizeof(struct Point)", sizeof(struct Point));
    print_size("sizeof(struct Rectangle)", sizeof(struct Rectangle));
    print_size("sizeof(p)", sizeof(p));
    print_size("sizeof(r)", sizeof(r));

    print_char(10);
    print("=== Structure Members ===");
    print_char(10);
    print_size("sizeof(p.x)", sizeof(p.x));
    print_size("sizeof(p.y)", sizeof(p.y));
    print_size("sizeof(r.top_left)", sizeof(r.top_left));
    print_size("sizeof(r.color)", sizeof(r.color));

    print_char(10);
    print("=== Typedefs ===");
    print_char(10);
    Integer num = 42;
    String str = "hello";

    print_size("sizeof(Integer)", sizeof(Integer));
    print_size("sizeof(String)", sizeof(String));
    print_size("sizeof(num)", sizeof(num));
    print_size("sizeof(str)", sizeof(str));

    print_char(10);
    print("=== Complex Expressions ===");
    print_char(10);
    print_size("sizeof(arr2[i])", sizeof(arr2[i]));
    print_size("sizeof(&arr1[5])", sizeof(&arr1[5]));
    print_size("sizeof(matrix[1][2])", sizeof(matrix[1][2]));

    print_char(10);
    print("=== Sizeof in Expressions ===");
    print_char(10);
    int array_length = sizeof(arr2) / sizeof(arr2[0]);
    print("Array length calculation: ");
    print_int(array_length);
    print_char(10);

    int total_elements = sizeof(matrix) / sizeof(int);
    print("Matrix total elements: ");
    print_int(total_elements);
    print_char(10);

    print_char(10);
    print("=== Edge Cases ===");
    print_char(10);
    char single[1];
    int* null_ptr = 0;

    print_size("sizeof(single) [char[1]]", sizeof(single));
    print_size("sizeof(null_ptr)", sizeof(null_ptr));
    print_size("sizeof(*(&i))", sizeof(*(&i)));

    print_char(10);
    print("=== All tests completed ===");
    print_char(10);
}