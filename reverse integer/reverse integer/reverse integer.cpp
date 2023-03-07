#include <iostream>
using namespace std;
int main()
{
	int numbers[20], num;
	cout << "Enter the numbers : ";
	for (int i = 0; i < 20; i++) {
		cin >> num;
		numbers[i] = num;
	}
	cout << "Reversed : " << endl;
	for (int i =19; i>=0; i--) {
		cout<<numbers[i]<<" ";
	}
}