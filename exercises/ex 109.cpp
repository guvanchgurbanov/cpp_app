//
// Created by Guga on 13-Jan-26.
//#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "N sany girizin : ";
    cin >> n ;

    bool yonekey = true;

    for (int i = 2; i <= n - 1; i++) {
        if (n % i == 0) {
            yonekey = false;
            break;
        }
    }

    if (yonekey)
        cout << "TRUE";
    else
        cout << "FALSE";
    return 0;
}