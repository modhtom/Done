#include <iostream>
using namespace std;
void input(int a,int b,int m[10][10]) {
   for (int i = 0; i < a; i++) {
	   for (int j = 0; j < b; j++) {
		   cin >> m[i][j];
	   }
   }
}
void dis(int a, int b, int m[10][10]) {
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			cout<< m[i][j]<<" ";
		}
		cout << endl;
	}
}
void mat_sum(int a, int b, int m[10][10], int s[10][10], int c[10][10]) {
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			m[i][j]= s[i][j]+ c[i][j];
			cout << m[i][j]<<" ";
		}
		cout << endl;
	}
}
void all() {
	int rows, colums, mat_1[10][10], mat_2[10][10], sum[10][10];
	cout << "Enter number of rows (10 is max) :";
	cin >> rows;
	cout << "Enter number of colums (10 is max) :";
	cin >> colums;
	cout << "enter matrix #1 : \n";
	input(rows, colums, mat_1);
	cout << "enter matrix #2 : \n";
	input(rows, colums, mat_2);
	cout << "matrix #1 :\n";
	dis(rows, colums, mat_1);
	cout << "matrix #2 :\n";
	dis(rows, colums, mat_2);
	cout << "the sum of the two matrixes : \n";
	mat_sum(rows, colums, sum, mat_1, mat_2);
}
int main()
{
	all();
   return 0;
}