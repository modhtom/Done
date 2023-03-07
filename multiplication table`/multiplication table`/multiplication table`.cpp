#include <iostream>
using namespace std;
int main ()  {
	int answer,limit=11;
	cout << "     table from 1 to 10"<<endl;
	for (int num= 0; num< limit; num++) {
		for (int i = 1; i < limit; i++) {
			answer = num * i;
			cout << answer << " ";
		}cout << endl;
	}
	cout << "" << endl;
	system("pause");
	return 0;
}