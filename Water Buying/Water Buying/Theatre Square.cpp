#include <iostream>
using namespace std;
int main()
{
    int m,n,a,i,j;
    cin >> m;
    cin >> n;
    cin >> a;
    i = a * a;
    while (j != i) {
        j = j+ a;
    }
    cout << j;
}