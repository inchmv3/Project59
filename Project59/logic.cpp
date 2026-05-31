#include "logic.h"
int sum_diag_elem(int matrix[N_SIZE][M_SIZE], int n, int m) {
	if (n <= 0 || m <= 0 || n != m) {
		return -1;
	}

	int sum = 0;

	for (int i = 0; i < n; i++)
	{
		sum += matrix[i][i];
	}
	return sum;
}
int sum_add_diag_elem(int matrix[N_SIZE][M_SIZE], int n, int m) {
	if (n <= 0 || m <= 0 || n != m) {
		return -1;
	}

	int sum = 0;

	for (int i = 0; i < n; i++)
	{
		sum += matrix[i][n - 1 - i];
	}
	return sum;
}
int sum_all_diag(int matrix[N_SIZE][M_SIZE], int n, int m) {
	int sum_all = sum_add_diag_elem(matrix, n, m) +
		sum_diag_elem(matrix, n, m);
	return sum_all;
}
int sum_und_diag(int matrix[N_SIZE][M_SIZE], int n) {
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		for (int i = 0; i < n; i++)
		{

		}
	}
}

