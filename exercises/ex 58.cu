//
// Created by Guga on 26-Oct-25.
//#include <iostream>

using namespace std;

int main() {
    int a,b,c ;
    cout << " A nokat girzir: ";
    cin >> a;
    cout << " B nokat girzir: ";
    cin >> b;
    cout << " c nokat girzir: ";
    cin >> c;

    int difAB  = a < b ? b - a : a - b ;
    int difAC  = a < c ? c - a : a - c ;

    if (difAB < difAC ) cout << "B has yakyn ";
    else if (difAC < difAB ) cout << "C has yakyn ";
    else cout << " ikisem yakynlygy den";

    return 0;
}
