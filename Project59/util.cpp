#include "util.h"

void print(string text) {
	cout << text;
}
void init(int matrix[N_SIZE][M_SIZE], int n, int m, int a, int b) {
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++) {
			matrix[i][j] = rand() % (b - a + 1) + a;
		}
	}
}
string convert(int matrix[N_SIZE][M_SIZE], int n, int m) {
	string s = "";

	for (int i = 0; i < n; i++)
	{
		s += to_string(matrix[i][0]);

		for (int j = 1; j < m; j++) {
			s += " " + to_string(matrix[i][j]);
		}
		s += "\n";
	}

	return s;
}