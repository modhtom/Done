#include <iostream>
using namespace std;
int main()
{
	char a;
	cin >> a;
	if (a >= 97 && a <= 122) {
		cout << "ALPHA" <<"\nIS SMALL" << endl;
	}
	else if (a >= 65 && a <= 90) {
		cout << "ALPHA" <<"\nIS CAPITAL" << endl;
	}
	else
		cout << "IS DIGIT" << endl;
}