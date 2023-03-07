#include <iostream>
using namespace std;
void input(int a, int b, int m[10][10]) {
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			cin >> m[i][j];
		}
	}
}
void dis(int a, int b, int m[10][10]) {
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			cout << m[i][j] << " ";
		}
		cout << endl;
	}
}
void dia(int a, int b, int m[10][10]) {
	for (int i = 0; i < a; i++) {
		cout << m[i][i]<<" ";
	}
}
void all() {
	int rows, colums, mat[10][10];
	cout << "Enter number of rows (10 is max) :";
	cin >> rows;
	cout << "Enter number of colums (10 is max) :";
	cin >> colums;
	cout << "enter the matrix : \n";
	input(rows, colums, mat);
	cout << "the matrix :\n";
	dis(rows, colums, mat);
	cout << "the diagonal : \n";
	dia(rows, colums, mat);
}
int main()
{
	all();
	return 0;
}