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

    if ( a == b && b == c ) {
        cout << " Hemme sanlar menzesh " ;

    }
    else if ( a == b && b != c ) {
        cout << " 3-nji orundaky san ";
    } else if ( a != b && b == c ) {
        cout << "1-nji orundaky san " ;
    } else if ( a == c && b != a ) {
        cout << "2-nji orundaky san ";
    } else {
        cout << "Hic biri menzes dal ";
    }

    cout << endl;

    return 0;
}