//
// Created by Guga on 29-Nov-25.
//#include <iostream>

using namespace std;

int main() {
    int n;
    cout <<"N number enter: ";
    cin >> n;

    double fact = 1;

    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    cout <<fact ;

    return 0;
}