//
// Created by Guga on 12-Jan-26.
//#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "N sany girizin : ";
    cin >> n ;

    bool bar = false;

    while (n > 0) {
        int sifr = n % 10;

        if (sifr == 2) {
            bar = true;
            break;
        }

        n = n / 10;
    }

    if (bar)
        cout << "TRUE";
    else
        cout << "FALSE";

    return 0;
}