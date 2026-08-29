#include <stdio.h>

int factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int combination(int n, int r) {
    if (r > n || n < 0 || r < 0) {
        return 0;
    }
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int n = 5, r = 3;
    
    printf("C(%d, %d) = %d\n", n, r, combination(n, r));
    
    return 0;
}
