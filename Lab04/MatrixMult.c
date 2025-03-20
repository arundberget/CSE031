
#include <stdio.h>
#include <stdlib.h>

int** matMult(int **a, int **b, int size) {
	// (4) Implement your matrix multiplication here. 
	// You will need to create a new matrix to store the product.
	int **result = (int**) malloc(size * sizeof(int*)); // allocate memory for matrix

	for (int i = 0; i < size; i++) {
		result[i] = (int*) malloc(size * sizeof(int)); // allocate memory for each row
		for (int j = 0; j < size; j++) {
			result[i][j] = 0;
			for (int k = 0; k < size; k++) {
				result[i][j] += a[i][k] * b[k][j]; // multiply
			}
		}
	}
	return result; // return matrix
}

void printArray(int **arr, int n) {
	// (2) Implement your printArray function here
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

}

int main() {
	int n = 4;
	int **matA, **matB, **matC;
	// (1) Define 2 (n x n) arrays (matrices). 
	matA = (int**) malloc(n * sizeof(int*));
	matB = (int**) malloc(n * sizeof(int*));

	for (int i = 0; i < n; i++) {
		matA[i] = (int*) malloc(n * sizeof(int*));
		matB[i] = (int*) malloc(n * sizeof(int*));
	}

	matA[0][0] = 1; matA[0][1] = 2; matA[0][2] = 3; matA[0][3] = 4;
    matA[1][0] = 5; matA[1][1] = 6; matA[1][2] = 7; matA[1][3] = 8;
    matA[2][0] = 9; matA[2][1] = 10; matA[2][2] = 11; matA[2][3] = 12;
    matA[3][0] = 13; matA[3][1] = 14; matA[3][2] = 15; matA[3][3] = 16;

	// identity matrix
	matB[0][0] = 1; matB[0][1] = 0; matB[0][2] = 0; matB[0][3] = 0;
    matB[1][0] = 0; matB[1][1] = 1; matB[1][2] = 0; matB[1][3] = 0;
    matB[2][0] = 0; matB[2][1] = 0; matB[2][2] = 1; matB[2][3] = 0;
    matB[3][0] = 0; matB[3][1] = 0; matB[3][2] = 0; matB[3][3] = 1;
	

	// (3) Call printArray to print out the 2 arrays here.

	printf("Matrix A:\n");
    printArray(matA, n);

    printf("Matrix B:\n");
    printArray(matB, n);
	
	
	// (5) Call matMult to multiply the 2 arrays here.
	matC = matMult(matA, matB, n);
	
	// (6) Call printArray to print out resulting array here.
	printf("Matrix C (Result of A * B):\n");
    printArray(matC, n);

    return 0;
}