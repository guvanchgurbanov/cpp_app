//
// Created by Guga on 02-Nov-25.
//#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int x ;
    cout << " Enter Number：" ;
    cin >> x;

    if ( x > 0) {
        cout << 2 * sin(x);
    } else {
        cout << 6 - x;
    }

    return 0;
}