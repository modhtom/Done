#include <iostream>
using namespace std;
int main()
{
    int a,sum=0, b,i=0;
    cout << "Enter two numbers : ";
        cin >> a >> b;
        while (i<b)
        {
            sum += a;
            i++;
        }
        cout << sum;
}