//
// Created by Guga on 01-Dec-25.
//#include <iostream>
using namespace std;

int main() {
    int n;
    cout <<"N number enter: ";
    cin >> n;

    double sum = 0;

    for (int i = 1; i <= n; i++) {
        sum = sum + i * i;
    }
    cout <<sum ;

    return 0;
}