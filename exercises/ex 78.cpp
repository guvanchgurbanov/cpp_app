#include <iostream>

using namespace std;

int main() {
    int n;
    cout <<"N number enter: ";
    cin >> n;

    int total = 0;
    for(int i = 1; i <= n; i++) {
        int odd = 2 * i - 1;
        cout << i << " ";
        total += odd;
    }
    cout << endl;
    cout << "Total number: " << total << endl;

    return 0;
}