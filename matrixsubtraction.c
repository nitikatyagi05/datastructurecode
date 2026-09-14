#include <stdio.h>

int main() {
    int rows, cols;

    // 1. Get matrix dimensions from user
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix1[rows][cols];
    int matrix2[rows][cols];
    int result[rows][cols];

    // 2. Input elements for the first matrix
    printf("\nEnter elements of the 1st matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // 3. Input elements for the second matrix
    printf("\nEnter elements of the 2nd matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // 4. Perform matrix subtraction
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }

    // 5. Display the result matrix
    printf("\nResultant Matrix (Matrix 1 - Matrix 2):\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n"); // Newline after each row
    }

    return 0;
}
