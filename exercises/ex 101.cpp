//
// Created by Guga on 23-Dec-25.
//#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "N sany girizin : ";
    cin >> n ;

    int sum = 0;
    int k = 0;

    while (sum + (k + 1) <= n) {
        k++;
        sum = sum + k;
    }

    cout << "K = " << k << endl;
    cout << "Sum = " << sum << endl;

    return 0;
}