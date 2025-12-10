//
// Created by Guga on 10-Dec-25.
//#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "N sany girizin N > K : ";
    cin >> n ;


    while (n % 3 == 0) {
        n = n / 3;
    }

    if (n == 1)
        cout << "TRUE";
    else
        cout << "FALSE";

    return 0;
}