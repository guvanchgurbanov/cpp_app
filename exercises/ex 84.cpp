//
// Created by Guga on 27-Nov-25.
//#include <iostream>

using namespace std;

int main() {
    int n;
    cout <<"N number enter: ";
    cin >> n;

    double sum = 0;
    double fact = 1;

    for (int i = 1; i <= n; i++) {
        fact = fact * i;
        sum = sum + fact;
    }
    cout << sum;

    return 0;
}