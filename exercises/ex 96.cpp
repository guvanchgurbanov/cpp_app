//
// Created by Guga on 15-Dec-25.
//#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "N sany girizin : ";
    cin >> n ;

    int K = 1;

    while (K * K <= n) {
        K++;
    }
    cout << K;

    return 0;
}