#include <iostream>
using namespace std;
void in_swap() {
	int a = 9, b = 10;
	cout << "before swap #! : " << a << " " << b << endl;
	swap(a, b);
	cout << "before swap #2 : " << a << " " << b << endl;
	swap_2(&a, &b);
}
void swap(int &a,int &b) {
	int temp = a;
	  a=b;
	b = temp;
	cout << "after swap #1 :" << a << " " << b<<endl;
}
void swap_2(int* a, int* b) {
	int temp =*a;
	*a = *b;
	*b = temp;
	cout << "after swap #2 :" << *a << " " << *b<<endl;
}
int main()
{
	in_swap();
	return 0;
}