//
// Created by Guga on 06-Jan-26.
//#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "N sany girizin : ";
    cin >> n ;

    int ters = 0;

    while (n > 0) {
        int sifr = n % 10;
        ters = ters * 10 + sifr;
        n = n / 10;
    }

    cout << ters << endl;

    return 0;
}