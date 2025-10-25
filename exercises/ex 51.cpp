4//
// Created by Guga on 20-Oct-25.
//    #include <iostream>

    using namespace std;

int main() {
    int a, b, c;

    cout << "1nji sany giriz: ";
    cin >> a;
    cout << "2nji sany giriz: ";
    cin >> b;
    cout << "3nji sany giriz: ";
    cin >> c;

    int min = a;
    if (b < min) {
        min = b;
    }
    if (c < min) {
        min = c;
    }

    int max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }

    if (a > min && a < max) {
        cout << "Ortaky san: " << a << endl;
    }
    if (b > min && b < max) {
        cout << "Ortaky san: " << b << endl;
    }
    if (c > min && c < max) {
        cout << "Ortaky san: " << c << endl;
    }

    return 0;
}