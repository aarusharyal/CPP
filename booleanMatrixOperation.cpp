#include <stdio.h>

#define SIZE 3

void join(int A[SIZE][SIZE], int B[SIZE][SIZE]) {
    printf("Join (OR) of matrices:\n");

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", A[i][j] | B[i][j]);
        }
        printf("\n");
    }
}

void product(int A[SIZE][SIZE], int B[SIZE][SIZE]) {
    printf("Boolean Product of matrices:\n");

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            int result = 0;

            for (int k = 0; k < SIZE; k++) {
                result |= A[i][k] & B[k][j];
            }

            printf("%d ", result);
        }
        printf("\n");
    }
}

int main() {
    int A[SIZE][SIZE] = {
        {1, 0, 1},
        {0, 1, 1},
        {1, 1, 0}
    };

    int B[SIZE][SIZE] = {
        {0, 1, 0},
        {1, 0, 1},
        {0, 1, 1}
    };

    join(A, B);
    product(A, B);

    return 0;
}