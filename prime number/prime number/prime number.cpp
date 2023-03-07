#include <iostream>  
using namespace std;
int main(){
    int n,l=0, i, m = 0, flag = 0;
    for (; l < 10; l++) {
        cout << "Enter Number: ";
        cin >> n;
        m = n / 2;
        for (i = 2; i <= m; i++)
        {
            if (n % i == 0)
            {
                cout << n << " number is not Prime." << endl;
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            cout << n << " number is Prime." << endl;
    }return 0;
}