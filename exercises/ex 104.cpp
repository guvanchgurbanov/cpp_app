//
// Created by Guga on 01-Jan-26.
//#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "N sany girizin : ";
    cin >> n ;

    while (n > 0) {
        cout << n % 10 << " ";
        n = n / 10;
    }

    return 0;
}