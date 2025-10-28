//
// Created by Guga on 25-Oct-25.
//#include <iostream>

using namespace std;

int main() {
    int a, b, c;

    cout << "1nji sany giriz: ";
    cin >> a;
    cout << "2nji sany giriz: ";
    cin >> b;
    cout << "3nji sany giriz: ";
    cin >> c;

    if ( a < b && b < c ) {
        a = a * 2;
        b = b * 2;
        c = c * 2;
    } else {
        a = a * -1;
        b = b * -1;
        c = c * -1;
    }

    cout << a << ", " << b << ", " << c << endl;

    return 0;
}
