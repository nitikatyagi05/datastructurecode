#include <stdio.h>

int main() {
    int rows, cols, i, j;
    
    // 1. Get matrix dimensions from the user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    
    // Declare matrices with user-defined dimensions
    int a[rows][cols], b[rows][cols], sum[rows][cols];
    
    // 2. Input elements for the first matrix
    printf("\nEnter elements of the 1st matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Enter element a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    
    // 3. Input elements for the second matrix
    printf("\nEnter elements of the 2nd matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Enter element b[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    
    // 4. Perform element-wise matrix addition
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    
    // 5. Print the resulting sum matrix
    printf("\nResultant Matrix (A + B):\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n"); // Newline after each row
    }
    
    return 0;
}
