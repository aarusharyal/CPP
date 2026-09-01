#include <stdio.h>

int binaryAddition(int a, int b) {
    int carry;

    while (b != 0) {
        carry = a & b;
        a = a ^ b;
        b = carry << 1;
    }

    return a;
}
int binaryMultiplication(int a, int b) {
    int result = 0;

    while (b > 0) {
        if (b & 1)
            result = binaryAddition(result, a);

        a <<= 1;
        b >>= 1;
    }

    return result;
}

int main() {
    int a = 5, b = 3;

    printf("Binary Addition of %d and %d = %d\n",
           a, b, binaryAddition(a, b));

    printf("Binary Multiplication of %d and %d = %d\n",
           a, b, binaryMultiplication(a, b));

    return 0;
}