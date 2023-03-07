#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;
    num = num % 12;
    if (num >= 6){
        cout << "okay";
          }else {
            cout<<"not enough.";
          }
    return 0;
}