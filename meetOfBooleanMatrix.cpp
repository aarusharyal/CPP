#include <stdio.h>

#define SIZE 3

void meet(int A[SIZE][SIZE], int B[SIZE][SIZE]) {
    printf("Meet (AND) of matrices:\n");

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", A[i][j] & B[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int A[SIZE][SIZE] = {
        {1, 0, 1},
        {1, 1, 0},
        {0, 1, 1}
    };

    int B[SIZE][SIZE] = {
        {0, 1, 1},
        {1, 0, 1},
        {1, 1, 0}
    };

    meet(A, B);

    return 0;
}