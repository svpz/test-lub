#include "pkgs/lcc-stdlib/io/iofn.c"

void main() {
    // Test basic int operations
    print("=== Basic Int Tests ===");
    nline();

    int a = 10;
    int b = 5;
    int result = 0;

    result = a + b;
    print("10 + 5 = ");
    print_int(result);
    nline();

    result = a - b;
    print("10 - 5 = ");
    print_int(result);
    nline();

    result = a * b;
    print("10 * 5 = ");
    print_int(result);
    nline();

    result = a / b;
    print("10 / 5 = ");
    print_int(result);
    nline();

    result = a % b;
    print("10 % 5 = ");
    print_int(result);
    nline();
    nline();

    // Test long long
    print("=== Long Long Tests ===");
    nline();

    long long big1 = 1234567890;
    print("big1 = ");
    print_int(big1);
    nline();

    long long big2 = 9876543210;
    print("big2 = ");
    print_int(big2);
    nline();

    long long big_sum = big1 + big2;
    print("big1 + big2 = ");
    print_int(big_sum);
    nline();
    nline();

    // Test negative numbers
    print("=== Negative Number Tests ===");
    nline();

    int neg = -42;
    print("neg = ");
    print_int(neg);
    nline();

    long long neg_big = -9999999999;
    print("neg_big = ");
    print_int(neg_big);
    nline();
    nline();

    // Test unsigned (stored as signed but should work for small values)
    print("=== Unsigned Tests ===");
    nline();

    unsigned int u_val = 100;
    print("unsigned int (100) = ");
    print_int(u_val);
    nline();

    unsigned long long u_big = 5555555555;
    print("unsigned long long (5555555555) = ");
    print_int(u_big);
    nline();
    nline();

    // Test edge cases
    print("=== Edge Cases ===");
    nline();

    int zero = 0;
    print("zero = ");
    print_int(zero);
    nline();

    int one = 1;
    print("one = ");
    print_int(one);
    nline();

    int minus_one = -1;
    print("minus one = ");
    print_int(minus_one);
    nline();
    nline();

    // Test char types
    print("=== Char Tests ===");
    nline();

    char c = 65;  // ASCII 'A'
    print("char (65) = ");
    print_int(c);
    nline();

    signed char sc = -10;
    print("signed char (-10) = ");
    print_int(sc);
    nline();

    unsigned char uc = 255;
    print("unsigned char (255) = ");
    print_int(uc);
    nline();
    nline();

    // Test short types
    print("=== Short Tests ===");
    nline();

    short s = 1000;
    print("short (1000) = ");
    print_int(s);
    nline();

    unsigned short us = 60000;
    print("unsigned short (60000) = ");
    print_int(us);
    nline();
    nline();

    // Complex expression
    print("=== Complex Expression ===");
    nline();
    result = (a + b) * 2 - 10 / 5;
    print("(10 + 5) * 2 - 10 / 5 = ");
    print_int(result);
    nline();

    print("=== All tests complete! ===");
    nline();
}