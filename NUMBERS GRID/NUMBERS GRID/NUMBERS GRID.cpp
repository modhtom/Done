#include <iostream>
using namespace std;
int main()
{
	int num;
   cout << "enter a number : ";
   cin >> num;
   for (int i = 1; i <= num * num; i++) {
	   cout << i << " ";
	   if (i % num == 0 && i!=25) {
		   cout << endl;
	   }
   }
}