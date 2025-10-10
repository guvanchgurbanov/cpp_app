//
// Created by Guga on 03-Oct-25.
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

    int  min = a ;

    if ( min > b ) {
        min = b;
    }if ( min > c) {
        min = c;
    }

    cout << min << endl;

    return 0;
}