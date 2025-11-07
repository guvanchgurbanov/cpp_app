//
// Created by Guga on 03-Nov-25.
//#include <iostream>

using namespace std;

int main() {
    int san;
    cout << " San giriz: ";
    cin >> san;

    if ( san == 0 ) {
        cout << "Nol" ;
    }else if ( san > 0) {
        if (san % 2 == 0 ) {
            cout << "Polazitel jubit san";
        }else {
            cout << "Polazitel tak san";
        }
    } else if ( san < 0 ) {
        if ( san % 2 == 0) {
            cout << "Orisatel jubit san";
        }else {
            cout << "Orisatel tak san";
        }
    }
    return 0;
}