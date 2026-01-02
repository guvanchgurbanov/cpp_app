//
// Created by Guga on 02-Jan-26.
//#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "N sany girizin : ";
    cin >> n ;

    int count = 0;
    int sum = 0;


    while (n > 0) {
        int digit = n % 10;
        sum += digit;
        count++;
        n = n / 10;
    }

    cout << "Digits count = " << count << endl;
    cout << "Digits sum = " << sum << endl;

    return 0;
}