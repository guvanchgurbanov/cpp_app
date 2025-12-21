//
// Created by Guga on 20-Dec-25.
//#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "N sany girizin : ";
    cin >> n ;

    int K = 0;
    int gymmatlyk = 1;

    while (gymmatlyk * 3 < n) {
        gymmatlyk = gymmatlyk * 3;
        K++;
    }
    cout << K;

    return 0;
}