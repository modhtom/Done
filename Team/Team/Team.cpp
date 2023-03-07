#include <iostream>
using namespace std;
int main()
{
    int times, number_p, number_v, number_t, counter = 0;
    cin >> times;
    for (int i = 0; i < times; i++) {
        cin >> number_p; cin >> number_v; cin >> number_t;
            if (number_v + number_p +number_t>=2) {
                counter++;
            }
    }
    cout << counter;
}