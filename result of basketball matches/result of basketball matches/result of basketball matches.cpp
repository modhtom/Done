#include <iostream>
using namespace std;
int main() {
	int num1, num2, sco1, sco2, matchcounter = 0;
	while (matchcounter <= 4) {
		cout << "enter the result for match " << matchcounter << " : ";
		cin >> num1 >> num2;
		if (num1 == num2) {
			sco1 = sco2 = 1;
		}
		else if (num1 > num2) {
			sco1 = 3;
		}
		else {
			sco2 = 3;
		}
		matchcounter++;
	}
		if (sco1 > sco2) {
			cout << "team 1 wins";
		}
		else {
			cout << "team 2 wins";
		}
}