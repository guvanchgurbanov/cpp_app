//
// Created by Guga on 07-Dec-25.
//#include <iostream>
using namespace std;

int main() {
    int a,b;
    cout <<"N number enter: ";
    cin >> a;
    cout <<"B number enter:";
    cin >> b;

    while (a >= b) {
        a = a - b;
    }

    cout << a;

    return 0;
}