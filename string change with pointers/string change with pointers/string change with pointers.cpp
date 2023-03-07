#include <iostream>
using namespace std;
int main()
{
    char c;
    string a[5] = { "a","b","c","d","f"};
    cout << "array without edit :";
    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";
    cout << endl;
    for (int i = 0; i < 5; i++){
        cout << "enter a char :";
        cin >> c;
       *(a + i) = c; }
    cout << "\narray with edit :";
    for (int i = 0; i < 5; i++)
        cout << *(a+i) << " ";
}
