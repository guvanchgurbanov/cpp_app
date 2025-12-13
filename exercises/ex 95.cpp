//
// Created by Guga on 13-Dec-25.
//#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "N sany girizin : ";
    cin >> n ;

    double fact = 1;

    for (int i = n; i > 0; i = i - 2) {
        fact = fact * i;
    }
    cout << fact;

    return 0;
}