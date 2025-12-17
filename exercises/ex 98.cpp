//
// Created by Guga on 17-Dec-25.
//#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "N sany girizin : ";
    cin >> n ;

    int K = 0;
    int p = 1;

    while (p <= n) {
        p = p * 3;
        K++;
    }

    return 0;
}