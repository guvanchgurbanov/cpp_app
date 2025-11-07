#include <iostream>

using namespace std;

int main() {
    int a,b;
    cout <<"A number enter: ";
    cin >> a;
    cout <<"B number enter: ";
    cin >> b;

    int jem = 0;
    cout << "Numbers: ";
    for (int i = a; i <= b ; i++) {
        cout <<i;
        jem +=i;
    }
    cout << endl;
    cout << "Total number: " << jem << endl;

    return 0;
}