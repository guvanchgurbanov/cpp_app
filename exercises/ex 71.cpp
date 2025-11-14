//
// Created by Guga on 07-Nov-25.
//#include <iostream>

using namespace std;

int main() {
    int suyjinbahsy;
    cout << "suyjin klesinin bahasyny giriz:";
    cin >> suyjinbahsy;

    for (double i = 1.2; i <=2 ; i+=0.2) {
        cout << i << " kg suyjinin bahasy: " ;
        cout << suyjinbahsy * i  << "manat"<< endl;
    }
    cout << endl;
    return 0;
}