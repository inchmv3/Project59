#include "logic.h"


int main() {

	int n, m;
	int matrix[N_SIZE][M_SIZE];
	do
	{
		system("cls");
		cout << "input size's : n and m: \n";
		cin >> n >> m;
	} while (n <=0 || m <=0 || n != m);

	init(matrix, n, m, 10, 99);

	print("matrix: \n" + convert(matrix, n, m));

	int sum = sum_diag_elem(matrix, n, m);

	print("\n sum: " + to_string(sum) + "\n");

	return 0;
}