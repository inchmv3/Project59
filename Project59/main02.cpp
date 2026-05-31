#include "logic.h"


int main() {

	int n, m;
	int matrix[N_SIZE][M_SIZE];
	do
	{
		system("cls");
		cout << "input size's : n and m: \n";
		cin >> n >> m;
	} while (n <= 0 );

	init(matrix, n, n, 10, 99);

	print("matrix: \n" + convert(matrix, n, n));

	int sum = sum_add_diag_elem(matrix, n, n);

	print("\n sum: " + to_string(sum) + "\n");


	return 0;
}