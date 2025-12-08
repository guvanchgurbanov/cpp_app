//
// Created by Guga on 08-Dec-25.
//#include <iostream>
using namespace std;

int main() {
    int a,b;
    cout <<"N number enter: ";
    cin >> a;
    cout <<"B number enter:";
    cin >> b;

    int count = 0;

    while (a >= b) {
        a = a - b;

        count++ ;
    }
    cout << count;

    return 0;
}