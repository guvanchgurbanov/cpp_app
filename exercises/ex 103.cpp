//
// Created by Guga on 29-Dec-25.
//#include <iostream>
using namespace std;

int main() {
    double a;
    cout << "A sany girizin : ";
    cin >> a ;

    double sum = 0.0;
    int k = 0;

    while (sum + 1.0 / (k + 1) <= a) {
        k++;
        sum = sum + 1.0 / k;
    }

    cout << "K = " << k << endl;
    cout << "Sum = " << sum << endl;

    return 0;
}