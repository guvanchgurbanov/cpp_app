#include <iostream>

using namespace std;

int main() {
    int suyjinbahsy;
    cout << "suyjin klesinin bahasyny giriz:";
    cin >> suyjinbahsy;

    for (int i = 0.1; i <=1 ; i++) {
        cout << i << " kg suyjinin bahasy: " ;
        cout << suyjinbahsy * i  << "manat"<< endl;
    }
    cout << endl;
    return 0;
}