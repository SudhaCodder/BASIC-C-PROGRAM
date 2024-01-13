// // #include <stdio.h>

// // #define SIZE 3

// // void multiplyMatrices(int firstMatrix[SIZE][SIZE], int secondMatrix[SIZE][SIZE], int result[SIZE][SIZE]) {
// //     for (int i = 0; i < SIZE; ++i) {
// //         for (int j = 0; j < SIZE; ++j) {
// //             result[i][j] = 0;
// //             for (int k = 0; k < SIZE; ++k) {
// //                 result[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
// //             }
// //         }
// //     }
// // }

// // void printMatrix(int matrix[SIZE][SIZE]) {
// //     for (int i = 0; i < SIZE; ++i) {
// //         for (int j = 0; j < SIZE; ++j) {
// //             printf("%d\t", matrix[i][j]);
// //         }
// //         printf("\n");
// //     }
// // }

// // int main() {
// //     int firstMatrix[SIZE][SIZE] = {
// //         {1, 2, 3},
// //         {4, 5, 6},
// //         {7, 8, 9}
// //     };

// //     int secondMatrix[SIZE][SIZE] = {
// //         {9, 8, 7},
// //         {6, 5, 4},
// //         {3, 2, 1}
// //     };

// //     int resultMatrix[SIZE][SIZE];

// //     multiplyMatrices(firstMatrix, secondMatrix, resultMatrix);

// //     printf("First Matrix:\n");
// //     printMatrix(firstMatrix);

// //     printf("\nSecond Matrix:\n");
// //     printMatrix(secondMatrix);

// //     printf("\nProduct of the Matrices:\n");
// //     printMatrix(resultMatrix);

// //     return 0;
// // }


// #include <stdio.h>

// #define SIZE 3

// void addMatrices(int firstMatrix[SIZE][SIZE], int secondMatrix[SIZE][SIZE], int result[SIZE][SIZE]) {
//     for (int i = 0; i < SIZE; ++i) {
//         for (int j = 0; j < SIZE; ++j) {
//             result[i][j] = firstMatrix[i][j] + secondMatrix[i][j];
//         }
//     }
// }

// void printMatrix(int matrix[SIZE][SIZE]) {
//     for (int i = 0; i < SIZE; ++i) {
//         for (int j = 0; j < SIZE; ++j) {
//             printf("%d\t", matrix[i][j]);
//         }
//         printf("\n");
//     }
// }

// int main() {
//     int firstMatrix[SIZE][SIZE] = {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9}
//     };

//     int secondMatrix[SIZE][SIZE] = {
//         {9, 8, 7},
//         {6, 5, 4},
//         {3, 2, 1}
//     };

//     int resultMatrix[SIZE][SIZE];

//     addMatrices(firstMatrix, secondMatrix, resultMatrix);

//     printf("First Matrix:\n");
//     printMatrix(firstMatrix);

//     printf("\nSecond Matrix:\n");
//     printMatrix(secondMatrix);

//     printf("\nSum of the Matrices:\n");
//     printMatrix(resultMatrix);

//     return 0;
// }


#include <stdio.h>

// Function to input a matrix
void inputMatrix(int rows, int cols, int matrix[rows][cols]) {
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("Enter element [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to print a matrix
void printMatrix(int rows, int cols, int matrix[rows][cols]) {
    printf("Matrix:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to add two matrices
void addMatrices(int rows, int cols, int matrix1[rows][cols], int matrix2[rows][cols], int result[rows][cols]) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

int main() {
    int rows, cols;

    // Input matrix dimensions
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Declare matrices
    int matrix1[rows][cols], matrix2[rows][cols], result[rows][cols];

    // Input matrices
    printf("\nEnter values for the first matrix:\n");
    inputMatrix(rows, cols, matrix1);

    printf("\nEnter values for the second matrix:\n");
    inputMatrix(rows, cols, matrix2);

    // Add matrices
    addMatrices(rows, cols, matrix1, matrix2, result);

    // Print matrices and their sum
    printf("\n");
    printMatrix(rows, cols, matrix1);
    printf("\n+\n\n");
    printMatrix(rows, cols, matrix2);
    printf("\n=\n\n");
    printMatrix(rows, cols, result);

    return 0;
}
