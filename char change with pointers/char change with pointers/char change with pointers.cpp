#include <iostream>
using namespace std;
int main()
{
    char a[5] = { 'a','b','c','d'};
    cout << "char without edit :";
    for(int i=0;i<5;i++)
        cout<<a[i]<<" ";
    char* p;
    p = a;
    *p = 'q';
    p++;
    *p = 'w';
    p++;
    *p = 'e';
    p++;
    *p = 'r';
    cout << "char with edit :";
    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";
}
