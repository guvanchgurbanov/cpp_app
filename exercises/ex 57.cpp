//
// Created by Guga on 26-Oct-25.
//#include <iostream>

using namespace std;

int main() {
    int a, b, c, d;

    cout << "1nji sany giriz: ";
    cin >> a;
    cout << "2nji sany giriz: ";
    cin >> b;
    cout << "3nji sany giriz: ";
    cin >> c;
    cout << "4nji sany giriz: ";
    cin >> d;

    if (a == b && b == c && c == d) {
        cout << " Hemme sanlar menzesh ";
    } else if (a == b && b == c && c != d) {
        cout << " 4-nji orundaky san ";
    } else if (a != b && b == c && c == d) {
        cout << "1-nji orundaky san ";
    } else if (a == c && b != a && c == d) {
        cout << "2-nji orundaky san ";
    } else if (a == b && b != c && b == d) {
        cout << "3-nji orundaky san ";
    } else {
        cout << "Hic biri menzes dal ";
    }

    cout << endl;

    return 0;
}
