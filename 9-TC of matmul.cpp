#include <stdio.h>
#include <time.h>
#define N 100
void multiplyMatrices(int firstMatrix[][N], int secondMatrix[][N], int result[][N], int rows, int cols, int common) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < common; ++k) {
                result[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}
int main() {
    int firstMatrix[N][N], secondMatrix[N][N], result[N][N], rows, cols, common;
    printf("Enter the number of rows and columns of the first matrix: ");
    scanf("%d %d", &rows, &common);
    printf("Enter the number of columns of the second matrix: ");
    scanf("%d", &cols);
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < common; ++j) {
            scanf("%d", &firstMatrix[i][j]);
        }
    }
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < common; ++i) {
        for (int j = 0; j < cols; ++j) {
            scanf("%d", &secondMatrix[i][j]);
        }
    }

    clock_t start = clock();
    multiplyMatrices(firstMatrix, secondMatrix, result, rows, cols, common);
    clock_t end = clock();
    double time_taken = ((double)end - start) / CLOCKS_PER_SEC;

    printf("Resultant matrix:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    printf("Time taken: %f seconds\n", time_taken);

    return 0;
}
