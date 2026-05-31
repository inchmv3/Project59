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