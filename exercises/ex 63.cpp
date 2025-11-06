//
// Created by Guga on 03-Nov-25.
//#include <iostream>

using namespace std;

int main() {
    int yyl;

    cout << "Yyl giriz: ";
    cin >> yyl;

    if ((yyl % 4 == 0 && yyl % 100 != 0) || (yyl % 400 == 0)) {
        cout << "Uzak yyl";
    } else {
        cout << "Adaty yyl";
    }


    return 0;
}