//
// Created by Guga on 21-Dec-25.
//#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "N sany girizin : ";
    cin >> n ;

    int sum = 0;
    int k = 0;

    for (int i = 1; ; i++) {
        sum += i;
        k = i;

        if (sum >= n) {
            break;
        }
    }
    cout << k << " " << sum;;

    return 0;
}