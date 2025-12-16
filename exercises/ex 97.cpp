//
// Created by Guga on 16-Dec-25.
//#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "N sany girizin : ";
    cin >> n ;

    int K = 0;

    while ((K + 1) * (K + 1) <= n ){
        K++;
    }
    cout << K;

    return 0;
}