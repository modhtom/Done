#include <iostream>
using namespace std;
int main()
{
    char let;int vol = 0;
    cout << "enter 5 characters : ";
    for (int i = 0; i < 5; i++) {
        cin >> let;
        switch (let) {
        case ('a'):
        case('A'):
            vol++;
            break;
        case ('e'):
        case('E'):
            vol++;
            break;
        case ('i'):
        case('I'):
            vol++;
            break;
        case ('o'):
        case('O'):
            vol++;
            break;
        case ('u'):
        case('U'):
            vol++;
            break;
        }
    }
    cout << "You entered " << vol << " vowels";
}