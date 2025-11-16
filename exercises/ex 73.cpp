//
// Created by Guga on 07-Nov-25.
//#include <iostream>

using namespace std;

int main() {
    int a,b;
    cout <<"A number enter: ";
    cin >> a;
    cout <<"B number enter: ";
    cin >> b;

    int total = 1;
    cout << "Numbers: ";
    for (int i = a; i <= b ; i++) {
        cout <<i;
        total = total * i;
    }
    cout << endl;
    cout << "Total number: " << total << endl;

    return 0;
}