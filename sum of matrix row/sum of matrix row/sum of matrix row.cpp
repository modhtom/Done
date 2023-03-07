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
void mat_sum_row(int a, int b, int m[10][10]) {
	for (int i = 0; i < a; i++) {
	int sum = 0;
		for (int j = 0; j < b; j++) {
			sum+=m[i][j];
		}
			cout << "row #"<<i+1<<" = "<<sum<<endl;
	}
}
void all() {
	int rows, colums, mat[10][10];
	cout << "Enter number of rows (10 is max) :";
	cin >> rows;
	cout << "Enter number of colums (10 is max) :";
	cin >> colums;
	cout << "enter matrix : \n";
	input(rows, colums, mat);
	cout << "matrix :\n";
	dis(rows, colums, mat);
	cout << "the sum of the two matrixes : \n";
	mat_sum_row(rows, colums,mat);
}
int main()
{
	all();
	return 0;
}