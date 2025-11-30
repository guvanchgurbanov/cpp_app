//
// Created by Guga on 30-Nov-25.
//#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n,k;
    cout <<"N number enter: ";
    cin >> n;
    cout <<"K Number enter:";
    cin >> k;

    double sum = 0;

    for (int i = 1; i <= n; i++) {
        sum = sum + pow (i, k);;
    }
    cout <<sum ;

    return 0;
}