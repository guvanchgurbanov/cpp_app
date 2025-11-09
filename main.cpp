#include <iostream>

using namespace std;

int main() {
    double n;
    cout <<"N number enter: ";
    cin >> n;

    double total = 1.0;
    cout << "Numbers: ";
    for (double i = 1; i <= n ; i++) {
        cout <<i;
        total = total * (1 + i * 0.1);
    }
    cout << endl;
    cout << "Total number: " << total << endl;

    return 0;
}