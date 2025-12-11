//
// Created by Guga on 11-Dec-25.
//#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "N sany girizin : ";
    cin >> n ;

    int k = 0;

    while (n % 2 == 0) {
        n = n / 2;
        k++;
    }

    if (n == 1)
        cout << k;
    else
        cout << "Not power of 2";
    return 0;
}